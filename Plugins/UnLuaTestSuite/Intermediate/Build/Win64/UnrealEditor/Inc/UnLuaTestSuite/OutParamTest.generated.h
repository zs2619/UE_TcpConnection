// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UNLUATESTSUITE_OutParamTest_generated_h
#error "OutParamTest.generated.h already included, missing '#pragma once' in OutParamTest.h"
#endif
#define UNLUATESTSUITE_OutParamTest_generated_h

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_EVENT_PARMS \
	struct OutParamTestStub_eventReturnFull_Parms \
	{ \
		FVector Dest; \
		UObject* Obj; \
		float Radius; \
		bool bStop; \
	}; \
	struct OutParamTestStub_eventReturnPartial_Parms \
	{ \
		FVector Dest; \
		UObject* Obj; \
		float Radius; \
		bool bStop; \
	};


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutParamTestStub(); \
	friend struct Z_Construct_UClass_UOutParamTestStub_Statics; \
public: \
	DECLARE_CLASS(UOutParamTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UOutParamTestStub) \
	virtual UObject* _getUObject() const override { return const_cast<UOutParamTestStub*>(this); }


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUOutParamTestStub(); \
	friend struct Z_Construct_UClass_UOutParamTestStub_Statics; \
public: \
	DECLARE_CLASS(UOutParamTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UOutParamTestStub) \
	virtual UObject* _getUObject() const override { return const_cast<UOutParamTestStub*>(this); }


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutParamTestStub(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutParamTestStub) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutParamTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutParamTestStub); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutParamTestStub(UOutParamTestStub&&); \
	NO_API UOutParamTestStub(const UOutParamTestStub&); \
public:


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutParamTestStub(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutParamTestStub(UOutParamTestStub&&); \
	NO_API UOutParamTestStub(const UOutParamTestStub&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutParamTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutParamTestStub); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutParamTestStub)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_20_PROLOG \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_EVENT_PARMS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UOutParamTestStub>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
