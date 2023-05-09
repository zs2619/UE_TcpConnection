// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue500Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue500Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	static FName NAME_UObjectForIssue500_Test = FName(TEXT("Test"));
	FString UObjectForIssue500::Test()
	{
		ObjectForIssue500_eventTest_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UObjectForIssue500_Test),&Parms);
		return Parms.ReturnValue;
	}
	void UObjectForIssue500::StaticRegisterNativesUObjectForIssue500()
	{
	}
	struct Z_Construct_UFunction_UObjectForIssue500_Test_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectForIssue500_eventTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectForIssue500, nullptr, "Test", nullptr, nullptr, sizeof(ObjectForIssue500_eventTest_Parms), Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectForIssue500_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectForIssue500);
	UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister()
	{
		return UObjectForIssue500::StaticClass();
	}
	struct Z_Construct_UClass_UObjectForIssue500_Statics
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
	UObject* (*const Z_Construct_UClass_UObjectForIssue500_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectForIssue500_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectForIssue500_Test, "Test" }, // 4097504643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/Issue500Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectForIssue500_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectForIssue500, IUnLuaInterface), false },  // 1153285053
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectForIssue500_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectForIssue500>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams = {
		&UObjectForIssue500::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectForIssue500()
	{
		if (!Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton, Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UObjectForIssue500>()
	{
		return UObjectForIssue500::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectForIssue500);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectForIssue500, UObjectForIssue500::StaticClass, TEXT("UObjectForIssue500"), &Z_Registration_Info_UClass_UObjectForIssue500, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectForIssue500), 1256615332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h_2670091277(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
