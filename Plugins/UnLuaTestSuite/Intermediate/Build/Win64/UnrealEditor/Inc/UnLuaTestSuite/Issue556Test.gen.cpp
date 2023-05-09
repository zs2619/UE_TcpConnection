// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue556Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue556Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FHexHandle();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HexHandle;
class UScriptStruct* FHexHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HexHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HexHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHexHandle, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("HexHandle"));
	}
	return Z_Registration_Info_UScriptStruct_HexHandle.OuterSingleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FHexHandle>()
{
	return FHexHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHexHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHexHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHexHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHexHandle, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHexHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"HexHandle",
		sizeof(FHexHandle),
		alignof(FHexHandle),
		Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHexHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_HexHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HexHandle.InnerSingleton, Z_Construct_UScriptStruct_FHexHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HexHandle.InnerSingleton;
	}
	static FName NAME_AIssue556Actor_PlayerViewChanged = FName(TEXT("PlayerViewChanged"));
	void AIssue556Actor::PlayerViewChanged(TArray<FHexHandle> const& AddHexHandles, TArray<FHexHandle> const& RemoveHexHandles)
	{
		Issue556Actor_eventPlayerViewChanged_Parms Parms;
		Parms.AddHexHandles=AddHexHandles;
		Parms.RemoveHexHandles=RemoveHexHandles;
		ProcessEvent(FindFunctionChecked(NAME_AIssue556Actor_PlayerViewChanged),&Parms);
	}
	void AIssue556Actor::StaticRegisterNativesAIssue556Actor()
	{
	}
	struct Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddHexHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddHexHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddHexHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveHexHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveHexHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveHexHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner = { "AddHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(nullptr, 0) }; // 4186659005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles = { "AddHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, AddHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData)) }; // 4186659005
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(nullptr, 0) }; // 4186659005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, RemoveHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData)) }; // 4186659005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIssue556Actor, nullptr, "PlayerViewChanged", nullptr, nullptr, sizeof(Issue556Actor_eventPlayerViewChanged_Parms), Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIssue556Actor);
	UClass* Z_Construct_UClass_AIssue556Actor_NoRegister()
	{
		return AIssue556Actor::StaticClass();
	}
	struct Z_Construct_UClass_AIssue556Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIssue556Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIssue556Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged, "PlayerViewChanged" }, // 439730896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue556Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIssue556Actor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(AIssue556Actor, IUnLuaInterface), false },  // 1153285053
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIssue556Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue556Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIssue556Actor_Statics::ClassParams = {
		&AIssue556Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIssue556Actor()
	{
		if (!Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton, Z_Construct_UClass_AIssue556Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<AIssue556Actor>()
	{
		return AIssue556Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue556Actor);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ScriptStructInfo[] = {
		{ FHexHandle::StaticStruct, Z_Construct_UScriptStruct_FHexHandle_Statics::NewStructOps, TEXT("HexHandle"), &Z_Registration_Info_UScriptStruct_HexHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHexHandle), 4186659005U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIssue556Actor, AIssue556Actor::StaticClass, TEXT("AIssue556Actor"), &Z_Registration_Info_UClass_AIssue556Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIssue556Actor), 3991585750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_851376807(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
