// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GSEventHandler.h"
#include "DishGameInstance.generated.h"

/**
 *
 */
UCLASS()
class UDishGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init();
	virtual void Shutdown() override;

	UFUNCTION(BlueprintImplementableEvent)
	void ScriptInit();

	UFUNCTION()
	bool ConnectGS(const FString &inRemoteURL);

	UPROPERTY()
	class UGSEventHandler *GSEventHandler;
};
