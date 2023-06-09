﻿// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#include "UnLua.h"
#include "UnLuaFunctionLibrary.h"
#include "UnLuaDelegates.h"
#include "UnLuaModule.h"

#if ALLOW_CONSOLE
TMap<FString, FAutoConsoleCommand*> UUnLuaFunctionLibrary::ConsoleCommands;
#endif

FString UUnLuaFunctionLibrary::GetScriptRootPath()
{
    return FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir() + TEXT("Script/"));
}

int64 UUnLuaFunctionLibrary::GetFileLastModifiedTimestamp(FString Path)
{
    const FDateTime FileTime = IFileManager::Get().GetTimeStamp(*Path);
    return FileTime.GetTicks();
}

void UUnLuaFunctionLibrary::HotReload()
{
    IUnLuaModule::Get().HotReload();
}

void UUnLuaFunctionLibrary::AddConsoleCommand(const FString& Name, const FString& Help, FExecuteWithArgs Execute)
{
#if ALLOW_CONSOLE
    if (ConsoleCommands.Contains(Name))
        RemoveConsoleCommand(Name);

    const auto Run = FConsoleCommandWithArgsDelegate::CreateLambda([Execute](const TArray<FString>& Args)
    {
        Execute.ExecuteIfBound(Args);
    });
    const auto Command = new FAutoConsoleCommand(*Name, *Help, Run);
    ConsoleCommands.Add(Name, Command);
#endif
}

void UUnLuaFunctionLibrary::RemoveConsoleCommand(const FString& Name)
{
#if ALLOW_CONSOLE
    FAutoConsoleCommand* Cmd;
    if (ConsoleCommands.RemoveAndCopyValue(Name, Cmd))
        delete Cmd;
#endif
}
