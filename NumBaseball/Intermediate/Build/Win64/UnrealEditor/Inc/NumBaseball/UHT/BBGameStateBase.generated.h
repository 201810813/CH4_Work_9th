// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BBGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBASEBALL_BBGameStateBase_generated_h
#error "BBGameStateBase.generated.h already included, missing '#pragma once' in BBGameStateBase.h"
#endif
#define NUMBASEBALL_BBGameStateBase_generated_h

#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_CALLBACK_WRAPPERS
#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGameStateBase(); \
	friend struct Z_Construct_UClass_ABBGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABBGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumBaseball"), NO_API) \
	DECLARE_SERIALIZER(ABBGameStateBase)


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGameStateBase(ABBGameStateBase&&); \
	ABBGameStateBase(const ABBGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBGameStateBase) \
	NO_API virtual ~ABBGameStateBase();


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_12_PROLOG
#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBASEBALL_API UClass* StaticClass<class ABBGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
