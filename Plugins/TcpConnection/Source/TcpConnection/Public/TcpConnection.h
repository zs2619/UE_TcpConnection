#pragma once
#include "CoreMinimal.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "IEventHandler.h"
#include "Containers/Queue.h"
#include "Sockets.h"
#include "TcpConnection.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTcpConnection, Log, All);

UCLASS()
class TCPCONNECTION_API UTcpConnection : public UObject, public FRunnable
{
	GENERATED_BODY()
public:
	UTcpConnection();
	virtual ~UTcpConnection();

	/** Connection state */
	enum EConnectionState
	{
		TCS_Connecting,		  // 正在连接
		TCS_Connected,		  //
		TCS_ReconnectPending, // 等待重连
		TCS_Disconnected	  //
	};

public:
	UFUNCTION()
	void SetRemoteURL(const FString &inRemoteURL);

	template <typename T>
	UIEventHandler *Connect()
	{
		eveHandler = NewObject<T>();
		InitConnect();
		return eveHandler;
	}

	UFUNCTION()
	bool SendMessage(TArray<uint8> &msg);

	bool ReadMessage(TArray<uint8> *msg);

	UFUNCTION()
	void Dispose();

	void InitConnect();

public:
	//~ FRunnable interface
	virtual void Exit() override;
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;

private:
	void gameThreadLog(const FString str);
	bool recvMessage();
	bool blockingSend(const uint8 *data, int32 dataLen);

private:
	FRunnableThread *runThread;
	TFuture<bool> ClientSendFuture;

	TQueue<TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe>, EQueueMode::Spsc> inbox;
	TQueue<TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe>, EQueueMode::Spsc> outbox;
	FIPv4Endpoint remoteEndpoint;

	std::atomic<bool> runFlag;
	std::atomic<bool> sendFlag;

	int32 recvMessageDataRemaining;
	uint64 totalBytesReceived;
	TArray<uint8> receivedData;
	FSocket *socket;
	FString remoteURL;
	EConnectionState connectionState;
	int32 retryCount;

	UPROPERTY()
	UIEventHandler *eveHandler;

	double reconnectPendingTime;
	ISocketSubsystem *socketSubsystem;
};
