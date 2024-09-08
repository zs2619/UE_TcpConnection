// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "TcpConnectionThread.h"


class TcpConnectionThread_API FTcpConnectionThreadModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static FTcpConnectionThreadModule& Get();

	template <typename T>
	TSharedPtr<T> CreateEventHandler(const FString& inUrl)
	{
		TSharedPtr<FTcpConnectionThread> TcpConnectionThread = MakeShareable(new FTcpConnectionThread());
		TSharedPtr<T> eventHandler = MakeShareable(new T());
		TcpConnectionThread->SetRemoteURL(inUrl);
		TcpConnectionThread->SetEventHandler(eventHandler);
		return eventHandler;
	}

	/** Game thread tick to flush events etc */
	bool GameThreadTick(float DeltaTime);

	static FTcpConnectionThreadModule* Singleton;

	/** Delegate for callbacks to GameThreadTick */
	FDelegateHandle TickHandle;

	TArray<TSharedRef<FEventHandler>> TcpNetEvents;

};
