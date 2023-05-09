// Fill out your copyright notice in the Description page of Project Settings.

#include "DishGameInstance.h"
#include "TcpConnection.h"

void UDishGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Log, TEXT("UDishGameInstance::Init()"));
	TcpConnection = NewObject<UTcpConnection>(this);
	ScriptInit();
}
void UDishGameInstance::Shutdown()
{
	Super::Shutdown();
}

bool UDishGameInstance::ConnectGS(const FString &inRemoteURL)
{
	TcpConnection->SetRemoteURL(inRemoteURL);

	GSEventHandler = (UGSEventHandler *)TcpConnection->Connect<UGSEventHandler>();

	return true;
}