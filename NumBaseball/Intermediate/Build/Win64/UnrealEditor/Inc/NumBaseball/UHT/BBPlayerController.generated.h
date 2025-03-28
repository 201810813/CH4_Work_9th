// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BBPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBASEBALL_BBPlayerController_generated_h
#error "BBPlayerController.generated.h already included, missing '#pragma once' in BBPlayerController.h"
#endif
#define NUMBASEBALL_BBPlayerController_generated_h

#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_CALLBACK_WRAPPERS
#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBPlayerController(); \
	friend struct Z_Construct_UClass_ABBPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumBaseball"), NO_API) \
	DECLARE_SERIALIZER(ABBPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBPlayerController(ABBPlayerController&&); \
	ABBPlayerController(const ABBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABBPlayerController) \
	NO_API virtual ~ABBPlayerController();


#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_11_PROLOG
#define FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_CALLBACK_WRAPPERS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBASEBALL_API UClass* StaticClass<class ABBPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
