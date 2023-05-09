// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue517Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue517Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Issue517Struct;
class UScriptStruct* FIssue517Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Issue517Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Issue517Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue517Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue517Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Issue517Struct.OuterSingleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue517Struct>()
{
	return FIssue517Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIssue517Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayFromStruct_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFromStruct_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFromStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue517Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, ArrayFromStruct), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue517Struct",
		sizeof(FIssue517Struct),
		alignof(FIssue517Struct),
		Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_Issue517Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Issue517Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue517Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Issue517Struct.InnerSingleton;
	}
	void AIssue517Actor::StaticRegisterNativesAIssue517Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIssue517Actor);
	UClass* Z_Construct_UClass_AIssue517Actor_NoRegister()
	{
		return AIssue517Actor::StaticClass();
	}
	struct Z_Construct_UClass_AIssue517Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayFromActor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFromActor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFromActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIssue517Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue517Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIssue517Actor, Struct), Z_Construct_UScriptStruct_FIssue517Struct, METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData)) }; // 3075149549
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIssue517Actor, ArrayFromActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIssue517Actor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIssue517Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue517Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIssue517Actor_Statics::ClassParams = {
		&AIssue517Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIssue517Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIssue517Actor()
	{
		if (!Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton, Z_Construct_UClass_AIssue517Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<AIssue517Actor>()
	{
		return AIssue517Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue517Actor);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ScriptStructInfo[] = {
		{ FIssue517Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewStructOps, TEXT("Issue517Struct"), &Z_Registration_Info_UScriptStruct_Issue517Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue517Struct), 3075149549U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIssue517Actor, AIssue517Actor::StaticClass, TEXT("AIssue517Actor"), &Z_Registration_Info_UClass_AIssue517Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIssue517Actor), 2885611988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_3910628793(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
