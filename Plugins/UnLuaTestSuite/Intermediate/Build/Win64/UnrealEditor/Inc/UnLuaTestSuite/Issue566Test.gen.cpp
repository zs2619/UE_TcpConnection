// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue566Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue566Test() {}
// Cross Module References
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566FunctionLibrary_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566Object_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566Object();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue566Delegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UIssue566FunctionLibrary::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIssue566FunctionLibrary::Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIssue566FunctionLibrary::execInvoke)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIssue566FunctionLibrary::Invoke();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIssue566FunctionLibrary::execAddCallback)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIssue566FunctionLibrary::AddCallback(FIssue566Delegate(Z_Param_InDelegate));
		P_NATIVE_END;
	}
	void UIssue566FunctionLibrary::StaticRegisterNativesUIssue566FunctionLibrary()
	{
		UClass* Class = UIssue566FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCallback", &UIssue566FunctionLibrary::execAddCallback },
			{ "Invoke", &UIssue566FunctionLibrary::execInvoke },
			{ "Reset", &UIssue566FunctionLibrary::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics
	{
		struct Issue566FunctionLibrary_eventAddCallback_Parms
		{
			FScriptDelegate InDelegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue566FunctionLibrary_eventAddCallback_Parms, InDelegate), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3205302255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "AddCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Issue566FunctionLibrary_eventAddCallback_Parms), Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "Invoke", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIssue566FunctionLibrary);
	UClass* Z_Construct_UClass_UIssue566FunctionLibrary_NoRegister()
	{
		return UIssue566FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UIssue566FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue566FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIssue566FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback, "AddCallback" }, // 3173494292
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke, "Invoke" }, // 2764045340
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_Reset, "Reset" }, // 3097808845
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue566FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue566Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue566FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue566FunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue566FunctionLibrary_Statics::ClassParams = {
		&UIssue566FunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIssue566FunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566FunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue566FunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton, Z_Construct_UClass_UIssue566FunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue566FunctionLibrary>()
	{
		return UIssue566FunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue566FunctionLibrary);
	void UIssue566Object::StaticRegisterNativesUIssue566Object()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIssue566Object);
	UClass* Z_Construct_UClass_UIssue566Object_NoRegister()
	{
		return UIssue566Object::StaticClass();
	}
	struct Z_Construct_UClass_UIssue566Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue566Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue566Object_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue566Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue566Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue566Object>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue566Object_Statics::ClassParams = {
		&UIssue566Object::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue566Object_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue566Object()
	{
		if (!Z_Registration_Info_UClass_UIssue566Object.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue566Object.OuterSingleton, Z_Construct_UClass_UIssue566Object_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIssue566Object.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue566Object>()
	{
		return UIssue566Object::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue566Object);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIssue566FunctionLibrary, UIssue566FunctionLibrary::StaticClass, TEXT("UIssue566FunctionLibrary"), &Z_Registration_Info_UClass_UIssue566FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue566FunctionLibrary), 1011393861U) },
		{ Z_Construct_UClass_UIssue566Object, UIssue566Object::StaticClass, TEXT("UIssue566Object"), &Z_Registration_Info_UClass_UIssue566Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue566Object), 267923029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h_2570627730(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
