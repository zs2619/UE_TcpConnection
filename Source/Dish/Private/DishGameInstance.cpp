// Fill out your copyright notice in the Description page of Project Settings.

#include "DishGameInstance.h"
#include "TcpConnectionModule.h"

void UDishGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Log, TEXT("UDishGameInstance::Init()"));
	ScriptInit();
}
void UDishGameInstance::Shutdown()
{
	Super::Shutdown();
}

bool UDishGameInstance::ConnectGS(const FString &inRemoteURL)
{
	//GSEventHandler=FTcpConnectionModule::Get()->CreateEventHandler<UGSEventHandler>(inRemoteURL);
	return true;
}