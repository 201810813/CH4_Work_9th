// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumBaseball/Public/BBPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
NUMBASEBALL_API UClass* Z_Construct_UClass_ABBPawn();
NUMBASEBALL_API UClass* Z_Construct_UClass_ABBPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumBaseball();
// End Cross Module References

// Begin Class ABBPawn
void ABBPawn::StaticRegisterNativesABBPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBPawn);
UClass* Z_Construct_UClass_ABBPawn_NoRegister()
{
	return ABBPawn::StaticClass();
}
struct Z_Construct_UClass_ABBPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BBPawn.h" },
		{ "ModuleRelativePath", "Public/BBPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABBPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NumBaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBPawn_Statics::ClassParams = {
	&ABBPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBPawn()
{
	if (!Z_Registration_Info_UClass_ABBPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBPawn.OuterSingleton, Z_Construct_UClass_ABBPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBPawn.OuterSingleton;
}
template<> NUMBASEBALL_API UClass* StaticClass<ABBPawn>()
{
	return ABBPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBPawn);
ABBPawn::~ABBPawn() {}
// End Class ABBPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBPawn, ABBPawn::StaticClass, TEXT("ABBPawn"), &Z_Registration_Info_UClass_ABBPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBPawn), 2101237735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPawn_h_2598839163(TEXT("/Script/NumBaseball"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
