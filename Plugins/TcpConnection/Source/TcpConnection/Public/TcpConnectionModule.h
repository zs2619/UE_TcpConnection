// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTcpConnectionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static FTcpConnectionModule& Get();

	template <typename T>
	TSharedPtr<T> CreateEventHandler(const FString& inUrl)
	{
		UTcpConnection* tcpConnection = NewObject<UTcpConnection>();
		eveHandler = NewObject<T>();
		tcpConnection->InitConnect();
		return eveHandler;
	}
private:
	static FTcpConnectionModule* Singleton;
};
