// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue561Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue561Test() {}
// Cross Module References
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue561Event__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Issue561Struct;
class UScriptStruct* FIssue561Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Issue561Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Issue561Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue561Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue561Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Issue561Struct.OuterSingleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue561Struct>()
{
	return FIssue561Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIssue561Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue561Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent = { "OnMouseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue561Struct, OnMouseEvent), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData)) }; // 3292620188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue561Struct",
		sizeof(FIssue561Struct),
		alignof(FIssue561Struct),
		Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_Issue561Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Issue561Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue561Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Issue561Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h_Statics::ScriptStructInfo[] = {
		{ FIssue561Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewStructOps, TEXT("Issue561Struct"), &Z_Registration_Info_UScriptStruct_Issue561Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue561Struct), 3019184875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h_2338412123(TEXT("/Script/UnLuaTestSuite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
