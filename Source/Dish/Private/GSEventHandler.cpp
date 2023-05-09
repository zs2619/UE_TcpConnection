#include "GSEventHandler.h"
#include "TcpConnection.h"

UGSEventHandler::UGSEventHandler()
{
}

UGSEventHandler::~UGSEventHandler() {}

FString UGSEventHandler::GetModuleName_Implementation() const
{
	return TEXT("net.GSEventHandler");
}

void UGSEventHandler::OnRecvMessage()
{
	if (conn == nullptr)
	{
		return;
	}
	TArray<uint8> msg;
	conn->ReadMessage(&msg);
	uint16 id = *(uint16 *)msg.GetData();
	msg.RemoveAt(0, 2);

	OnMsg(id, msg);
}
