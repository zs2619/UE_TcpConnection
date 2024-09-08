#include "TcpConnectionThread.h"
#include "SocketSubsystem.h"
#include "Serialization/ArrayWriter.h"
#include "Serialization/ArrayReader.h"

DEFINE_LOG_CATEGORY(LogTcpConnectionThread);

FTcpConnectionThread::FTcpConnectionThread()
	:runThread(nullptr),
	runFlag(false),
	socket(nullptr),
	connectionState(TCS_ConnectInit),
	connectingTime(0.f),
	lastTickTime(0.f),
	eventHandler(nullptr),
	reconnectPendingTime(0.f),
	recvMsgBuffWROffset(0),
	socketSubsystem(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM))
{
	threadTickTime = 1.0f / 120.0f; 

#define MsgBuffSize	(1024 * 128)
	sendMsgBuff.SetNum(MsgBuffSize);
	recvMsgBuff.SetNum(MsgBuffSize);
}

FTcpConnectionThread::~FTcpConnectionThread()
{
	UE_LOG(LogTcpConnectionThread, Log, TEXT("FTcpConnectionThread::~FTcpConnectionThread"));
	Dispose();
}

void FTcpConnectionThread::Dispose()
{
	if (runThread != nullptr)
	{
		Stop();
	}
	if (socket != nullptr)
	{
		socket->Close();
	}
	if (runThread)
	{
		runThread->WaitForCompletion();
		delete runThread;
		runThread = nullptr;
	}
	if (socket != nullptr)
	{
		socketSubsystem->DestroySocket(socket);
		socket = nullptr;
	}
}

bool FTcpConnectionThread::SetRemoteURL(const FString &inRemoteURL)
{
	remoteURL = inRemoteURL;

	FString tempHost;
	FString tempPort;
	if (!remoteURL.Split(":", &tempHost, &tempHost))
		return false;
	port = FCString::Atoi(*tempPort);
	host = tempHost;
	return true;
}

bool FTcpConnectionThread::InitConnect()
{
	FAddressInfoResult resolvedResult = socketSubsystem->GetAddressInfo(*host, nullptr, EAddressInfoFlags::Default, NAME_None, ESocketType::SOCKTYPE_Unknown);
    if (resolvedResult.Results.Num() < 1|| resolvedResult.ReturnCode != SE_NO_ERROR)
    {
        UE_LOG(LogTcpConnectionThread, Error, TEXT("FTcpConnectionThread::InitConnect GetAddressInfo host:%s fail error %d"), *remoteURL,resolvedResult.ReturnCode);
        return false;
    }
    remoteAddr = resolvedResult.Results[0].Address->Clone();
	remoteAddr->SetPort(port);

	eventHandler.Pin()->SetTcpConnectionThread(AsShared());
	runFlag = true;
	reconnectPendingTime = 0.f;

	lastTickTime=FPlatformTime::Seconds();

	if (FPlatformProcess::SupportsMultithreading() || FForkProcessHelper::SupportsMultithreadingPostFork())
	{
		FPlatformAtomics::InterlockedExchangePtr((void**)&runThread, FForkProcessHelper::CreateForkableThread(this,TEXT("TcpConnectionThread"), 0, TPri_BelowNormal));
	}

	return true;
}


void FTcpConnectionThread::SetEventHandler( TSharedPtr<FEventHandler>&  handler)
{
	eventHandler=handler;
	eventHandler.Pin()->SetTcpConnectionThread(AsShared());
}

bool FTcpConnectionThread::Init()
{
	return true;
}

void FTcpConnectionThread::Exit()
{
}

void FTcpConnectionThread::Stop()
{
	runFlag = false;
	if (socket != nullptr)
	{
		socket->Shutdown(ESocketShutdownMode::ReadWrite);
	}
}

void FTcpConnectionThread::Tick()
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FTcpConnectionThread_Tick);

	double tickTime= FPlatformTime::Seconds();
	double deltaTime = tickTime - lastTickTime;
	lastTickTime = tickTime;

	if (connectionState == TCS_ConnectInit)
	{
		socket = socketSubsystem->CreateSocket(NAME_Stream, TEXT("TcpConnectionThread"), false);
		if (!socket)
		{
			connectionState = TCS_Closed;
			return;
		}
		int32 newSize = 0;
#define SocketRecvBufferSize 512 * 1024
#define SocketSendBufferSize 512 * 1024
		socket->SetReceiveBufferSize(SocketRecvBufferSize, newSize);
		socket->SetSendBufferSize(SocketSendBufferSize, newSize);
		socket->SetNoDelay(true);
		socket->SetNonBlocking(true);

		UE_LOG(LogTcpConnectionThread, Log, TEXT("socket->Connect %s"),*(remoteURL)); 
		bool bConnected = socket->Connect(*remoteAddr);
		if (bConnected)
		{
			connectionState = TCS_Connecting;
		}
		else
		{
			UE_LOG(LogTcpConnectionThread, Log, TEXT("socket->Connect failed url(%s) lasterror(%d)"),*(remoteURL),socketSubsystem->GetLastErrorCode());
			connectionState = TCS_Closed;
		}
	}
	else if (connectionState == TCS_Connecting)
	{
		if (socket->Wait(ESocketWaitConditions::WaitForWrite, FTimespan::FromMilliseconds(1)))
		{
			connectionState = TCS_Connected;
			eventHandler.Pin()->PostConnectedEvent();
		}
		else 
		{
#define connectingTimeoutMax (5.f)
			connectingTime += deltaTime;
			if (connectingTime > connectingTimeoutMax)
			{
				/// <summary>
				/// 超时没连上，重新初始化
				/// </summary>
				connectingTime = 0.f;
				connectionState = TCS_Closed;
				UE_LOG(LogTcpConnectionThread, Log, TEXT("connectingTime timeout host(%s) "),*remoteURL); 
			}
		}
	}
	else if (connectionState == TCS_Connected)
	{
		/// 接收数据
		bool ret = recvMsg();
		if (!ret)
		{
			connectionState = TCS_Closed;
		}

		/// 发送数据
		ret = sendMsg();
		if (!ret)
		{
			connectionState = TCS_Closed;
		}
	}
	else if (connectionState == TCS_ReconnectPending)
	{
		check(socket == nullptr);

#define reconnectPendingTimeoutMax (3.f)
		reconnectPendingTime += deltaTime;
		if (reconnectPendingTime > reconnectPendingTimeoutMax)
		{
			reconnectPendingTime = 0.f;
			connectionState = TCS_ConnectInit;
		}
	}
	else if (connectionState == TCS_Closed)
	{
		ESocketErrors LastError = socketSubsystem->GetLastErrorCode();
		if (socket)
		{
			socket->Close();
		}
		socketSubsystem->DestroySocket(socket);
		socket = nullptr;

		int32 code=0;
		FString reason;
		eventHandler.Pin()->PostClosedEvent(code,reason);

		connectionState = TCS_ReconnectPending;
	}
}

uint32 FTcpConnectionThread::Run()
{
	UE_LOG(LogTcpConnectionThread, Log, TEXT("FTcpConnectionThread::Run start")); 
	while (runFlag)
	{
		Tick();
		FPlatformProcess::SleepNoStats(threadTickTime);
	}
	UE_LOG(LogTcpConnectionThread, Log, TEXT("FTcpConnectionThread::Run stop")); 
	return 0;
}


bool FTcpConnectionThread::sendMsg()
{
	FEventHandler::EventMsg eMsg;
	while (eventHandler.Pin()->outBox.Dequeue(eMsg))
	{
		int space=sendMsgBuff.TotalSize()- sendMsgBuff.Tell();
		if (space < eMsg.eventMsg->Num())
			break;
		sendMsgBuff.Serialize(eMsg.eventMsg->GetData(), eMsg.eventMsg->Num());
	}
	if (sendMsgBuff.Num() == 0)
		return true;

	int dataOffset = 0;
	int32 sendLen = 0;
	bool ret = socket->Send(sendMsgBuff.GetData()  , sendMsgBuff.Tell(), sendLen);
	if (!ret )
	{
		ESocketErrors lastError = socketSubsystem->GetLastErrorCode();
		if (lastError == SE_EWOULDBLOCK)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	FMemory::Memcpy(sendMsgBuff.GetData(), sendMsgBuff.GetData()+sendLen,sendMsgBuff.Tell()-sendLen);
	sendMsgBuff.Seek(sendMsgBuff.Tell()-sendLen);

	return true;
}
bool FTcpConnectionThread::recvMsg()
{
	int recvLen = 0;
	bool ret = socket->Recv(recvMsgBuff.GetData() + recvMsgBuffWROffset, recvMsgBuff.TotalSize() - recvMsgBuffWROffset, recvLen);
	if (!ret )
	{
		ESocketErrors lastError = socketSubsystem->GetLastErrorCode();
		if (lastError == SE_EWOULDBLOCK)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//优雅退出
	if (recvLen == 0)
		return false;

	//移写指针
	recvMsgBuffWROffset += recvLen;

	while (1)
	{
		int retNum = eventHandler.Pin()->ParseMsg(recvMsgBuff.GetData() + recvMsgBuff.Tell(), recvMsgBuffWROffset);
		if (retNum <= 0)
		{
			break;
		}
		int msgLen = retNum - recvMsgBuff.Tell();
		TArray<uint8> msg;
		msg.SetNumUninitialized(msgLen);
		recvMsgBuff.Serialize(msg.GetData(),msgLen);
		eventHandler.Pin()->PostMsgEvent(msg);
	}
	int moveLen= recvMsgBuffWROffset - recvMsgBuff.Tell();
	FMemory::Memcpy(sendMsgBuff.GetData(), sendMsgBuff.GetData()+sendMsgBuff.Tell(),moveLen);

	return true;
}