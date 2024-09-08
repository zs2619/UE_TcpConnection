// Copyright Epic Games, Inc. All Rights Reserved.

#include "TcpConnectionThreadModule.h"
#include "Containers/BackgroundableTicker.h"

#define LOCTEXT_NAMESPACE "FTcpConnectionThreadModule"

FTcpConnectionThreadModule* FTcpConnectionThreadModule::Singleton = nullptr;

void FTcpConnectionThreadModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	Singleton = this;
	UE_LOG(LogTcpConnectionThread, Log, TEXT("FTcpConnectionThreadModule::StartupModule"));

	// Setup our game thread tick
	FTickerDelegate TickDelegate = FTickerDelegate::CreateRaw(this, &FTcpConnectionThreadModule::GameThreadTick);
	TickHandle = FBackgroundableTicker::GetCoreTicker().AddTicker(TickDelegate, 0.0f);
}

void FTcpConnectionThreadModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	Singleton = nullptr;
}

FTcpConnectionThreadModule& FTcpConnectionThreadModule::Get()
{
	return *Singleton;
}

bool FTcpConnectionThreadModule::GameThreadTick(float DeltaTime)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FTcpConnectionThreadModule_GameThreadTick);

	for (const TSharedRef<FEventHandler>& handler: TcpNetEvents)
	{
		handler->GameThreadTick();
	}

	return true;
}



#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTcpConnectionThreadModule, TcpConnectionThread)