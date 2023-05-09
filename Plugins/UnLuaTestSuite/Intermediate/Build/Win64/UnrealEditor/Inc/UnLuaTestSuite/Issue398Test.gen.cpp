// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue398Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue398Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
// End Cross Module References
	void ACharacterForIssue398::StaticRegisterNativesACharacterForIssue398()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterForIssue398);
	UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister()
	{
		return ACharacterForIssue398::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterForIssue398_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterForIssue398_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tests/Issue398Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue398Test.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterForIssue398_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceForIssue398_NoRegister, (int32)VTABLE_OFFSET(ACharacterForIssue398, IInterfaceForIssue398), false },  // 4252258127
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterForIssue398_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterForIssue398>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams = {
		&ACharacterForIssue398::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterForIssue398()
	{
		if (!Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton, Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<ACharacterForIssue398>()
	{
		return ACharacterForIssue398::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterForIssue398);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterForIssue398, ACharacterForIssue398::StaticClass, TEXT("ACharacterForIssue398"), &Z_Registration_Info_UClass_ACharacterForIssue398, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterForIssue398), 1880119081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_2510560038(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
