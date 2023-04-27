#pragma once

#include "IEventHandler.generated.h"
class UTcpConnection;
/// @brief 处理网络事件，所有逻辑在游戏线程执行

UCLASS()
class TCPCONNECTION_API UIEventHandler : public UObject
{
	GENERATED_BODY()
public:
	UIEventHandler();
	virtual ~UIEventHandler();
	virtual void OnRecvMessage(){};

	UFUNCTION(BlueprintImplementableEvent)
	void OnConnected();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDisconnected();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReconnectPending();

	UFUNCTION(BlueprintImplementableEvent)
	bool OnMsg(int32 id, TArray<uint8> &msg);

	UFUNCTION()
	bool SendMsg(int32 id, TArray<uint8> &msg);

public:
	void SetTcpConnection(UTcpConnection *conn);

protected:
	UTcpConnection *conn;
};