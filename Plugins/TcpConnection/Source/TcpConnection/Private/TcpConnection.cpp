#include "TcpConnection.h"
#include "SocketSubsystem.h"
#include "Serialization/ArrayWriter.h"
#include "Serialization/ArrayReader.h"

DEFINE_LOG_CATEGORY(LogTcpConnection);

UTcpConnection::UTcpConnection()
	: runThread(nullptr),
	  runFlag(false),
	  sendFlag(false),
	  recvMessageDataRemaining(0),
	  totalBytesReceived(0),
	  socket(nullptr),
	  connectionState(TCS_Connecting),
	  retryCount(3),
	  eveHandler(nullptr),
	  reconnectPendingTime(0.f),
	  socketSubsystem(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM))
{
}

UTcpConnection::~UTcpConnection()
{
	UE_LOG(LogTcpConnection, Log, TEXT("UTcpConnection::~UTcpConnection"));
	Dispose();
}

void UTcpConnection::Dispose()
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
	if (eveHandler != nullptr)
	{
		// delete eveHandler;
		eveHandler = nullptr;
	}
	if (socket != nullptr)
	{
		socketSubsystem->DestroySocket(socket);
		socket = nullptr;
	}
}

void UTcpConnection::SetRemoteURL(const FString &inRemoteURL)
{
	remoteURL = inRemoteURL;
}

bool UTcpConnection::Init()
{
	return true;
}

void UTcpConnection::Exit()
{
}

void UTcpConnection::Stop()
{
	runFlag = false;
	sendFlag = false;
	if (socket != nullptr)
	{
		socket->Shutdown(ESocketShutdownMode::ReadWrite);
	}
}

uint32 UTcpConnection::Run()
{
	AsyncTask(ENamedThreads::GameThread, []()
			  { UE_LOG(LogTcpConnection, Log, TEXT("UTcpConnection::Run start")); });
	while (runFlag)
	{
		if (connectionState == TCS_Connecting)
		{
			socket = socketSubsystem->CreateSocket(NAME_Stream, TEXT("default"), false);
			if (!socket)
			{
				connectionState = TCS_Disconnected;
				continue;
			}
			int32 NewSize = 0;
#define SocketRecvBufferSize 512 * 1024
#define SocketSendBufferSize 512 * 1024
			socket->SetReceiveBufferSize(SocketRecvBufferSize, NewSize);
			socket->SetSendBufferSize(SocketSendBufferSize, NewSize);
			socket->SetNoDelay(true);
			socket->SetNonBlocking(false);

			bool ret = FIPv4Endpoint::FromHostAndPort(remoteURL, remoteEndpoint);
			if (!ret)
			{
				connectionState = TCS_Disconnected;
				continue;
			}
			bool bConnected = socket->Connect(remoteEndpoint.ToInternetAddr().Get());
			if (bConnected)
			{
				sendFlag = true;
				// 异步写线程
				ClientSendFuture = Async(EAsyncExecution::Thread, [&]() -> bool
										 { 
										while (runFlag&&sendFlag) { 
											if (!outbox.IsEmpty()) {
												TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> msg;
												if (outbox.Dequeue(msg)) {

													TArray<uint8> msgData;
													uint16 len= uint16( msg->Num());
													msgData.Append((uint8*)&len, 2);
													msgData.Append(*msg);

													if (!blockingSend(msgData.GetData(), msgData.Num()))
													{
														/// socket 异常,接收状态改变,发送直接退出
														break;
													} 
												} }
										FPlatformProcess::SleepNoStats(0.001f); } return true; });

				/// 游戏逻辑线程执行回调逻辑
				AsyncTask(ENamedThreads::GameThread, [this]()
						  {if (eveHandler != nullptr) { eveHandler->OnConnected(); } });

				connectionState = TCS_Connected;
			}
			else
			{
				connectionState = TCS_Disconnected;
			}
		}
		else if (connectionState == TCS_Connected)
		{
			/// 接收服务器数据
			bool ret = recvMessage();
			if (!ret)
			{
				connectionState = TCS_Disconnected;
			}
		}
		else if (connectionState == TCS_ReconnectPending)
		{
			check(socket == nullptr);

#define ReconnectSleepTime 0.01f
			FPlatformProcess::SleepNoStats(ReconnectSleepTime);
			reconnectPendingTime += ReconnectSleepTime;
			if (reconnectPendingTime > 3.f)
			{
				reconnectPendingTime = 0.f;
				connectionState = TCS_Connecting;
			}
		}
		else if (connectionState == TCS_Disconnected)
		{
			ESocketErrors LastError = socketSubsystem->GetLastErrorCode();

			if (socket)
			{
				socket->Close();
			}
			socketSubsystem->DestroySocket(socket);
			socket = nullptr;
			// 结束发送线程
			sendFlag = false;
			ClientSendFuture.Wait();
			AsyncTask(ENamedThreads::GameThread, [this]()
					  {if (eveHandler != nullptr) { eveHandler->OnDisconnected(); } });

			connectionState = TCS_ReconnectPending;
		}

		FPlatformProcess::SleepNoStats(0.001f);
	}
	AsyncTask(ENamedThreads::GameThread, []()
			  { UE_LOG(LogTcpConnection, Log, TEXT("UTcpConnection::Run stop")); });
	return 0;
}

bool UTcpConnection::SendMessage(TArray<uint8> &msg)
{
	outbox.Enqueue(MakeShareable(&msg));
	return true;
}

bool UTcpConnection::ReadMessage(TArray<uint8> *outMsg)
{
	TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> msg;
	if (inbox.Dequeue(msg))
	{
		outMsg->Append(*msg);
	}
	return true;
}

void UTcpConnection::InitConnect()
{
	eveHandler->SetTcpConnection(this);
	runFlag = true;
	sendFlag = false;
	reconnectPendingTime = 0.f;
	runThread = FRunnableThread::Create(this, TEXT("TcpConnection"), 4 * 1024 * 1024, TPri_Normal);
}

bool UTcpConnection::recvMessage()
{
	// check if the socket has closed
	{
		int32 BytesRead;
		uint8 Dummy;
		if (!socket->Recv(&Dummy, 1, BytesRead, ESocketReceiveFlags::Peek))
		{
			return false;
		}
	}
	if (!socket->Wait(ESocketWaitConditions::WaitForRead, FTimespan::FromSeconds(1.0)))
	{
		return (socket->GetConnectionState() != SCS_ConnectionError);
	}
	uint32 pendingDataSize = 0;
	for (;;)
	{
		int32 bytesRead = 0;
		if (recvMessageDataRemaining == 0)
		{
			// 是否够长度字节
			if (!socket->HasPendingData(pendingDataSize) || (pendingDataSize < sizeof(uint16)))
			{
				return true;
			}

			FArrayReader MessagesizeData = FArrayReader(true);
			MessagesizeData.SetNumUninitialized(sizeof(uint16));

			bytesRead = 0;
			if (!socket->Recv(MessagesizeData.GetData(), sizeof(uint16), bytesRead))
			{
				return false;
			}

			check(bytesRead == sizeof(uint16));
			totalBytesReceived += bytesRead;

			// 消息长度
			uint16 msgLen = 0;
			MessagesizeData << msgLen;
			recvMessageDataRemaining = int32(msgLen);
			if (recvMessageDataRemaining <= 0)
			{
				return false;
			}
			receivedData = TArray<uint8>();
			receivedData.SetNumUninitialized(recvMessageDataRemaining);
		}

		/// 读消息内容
		bytesRead = 0;
		if (!socket->Recv(receivedData.GetData() + receivedData.Num() - recvMessageDataRemaining, recvMessageDataRemaining, bytesRead))
		{
			return false;
		}

		if (bytesRead > 0)
		{
			check(bytesRead <= recvMessageDataRemaining);
			totalBytesReceived += bytesRead;
			recvMessageDataRemaining -= bytesRead;
			if (recvMessageDataRemaining == 0)
			{
				inbox.Enqueue(MakeShareable(new TArray<uint8>(receivedData)));
				AsyncTask(ENamedThreads::GameThread, [this]()
						  {if (eveHandler != nullptr) { eveHandler->OnRecvMessage(); } });
			}
		}
		else
		{
			return true;
		}
	}

	return 0;
}

bool UTcpConnection::blockingSend(const uint8 *data, int32 dataLen)
{
	while (dataLen > 0)
	{
		while (!socket->Wait(ESocketWaitConditions::WaitForWrite, FTimespan::FromSeconds(1.0)))
		{
			if (socket->GetConnectionState() == SCS_ConnectionError)
			{
				return false;
			}
		}

		int32 sendLen = 0;
		if (!socket->Send(data, dataLen, sendLen))
		{
			return false;
		}
		dataLen -= sendLen;
		data += sendLen;
	}
	return true;
}