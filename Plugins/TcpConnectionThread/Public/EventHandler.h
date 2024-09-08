#pragma once

class FTcpConnectionThread;
/// @brief 处理网络事件，所有逻辑在游戏线程执行

class TcpConnectionThread_API FEventHandler
{
	friend FTcpConnectionThread;
public:
	FEventHandler();
	virtual ~FEventHandler();

	enum EventMsgID :int8
	{
		EID_None,
		EID_Connected,
		EID_Msg,
		EID_Closed,
	};
	struct EventMsg
	{
		EventMsg():eventID(EID_None){}
		EventMsgID eventID;
		TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> eventMsg;
	};

	virtual void OnConnected()=0;
	virtual void OnClosed(int32 code ,const FString& reason)=0;
	virtual bool OnMsg(TArray<uint8>& msg)=0;
	virtual bool SendMsg(const uint8* data, uint16 size ) =0;
	virtual int ParseMsg(const uint8* data, uint16 size ) =0;

public:
	void InitConnect();
	bool IsConnected();

	void SetTcpConnectionThread(TSharedPtr<FTcpConnectionThread> inConn);

	void GameThreadTick();
	bool SendEventMsg(const EventMsg& eMsg);

	void PostConnectedEvent();
	void PostClosedEvent(int32 code ,FString& reason);
	void PostMsgEvent(TArray<uint8>& msg);

protected:
	TSharedPtr<FTcpConnectionThread> conn;

	TQueue<EventMsg, EQueueMode::Spsc> inBox;
	TQueue<EventMsg, EQueueMode::Spsc> outBox;

};


/// <summary>
/// 消息格式 |len inMsgLen|Id sizeof(uint16)|value
/// </summary>
class TcpConnectionThread_API FLIVEventHandler :public FEventHandler
{
public:
	FLIVEventHandler();
	virtual ~FLIVEventHandler();

	virtual bool OnMsg(TArray<uint8> &msg) override;
	virtual int  ParseMsg(const uint8* data, uint16 size ) override;
	virtual bool SendMsg(const uint8* data, uint16 size ) override;

	bool SendMsg(TArray<uint8> &msg);

};