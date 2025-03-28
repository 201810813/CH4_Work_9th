// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumBaseball/Public/BBUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBUserWidget() {}

// Begin Cross Module References
NUMBASEBALL_API UClass* Z_Construct_UClass_UBBUserWidget();
NUMBASEBALL_API UClass* Z_Construct_UClass_UBBUserWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NumBaseball();
// End Cross Module References

// Begin Class UBBUserWidget Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics
{
	struct BBUserWidget_eventOnChatInputTextCommitted_Parms
	{
		FText NewText;
		TEnumAsByte<ETextCommit::Type> CommitType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BBUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBUserWidget_eventOnChatInputTextCommitted_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitType = { "CommitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBUserWidget_eventOnChatInputTextCommitted_Parms, CommitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::NewProp_NewText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBBUserWidget, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::BBUserWidget_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::BBUserWidget_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBBUserWidget::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_NewText,ETextCommit::Type(Z_Param_CommitType));
	P_NATIVE_END;
}
// End Class UBBUserWidget Function OnChatInputTextCommitted

// Begin Class UBBUserWidget
void UBBUserWidget::StaticRegisterNativesUBBUserWidget()
{
	UClass* Class = UBBUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UBBUserWidget::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBBUserWidget);
UClass* Z_Construct_UClass_UBBUserWidget_NoRegister()
{
	return UBBUserWidget::StaticClass();
}
struct Z_Construct_UClass_UBBUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BBUserWidget.h" },
		{ "ModuleRelativePath", "Public/BBUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BBUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BBTextBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBBUserWidget_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 2797841825
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBBUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBUserWidget_Statics::NewProp_BBTextBox = { "BBTextBox", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBUserWidget, BBTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBTextBox_MetaData), NewProp_BBTextBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBBUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBUserWidget_Statics::NewProp_BBTextBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBBUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NumBaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBBUserWidget_Statics::ClassParams = {
	&UBBUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBBUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBBUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBBUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBBUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBBUserWidget()
{
	if (!Z_Registration_Info_UClass_UBBUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBBUserWidget.OuterSingleton, Z_Construct_UClass_UBBUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBBUserWidget.OuterSingleton;
}
template<> NUMBASEBALL_API UClass* StaticClass<UBBUserWidget>()
{
	return UBBUserWidget::StaticClass();
}
UBBUserWidget::UBBUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBBUserWidget);
UBBUserWidget::~UBBUserWidget() {}
// End Class UBBUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBBUserWidget, UBBUserWidget::StaticClass, TEXT("UBBUserWidget"), &Z_Registration_Info_UClass_UBBUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBBUserWidget), 1498895421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBUserWidget_h_3092400499(TEXT("/Script/NumBaseball"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH4_Work_9th_NumBaseball_Source_NumBaseball_Public_BBUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
