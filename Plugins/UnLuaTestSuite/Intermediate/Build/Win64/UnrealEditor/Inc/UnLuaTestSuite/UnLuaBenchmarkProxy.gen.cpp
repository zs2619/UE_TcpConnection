// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Public/Perfs/UnLuaBenchmarkProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaBenchmarkProxy() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshInfo)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMeshID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMeshName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCOM);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPredictedPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMeshInfo(Z_Param_Out_OutMeshID,Z_Param_Out_OutMeshName,Z_Param_Out_OutCOM,Z_Param_Out_OutIndices,Z_Param_Out_OutPositions,Z_Param_Out_OutPredictedPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetPredictedPositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPredictedPositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdatePositions)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NewPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePositions(Z_Param_Out_NewPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetPositions)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPositions(Z_Param_Out_OutPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateIndices)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NewIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIndices(Z_Param_Out_NewIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetIndices)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIndices(Z_Param_Out_OutIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execRaycast)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateMeshName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->UpdateMeshName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateMeshID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateMeshID(Z_Param_NewID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetCOM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCOM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMeshID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execSimulate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Simulate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execNOP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NOP();
		P_NATIVE_END;
	}
	void AUnLuaBenchmarkProxy::StaticRegisterNativesAUnLuaBenchmarkProxy()
	{
		UClass* Class = AUnLuaBenchmarkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCOM", &AUnLuaBenchmarkProxy::execGetCOM },
			{ "GetIndices", &AUnLuaBenchmarkProxy::execGetIndices },
			{ "GetMeshID", &AUnLuaBenchmarkProxy::execGetMeshID },
			{ "GetMeshInfo", &AUnLuaBenchmarkProxy::execGetMeshInfo },
			{ "GetMeshName", &AUnLuaBenchmarkProxy::execGetMeshName },
			{ "GetPositions", &AUnLuaBenchmarkProxy::execGetPositions },
			{ "GetPredictedPositions", &AUnLuaBenchmarkProxy::execGetPredictedPositions },
			{ "NOP", &AUnLuaBenchmarkProxy::execNOP },
			{ "Raycast", &AUnLuaBenchmarkProxy::execRaycast },
			{ "Simulate", &AUnLuaBenchmarkProxy::execSimulate },
			{ "UpdateIndices", &AUnLuaBenchmarkProxy::execUpdateIndices },
			{ "UpdateMeshID", &AUnLuaBenchmarkProxy::execUpdateMeshID },
			{ "UpdateMeshName", &AUnLuaBenchmarkProxy::execUpdateMeshName },
			{ "UpdatePositions", &AUnLuaBenchmarkProxy::execUpdatePositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetCOM_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetCOM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetCOM", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::UnLuaBenchmarkProxy_eventGetCOM_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetIndices_Parms
		{
			TArray<int32> OutIndices;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetIndices_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::UnLuaBenchmarkProxy_eventGetIndices_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetMeshID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshID", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::UnLuaBenchmarkProxy_eventGetMeshID_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetMeshInfo_Parms
		{
			int32 OutMeshID;
			FString OutMeshName;
			FVector OutCOM;
			TArray<int32> OutIndices;
			TArray<FVector> OutPositions;
			TArray<FVector> OutPredictedPositions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutMeshID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCOM;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPredictedPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPredictedPositions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshID = { "OutMeshID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutMeshID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshName = { "OutMeshName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutMeshName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutCOM = { "OutCOM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutCOM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutPredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnLuaBenchmarkProxy_eventGetMeshInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms), &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutCOM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::UnLuaBenchmarkProxy_eventGetMeshInfo_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetMeshName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::UnLuaBenchmarkProxy_eventGetMeshName_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetPositions_Parms
		{
			TArray<FVector> OutPositions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetPositions_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::UnLuaBenchmarkProxy_eventGetPositions_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics
	{
		struct UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetPredictedPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "NOP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics
	{
		struct UnLuaBenchmarkProxy_eventRaycast_Parms
		{
			FVector Origin;
			FVector Direction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction_MetaData)) };
	void Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnLuaBenchmarkProxy_eventRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnLuaBenchmarkProxy_eventRaycast_Parms), &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "Raycast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::UnLuaBenchmarkProxy_eventRaycast_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics
	{
		struct UnLuaBenchmarkProxy_eventSimulate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventSimulate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "Simulate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::UnLuaBenchmarkProxy_eventSimulate_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics
	{
		struct UnLuaBenchmarkProxy_eventUpdateIndices_Parms
		{
			TArray<int32> NewIndices;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner = { "NewIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices = { "NewIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateIndices_Parms, NewIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::UnLuaBenchmarkProxy_eventUpdateIndices_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics
	{
		struct UnLuaBenchmarkProxy_eventUpdateMeshID_Parms
		{
			int32 NewID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_NewID = { "NewID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshID_Parms, NewID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_NewID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateMeshID", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::UnLuaBenchmarkProxy_eventUpdateMeshID_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics
	{
		struct UnLuaBenchmarkProxy_eventUpdateMeshName_Parms
		{
			FString NewName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateMeshName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::UnLuaBenchmarkProxy_eventUpdateMeshName_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics
	{
		struct UnLuaBenchmarkProxy_eventUpdatePositions_Parms
		{
			TArray<FVector> NewPositions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner = { "NewPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions = { "NewPositions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdatePositions_Parms, NewPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdatePositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::UnLuaBenchmarkProxy_eventUpdatePositions_Parms), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnLuaBenchmarkProxy);
	UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister()
	{
		return AUnLuaBenchmarkProxy::StaticClass();
	}
	struct Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COM_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_COM;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictedPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PredictedPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM, "GetCOM" }, // 2996048444
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices, "GetIndices" }, // 1418784413
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID, "GetMeshID" }, // 1191958439
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo, "GetMeshInfo" }, // 919171945
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName, "GetMeshName" }, // 123330378
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions, "GetPositions" }, // 264071703
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions, "GetPredictedPositions" }, // 3635834338
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP, "NOP" }, // 979859721
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast, "Raycast" }, // 1038499078
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate, "Simulate" }, // 2060516148
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices, "UpdateIndices" }, // 2510136533
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID, "UpdateMeshID" }, // 2505043569
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName, "UpdateMeshName" }, // 4213212496
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions, "UpdatePositions" }, // 2933537282
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perfs/UnLuaBenchmarkProxy.h" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID = { "MeshID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, MeshID), METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, MeshName), METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM = { "COM", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, COM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_Inner = { "PredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions = { "PredictedPositions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, PredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnLuaBenchmarkProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::ClassParams = {
		&AUnLuaBenchmarkProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy()
	{
		if (!Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton, Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton;
	}
	template<> UNLUATESTSUITE_API UClass* StaticClass<AUnLuaBenchmarkProxy>()
	{
		return AUnLuaBenchmarkProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnLuaBenchmarkProxy);
	struct Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnLuaBenchmarkProxy, AUnLuaBenchmarkProxy::StaticClass, TEXT("AUnLuaBenchmarkProxy"), &Z_Registration_Info_UClass_AUnLuaBenchmarkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnLuaBenchmarkProxy), 3044441544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_809655012(TEXT("/Script/UnLuaTestSuite"),
		Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
