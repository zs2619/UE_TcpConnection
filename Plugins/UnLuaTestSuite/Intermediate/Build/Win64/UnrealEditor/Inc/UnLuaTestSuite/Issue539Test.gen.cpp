// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue539Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue539Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue539_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue539();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	static FName NAME_UObjectForIssue539_Test = FName(TEXT("Test"));
	void UObjectForIssue539::Test(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
	{
		ObjectForIssue539_eventTest_Parms Parms;
		Parms.Dest=Dest;
		Parms.Obj=Obj;
		Parms.Radius=Radius;
		Parms.bStop=bStop ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UObjectForIssue539_Test),&Parms);
		Dest=Parms.Dest;
		Obj=Parms.Obj;
		Radius=Parms.Radius;
		bStop=Parms.bStop;
	}
	void UObjectForIssue539::StaticRegisterNativesUObjectForIssue539()
	{
	}
	struct Z_Construct_UFunction_UObjectForIssue539_Test_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop_SetBit(void* Obj)
	{
		((ObjectForIssue539_eventTest_Parms*)Obj)->bStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectForIssue539_eventTest_Parms), &Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectForIssue539_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue539Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectForIssue539, nullptr, "Test", nullptr, nullptr, sizeof(ObjectForIssue539_eventTest_Parms), Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectForIssue539_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectForIssue539_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectForIssue539);
	UClass* Z_Construct_UClass_UObjectForIssue539_NoRegister()
	{
		return UObjectForIssue539::StaticClass();
	}
	struct Z_Construct_UClass_UObjectForIssue539_Statics
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
	UObject* (*const Z_Construct_UClass_UObjectForIssue539_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectForIssue539_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectForIssue539_Test, "Test" }, // 2890149873
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectForIssue539_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/Issue539Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue539Test.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectForIssue539_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectForIssue539, IUnLuaInterface), false },  // 1153285053
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectForIssue539_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectForIssue539>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectForIssue539_Statics::ClassParams = {
		&UObjectForIssue539::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectForIssue539_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue539_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectForIssue539()
	{
		if (!Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton, Z_Construct_UClass_UObjectForIssue539_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UObjectForIssue539>()
	{
		return UObjectForIssue539::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectForIssue539);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectForIssue539, UObjectForIssue539::StaticClass, TEXT("UObjectForIssue539"), &Z_Registration_Info_UClass_UObjectForIssue539, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectForIssue539), 3202694984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h_1289744747(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
