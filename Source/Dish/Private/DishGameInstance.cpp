// Fill out your copyright notice in the Description page of Project Settings.


#include "DishGameInstance.h"
#include "TcpConnection.h"

void UDishGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Log, TEXT("UDishGameInstance::Init()"));
	TcpConnection = NewObject<UTcpConnection>(this);
}
void UDishGameInstance::Shutdown()
{
	Super::Shutdown();
}
