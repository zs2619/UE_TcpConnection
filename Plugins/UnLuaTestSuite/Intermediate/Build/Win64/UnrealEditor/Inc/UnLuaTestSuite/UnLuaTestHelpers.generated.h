// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UObject;
struct FUnLuaTestTableRow;
struct FLinearColor;
struct FColor;
#ifdef UNLUATESTSUITE_UnLuaTestHelpers_generated_h
#error "UnLuaTestHelpers.generated.h already included, missing '#pragma once' in UnLuaTestHelpers.h"
#endif
#define UNLUATESTSUITE_UnLuaTestHelpers_generated_h

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_26_DELEGATE \
static inline void FUnLuaTestSimpleEvent_DelegateWrapper(const FMulticastScriptDelegate& UnLuaTestSimpleEvent) \
{ \
	UnLuaTestSimpleEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_28_DELEGATE \
static inline void FUnLuaTestSimpleHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestSimpleHandler) \
{ \
	UnLuaTestSimpleHandler.ProcessDelegate<UObject>(NULL); \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_30_DELEGATE \
struct _Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms \
{ \
	FString Name; \
	int32 ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FUnLuaTestComplexHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestComplexHandler, FString& Name) \
{ \
	_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms Parms; \
	Parms.Name=Name; \
	UnLuaTestComplexHandler.ProcessDelegate<UObject>(&Parms); \
	Name=Parms.Name; \
	return Parms.ReturnValue; \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_32_DELEGATE \
struct _Script_UnLuaTestSuite_eventIssue304Event_Parms \
{ \
	TArray<FString> Array; \
}; \
static inline void FIssue304Event_DelegateWrapper(const FMulticastScriptDelegate& Issue304Event, const TArray<FString>& Array) \
{ \
	_Script_UnLuaTestSuite_eventIssue304Event_Parms Parms; \
	Parms.Array=Array; \
	Issue304Event.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_34_DELEGATE \
struct _Script_UnLuaTestSuite_eventIssue362Delegate_Parms \
{ \
	TArray<int32> Array; \
}; \
static inline void FIssue362Delegate_DelegateWrapper(const FScriptDelegate& Issue362Delegate, TArray<int32>& Array) \
{ \
	_Script_UnLuaTestSuite_eventIssue362Delegate_Parms Parms; \
	Parms.Array=Array; \
	Issue362Delegate.ProcessDelegate<UObject>(&Parms); \
	Array=Parms.Array; \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_SPARSE_DATA
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestForIssue407); \
	DECLARE_FUNCTION(execAddCount);


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestForIssue407); \
	DECLARE_FUNCTION(execAddCount);


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestStub(); \
	friend struct Z_Construct_UClass_UUnLuaTestStub_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestStub)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUUnLuaTestStub(); \
	friend struct Z_Construct_UClass_UUnLuaTestStub_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestStub)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestStub(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestStub) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStub); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestStub(UUnLuaTestStub&&); \
	NO_API UUnLuaTestStub(const UUnLuaTestStub&); \
public:


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestStub(UUnLuaTestStub&&); \
	NO_API UUnLuaTestStub(const UUnLuaTestStub&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStub); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnLuaTestStub)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_67_PROLOG
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_RPC_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_INCLASS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_INCLASS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UUnLuaTestStub>();

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_SPARSE_DATA
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_RPC_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_EVENT_PARMS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_CALLBACK_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestStubForIssue446(); \
	friend struct Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestStubForIssue446, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestStubForIssue446) \
	virtual UObject* _getUObject() const override { return const_cast<UUnLuaTestStubForIssue446*>(this); }


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUUnLuaTestStubForIssue446(); \
	friend struct Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestStubForIssue446, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestStubForIssue446) \
	virtual UObject* _getUObject() const override { return const_cast<UUnLuaTestStubForIssue446*>(this); }


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestStubForIssue446(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestStubForIssue446) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStubForIssue446); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStubForIssue446); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestStubForIssue446(UUnLuaTestStubForIssue446&&); \
	NO_API UUnLuaTestStubForIssue446(const UUnLuaTestStubForIssue446&); \
public:


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestStubForIssue446(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestStubForIssue446(UUnLuaTestStubForIssue446&&); \
	NO_API UUnLuaTestStubForIssue446(const UUnLuaTestStubForIssue446&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStubForIssue446); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStubForIssue446); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestStubForIssue446)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_113_PROLOG \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_EVENT_PARMS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_RPC_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_INCLASS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_INCLASS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UUnLuaTestStubForIssue446>();

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_SPARSE_DATA
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_RPC_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_EVENT_PARMS \
	struct UnLuaTestActor_eventTestForIssue300_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UnLuaTestActor_eventTestForIssue300_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct UnLuaTestActor_eventTestForIssue328_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UnLuaTestActor_eventTestForIssue328_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UnLuaTestActor_eventTestForIssue445_Parms \
	{ \
		int32 Index; \
		TSubclassOf<UUserWidget>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UnLuaTestActor_eventTestForIssue445_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_CALLBACK_WRAPPERS
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnLuaTestActor(); \
	friend struct Z_Construct_UClass_AUnLuaTestActor_Statics; \
public: \
	DECLARE_CLASS(AUnLuaTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaTestActor)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_INCLASS \
private: \
	static void StaticRegisterNativesAUnLuaTestActor(); \
	friend struct Z_Construct_UClass_AUnLuaTestActor_Statics; \
public: \
	DECLARE_CLASS(AUnLuaTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaTestActor)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaTestActor(AUnLuaTestActor&&); \
	NO_API AUnLuaTestActor(const AUnLuaTestActor&); \
public:


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaTestActor(AUnLuaTestActor&&); \
	NO_API AUnLuaTestActor(const AUnLuaTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaTestActor)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_138_PROLOG \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_EVENT_PARMS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_RPC_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_INCLASS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_CALLBACK_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_INCLASS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class AUnLuaTestActor>();

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<struct FUnLuaTestTableRow>();

#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_186_DELEGATE \
struct _Script_UnLuaTestSuite_eventIssule294Event_Parms \
{ \
	int32 Value1; \
	UObject* Value2; \
}; \
static inline void FIssule294Event_DelegateWrapper(const FScriptDelegate& Issule294Event, int32 Value1, UObject* Value2) \
{ \
	_Script_UnLuaTestSuite_eventIssule294Event_Parms Parms; \
	Parms.Value1=Value1; \
	Parms.Value2=Value2; \
	Issule294Event.ProcessDelegate<UObject>(&Parms); \
}


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_SPARSE_DATA
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestForIssue376); \
	DECLARE_FUNCTION(execTestForIssue331); \
	DECLARE_FUNCTION(execTestForIssue323); \
	DECLARE_FUNCTION(execTestForIssue294); \
	DECLARE_FUNCTION(execTestForIssue293); \
	DECLARE_FUNCTION(execTestForBaseSpec2); \
	DECLARE_FUNCTION(execTestForBaseSpec1);


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestForIssue376); \
	DECLARE_FUNCTION(execTestForIssue331); \
	DECLARE_FUNCTION(execTestForIssue323); \
	DECLARE_FUNCTION(execTestForIssue294); \
	DECLARE_FUNCTION(execTestForIssue293); \
	DECLARE_FUNCTION(execTestForBaseSpec2); \
	DECLARE_FUNCTION(execTestForBaseSpec1);


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestFunctionLibrary)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUUnLuaTestFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnLuaTestFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaTestFunctionLibrary)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestFunctionLibrary(UUnLuaTestFunctionLibrary&&); \
	NO_API UUnLuaTestFunctionLibrary(const UUnLuaTestFunctionLibrary&); \
public:


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaTestFunctionLibrary(UUnLuaTestFunctionLibrary&&); \
	NO_API UUnLuaTestFunctionLibrary(const UUnLuaTestFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestFunctionLibrary)


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_188_PROLOG
#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_RPC_WRAPPERS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_INCLASS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_SPARSE_DATA \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_INCLASS_NO_PURE_DECLS \
	FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UUnLuaTestFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_2_4_0_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h


#define FOREACH_ENUM_EENUMFORISSUE331(op) \
	op(RECORD_NONE) \
	op(RECORD_TO_FILE) \
	op(RECORD_TO_LOG) 
#define FOREACH_ENUM_EUNLUATESTENUM(op) \
	op(EUnLuaTestEnum::None) \
	op(EUnLuaTestEnum::Value1) \
	op(EUnLuaTestEnum::Value2) 

enum class EUnLuaTestEnum : uint8;
template<> UNLUATESTSUITE_API UEnum* StaticEnum<EUnLuaTestEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
