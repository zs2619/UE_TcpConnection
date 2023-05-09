// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/OutParamTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutParamTest() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UOutParamTestStub_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UOutParamTestStub();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	static FName NAME_UOutParamTestStub_ReturnFull = FName(TEXT("ReturnFull"));
	void UOutParamTestStub::ReturnFull(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
	{
		OutParamTestStub_eventReturnFull_Parms Parms;
		Parms.Dest=Dest;
		Parms.Obj=Obj;
		Parms.Radius=Radius;
		Parms.bStop=bStop ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOutParamTestStub_ReturnFull),&Parms);
		Dest=Parms.Dest;
		Obj=Parms.Obj;
		Radius=Parms.Radius;
		bStop=Parms.bStop;
	}
	static FName NAME_UOutParamTestStub_ReturnPartial = FName(TEXT("ReturnPartial"));
	void UOutParamTestStub::ReturnPartial(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
	{
		OutParamTestStub_eventReturnPartial_Parms Parms;
		Parms.Dest=Dest;
		Parms.Obj=Obj;
		Parms.Radius=Radius;
		Parms.bStop=bStop ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOutParamTestStub_ReturnPartial),&Parms);
		Dest=Parms.Dest;
		Obj=Parms.Obj;
		Radius=Parms.Radius;
		bStop=Parms.bStop;
	}
	void UOutParamTestStub::StaticRegisterNativesUOutParamTestStub()
	{
	}
	struct Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop_SetBit(void* Obj)
	{
		((OutParamTestStub_eventReturnFull_Parms*)Obj)->bStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OutParamTestStub_eventReturnFull_Parms), &Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutParamTestStub, nullptr, "ReturnFull", nullptr, nullptr, sizeof(OutParamTestStub_eventReturnFull_Parms), Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOutParamTestStub_ReturnFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop_SetBit(void* Obj)
	{
		((OutParamTestStub_eventReturnPartial_Parms*)Obj)->bStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OutParamTestStub_eventReturnPartial_Parms), &Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutParamTestStub, nullptr, "ReturnPartial", nullptr, nullptr, sizeof(OutParamTestStub_eventReturnPartial_Parms), Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOutParamTestStub_ReturnPartial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutParamTestStub);
	UClass* Z_Construct_UClass_UOutParamTestStub_NoRegister()
	{
		return UOutParamTestStub::StaticClass();
	}
	struct Z_Construct_UClass_UOutParamTestStub_Statics
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
	UObject* (*const Z_Construct_UClass_UOutParamTestStub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOutParamTestStub_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutParamTestStub_ReturnFull, "ReturnFull" }, // 2115311315
		{ &Z_Construct_UFunction_UOutParamTestStub_ReturnPartial, "ReturnPartial" }, // 2997664938
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutParamTestStub_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/OutParamTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOutParamTestStub_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UOutParamTestStub, IUnLuaInterface), false },  // 1153285053
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutParamTestStub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutParamTestStub>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutParamTestStub_Statics::ClassParams = {
		&UOutParamTestStub::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOutParamTestStub_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutParamTestStub_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutParamTestStub()
	{
		if (!Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton, Z_Construct_UClass_UOutParamTestStub_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<UOutParamTestStub>()
	{
		return UOutParamTestStub::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutParamTestStub);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOutParamTestStub, UOutParamTestStub::StaticClass, TEXT("UOutParamTestStub"), &Z_Registration_Info_UClass_UOutParamTestStub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutParamTestStub), 3720533034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_3560297532(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
