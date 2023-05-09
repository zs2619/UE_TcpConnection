// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Public/Perfs/UnLuaBenchmarkFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaBenchmarkFunctionLibrary() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// End Cross Module References
	DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnLuaBenchmarkFunctionLibrary::Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStopTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnLuaBenchmarkFunctionLibrary::StopTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStartTimer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnLuaBenchmarkFunctionLibrary::StartTimer(Z_Param_Title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_GET_PROPERTY(FIntProperty,Z_Param_N);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnLuaBenchmarkFunctionLibrary::Start(Z_Param_Title,Z_Param_N);
		P_NATIVE_END;
	}
	void UUnLuaBenchmarkFunctionLibrary::StaticRegisterNativesUUnLuaBenchmarkFunctionLibrary()
	{
		UClass* Class = UUnLuaBenchmarkFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Start", &UUnLuaBenchmarkFunctionLibrary::execStart },
			{ "StartTimer", &UUnLuaBenchmarkFunctionLibrary::execStartTimer },
			{ "Stop", &UUnLuaBenchmarkFunctionLibrary::execStop },
			{ "StopTimer", &UUnLuaBenchmarkFunctionLibrary::execStopTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics
	{
		struct UnLuaBenchmarkFunctionLibrary_eventStart_Parms
		{
			FString Title;
			int32 N;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_N;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStart_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStart_Parms, N), METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::UnLuaBenchmarkFunctionLibrary_eventStart_Parms), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics
	{
		struct UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms
		{
			FString Title;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "StartTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "StopTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnLuaBenchmarkFunctionLibrary);
	UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_NoRegister()
	{
		return UUnLuaBenchmarkFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start, "Start" }, // 3614754955
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer, "StartTimer" }, // 2870404498
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop, "Stop" }, // 604546427
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer, "StopTimer" }, // 2089138794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perfs/UnLuaBenchmarkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaBenchmarkFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::ClassParams = {
		&UUnLuaBenchmarkFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UUnLuaBenchmarkFunctionLibrary>()
	{
		return UUnLuaBenchmarkFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaBenchmarkFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, UUnLuaBenchmarkFunctionLibrary::StaticClass, TEXT("UUnLuaBenchmarkFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaBenchmarkFunctionLibrary), 2751824538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h_3633782354(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
