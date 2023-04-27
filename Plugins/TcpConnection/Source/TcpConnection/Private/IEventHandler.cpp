#include "IEventHandler.h"
#include "TcpConnection.h"

UIEventHandler::UIEventHandler() {}
UIEventHandler::~UIEventHandler()
{
	conn = nullptr;
	UE_LOG(LogTcpConnection, Log, TEXT("UIEventHandler::~UIEventHandler"));
}

void UIEventHandler::SetTcpConnection(UTcpConnection *inConn)
{
	conn = inConn;
}

bool UIEventHandler::SendMsg(int32 id, TArray<uint8> &msg)
{
	TArray<uint8> *tMsg = new TArray<uint8>;
	tMsg->SetNum(msg.Num() + 2);
	memcpy(tMsg->GetData(), (uint8 *)&id, 2);
	memcpy(tMsg->GetData() + 2, msg.GetData(), msg.Num());

	if (conn != nullptr)
	{
		return conn->SendMessage(*tMsg);
	}
	return false;
}