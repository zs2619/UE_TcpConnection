#include "EventHandler.h"
#include "TcpConnectionThread.h"
#include "Serialization/ArrayWriter.h"
#include "Serialization/ArrayReader.h"

FEventHandler::FEventHandler() {}
FEventHandler::~FEventHandler()
{
	conn = nullptr;
	UE_LOG(LogTcpConnectionThread, Log, TEXT("FEventHandler::~FEventHandler"));
}

void FEventHandler::SetTcpConnectionThread(TSharedPtr<FTcpConnectionThread> inConn)
{
	conn = inConn;
}
void FEventHandler::GameThreadTick()
{
	check(conn);

	if (conn->GetConnectState() == FTcpConnectionThread::TCS_Connected)
	{
		EventMsg outEMsg;
		while (inBox.Dequeue(outEMsg))
		{
			if (outEMsg.eventID == EID_Connected)
			{
				OnConnected();
			}
			else if (outEMsg.eventID == EID_Closed)
			{
				int32 code ;
				FString reason;

				FArrayReader reader;
				reader.Serialize(outEMsg.eventMsg->GetData(),outEMsg.eventMsg->Num());
				reader << code;
				reader << reason;
				OnClosed(code,reason);
			}
			else if (outEMsg.eventID == EID_Msg)
			{
				OnMsg(*(outEMsg.eventMsg.Get()));
			}
			else 
			{
				check(0);
			}
		}
	}

}

bool FEventHandler::SendEventMsg(const EventMsg& eMsg)
{
	outBox.Enqueue(eMsg);
	return true;
}
void FEventHandler::InitConnect()
{
	if (conn.IsValid())
	{
		conn->InitConnect();
	}
}

bool FEventHandler::IsConnected()
{
	if (!conn.IsValid())
		return false;
	return conn->GetConnectState() == FTcpConnectionThread::TCS_Connected;
}

void FEventHandler::PostConnectedEvent()
{
	EventMsg eMsg;
	eMsg.eventID = EID_Connected;
	inBox.Enqueue(eMsg);
}

void FEventHandler::PostClosedEvent(int32 code ,FString& reason)
{
	EventMsg eMsg;
	eMsg.eventID = EID_Closed;
	FArrayWriter Writer;
	Writer << code;
	Writer << reason;
	*(eMsg.eventMsg) = Writer;
	
	inBox.Enqueue(eMsg);
}

void FEventHandler::PostMsgEvent(TArray<uint8> &msg)
{
	EventMsg eMsg;
	eMsg.eventID = EID_Msg;
	eMsg.eventMsg=MakeShareable(new TArray<uint8>());
	*(eMsg.eventMsg) = msg;
	inBox.Enqueue(eMsg);
}



FLIVEventHandler::FLIVEventHandler() {}
FLIVEventHandler::~FLIVEventHandler()
{
}

bool FLIVEventHandler::OnMsg(TArray<uint8> &msg)
{
	uint16 id = *(uint16 *)msg.GetData();
	msg.RemoveAt(0, 2);
	return true;
}

int FLIVEventHandler::ParseMsg(const uint8* data, uint16 size)
{
	if (size < sizeof(uint16))
		return 0;
	uint16 msgLen = *(uint16*)data;
	if ((size - sizeof(uint16)) >= msgLen)
	{
		return sizeof(uint16) + msgLen;
	}
	return 0;
}
bool FLIVEventHandler::SendMsg(TArray<uint8> &msg)
{
	return SendMsg( msg.GetData(), msg.Num());
}

bool FLIVEventHandler::SendMsg(const uint8* msg, uint16 msgSize )
{
	TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> eventMsg;
	eventMsg->SetNum(msgSize + sizeof(uint16));
	FMemory::Memcpy(eventMsg->GetData(), (uint8*)(&msgSize),sizeof(uint16));
	FMemory::Memcpy(eventMsg->GetData()+ sizeof(uint16), msg, msgSize);

	EventMsg eMsg;
	eMsg.eventID = EID_Msg;
	eMsg.eventMsg = eventMsg;

	SendEventMsg(eMsg);
	return true;
}