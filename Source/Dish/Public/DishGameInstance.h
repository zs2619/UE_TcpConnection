// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DishGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UDishGameInstance : public UGameInstance
{
	GENERATED_BODY()
		virtual void Init();
	virtual void Shutdown() override;

		 UPROPERTY()
		 class UTcpConnection *TcpConnection;
};
