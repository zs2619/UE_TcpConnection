// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue554Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue554Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Issue554Struct;
class UScriptStruct* FIssue554Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Issue554Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Issue554Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue554Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue554Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Issue554Struct.OuterSingleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue554Struct>()
{
	return FIssue554Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIssue554Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue554Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue554Struct, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue554Struct, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue554Struct",
		sizeof(FIssue554Struct),
		alignof(FIssue554Struct),
		Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_Issue554Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Issue554Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue554Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Issue554Struct.InnerSingleton;
	}
	void UIssue554Class::StaticRegisterNativesUIssue554Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIssue554Class);
	UClass* Z_Construct_UClass_UIssue554Class_NoRegister()
	{
		return UIssue554Class::StaticClass();
	}
	struct Z_Construct_UClass_UIssue554Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue554Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue554Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Struct, UIssue554Class), STRUCT_OFFSET(UIssue554Class, Struct), Z_Construct_UScriptStruct_FIssue554Struct, METADATA_PARAMS(Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData)) }; // 979253688
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIssue554Class_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue554Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue554Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue554Class_Statics::ClassParams = {
		&UIssue554Class::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIssue554Class_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue554Class()
	{
		if (!Z_Registration_Info_UClass_UIssue554Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue554Class.OuterSingleton, Z_Construct_UClass_UIssue554Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIssue554Class.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue554Class>()
	{
		return UIssue554Class::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue554Class);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ScriptStructInfo[] = {
		{ FIssue554Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewStructOps, TEXT("Issue554Struct"), &Z_Registration_Info_UScriptStruct_Issue554Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue554Struct), 979253688U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIssue554Class, UIssue554Class::StaticClass, TEXT("UIssue554Class"), &Z_Registration_Info_UClass_UIssue554Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue554Class), 1240743410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_635369250(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
