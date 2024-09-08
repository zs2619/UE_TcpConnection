#pragma once
#include "CoreMinimal.h"
#include "EventHandler.h"
#include "Containers/Queue.h"
#include "Sockets.h"
#include "Misc/SingleThreadRunnable.h"
#include "Serialization/ArrayReader.h"
#include "Serialization/ArrayWriter.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTcpConnectionThread, Log, All);

class TcpConnectionThread_API FTcpConnectionThread 
	: public FRunnable 
	, public TSharedFromThis<FTcpConnectionThread>
	, public FSingleThreadRunnable
{
public:
	FTcpConnectionThread();
	virtual ~FTcpConnectionThread();

	/** Connection state */
	enum EConnectionState:int8
	{
		TCS_ConnectInit,	  // 初始化
		TCS_Connecting,		  // 正在连接
		TCS_Connected,		  //
		TCS_ReconnectPending, // 等待重连
		TCS_Closed			  //
	};

public:
	bool SetRemoteURL(const FString &inRemoteURL);
	void SetEventHandler(TSharedPtr<FEventHandler>& handler);

	bool InitConnect();
	EConnectionState GetConnectState() { return connectionState.load(); }
	void Dispose();

public:
	//~ FRunnable interface
	virtual void Exit() override;
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual class FSingleThreadRunnable* GetSingleThreadInterface() override { return this; }
	virtual void Tick() override;

private:
	bool recvMsg();
	bool sendMsg();

private:
	FRunnableThread *runThread;

	std::atomic<bool> runFlag;

	FString remoteURL;
	FString host;
	int32   port = 0;
	TSharedPtr<FInternetAddr> remoteAddr;

	std::atomic<EConnectionState> connectionState;
	TWeakPtr<FEventHandler> eventHandler;
	FSocket *socket;

	double reconnectPendingTime;
	double connectingTime;
	double lastTickTime;
	ISocketSubsystem *socketSubsystem;
	double threadTickTime;

	FArrayWriter sendMsgBuff;
	FArrayReader recvMsgBuff;
	int recvMsgBuffWROffset;

};
