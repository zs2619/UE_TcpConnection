// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue398TestInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue398TestInterface() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// End Cross Module References
	void UInterfaceForIssue398::StaticRegisterNativesUInterfaceForIssue398()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterfaceForIssue398);
	UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister()
	{
		return UInterfaceForIssue398::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceForIssue398_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceForIssue398_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue398TestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceForIssue398_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceForIssue398>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams = {
		&UInterfaceForIssue398::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceForIssue398()
	{
		if (!Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton, Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UInterfaceForIssue398>()
	{
		return UInterfaceForIssue398::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceForIssue398);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterfaceForIssue398, UInterfaceForIssue398::StaticClass, TEXT("UInterfaceForIssue398"), &Z_Registration_Info_UClass_UInterfaceForIssue398, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterfaceForIssue398), 4252258127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_26781328(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
