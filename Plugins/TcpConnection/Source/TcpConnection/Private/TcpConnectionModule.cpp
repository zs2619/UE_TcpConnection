// Copyright Epic Games, Inc. All Rights Reserved.

#include "TcpConnectionModule.h"
#include "TcpConnection.h"

#define LOCTEXT_NAMESPACE "FTcpConnectionModule"

FTcpConnectionModule* FTcpConnectionModule::Singleton;
void FTcpConnectionModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	Singleton = this;
	UE_LOG(LogTcpConnection, Log, TEXT("FTcpConnectionModule::StartupModule"));
}

void FTcpConnectionModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
FTcpConnectionModule& FTcpConnectionModule::Get()
{
	return *Singleton;
}



#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTcpConnectionModule, TcpConnection)