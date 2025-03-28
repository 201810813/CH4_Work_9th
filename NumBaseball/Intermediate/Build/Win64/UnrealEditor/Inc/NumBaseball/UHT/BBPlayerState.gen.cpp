// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumBaseball/Public/BBPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NUMBASEBALL_API UClass* Z_Construct_UClass_ABBPlayerState();
NUMBASEBALL_API UClass* Z_Construct_UClass_ABBPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumBaseball();
// End Cross Module References

// Begin Class ABBPlayerState
void ABBPlayerState::StaticRegisterNativesABBPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBPlayerState);
UClass* Z_Construct_UClass_ABBPlayerState_NoRegister()
{
	return ABBPlayerState::StaticClass();
}
struct Z_Construct_UClass_ABBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BBPlayerState.h" },
		{ "ModuleRelativePath", "Public/BBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "ModuleRelativePath", "Public/BBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttempt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttempt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAttempt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_CurrentAttempt = { "CurrentAttempt", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, CurrentAttempt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttempt_MetaData), NewProp_CurrentAttempt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_MaxAttempt = { "MaxAttempt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, MaxAttempt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttempt_MetaData), NewProp_MaxAttempt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_CurrentAttempt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_MaxAttempt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NumBaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBPlayerState_Statics::ClassParams = {
	&ABBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBPlayerState()
{
	if (!Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton, Z_Construct_UClass_ABBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton;
}
template<> NUMBASEBALL_API UClass* StaticClass<ABBPlayerState>()
{
	return ABBPlayerState::StaticClass();
}
void ABBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static const FName Name_CurrentAttempt(TEXT("CurrentAttempt"));
	const bool bIsValid = true
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_CurrentAttempt == ClassReps[(int32)ENetFields_Private::CurrentAttempt].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBPlayerState);
ABBPlayerState::~ABBPlayerState() {}
// End Class ABBPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBPlayerState, ABBPlayerState::StaticClass, TEXT("ABBPlayerState"), &Z_Registration_Info_UClass_ABBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBPlayerState), 1940468826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerState_h_2947594509(TEXT("/Script/NumBaseball"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
