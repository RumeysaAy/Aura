// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/AuraInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraInputComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraInputComponent();
	AURA_API UClass* Z_Construct_UClass_UAuraInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraInputComponent::StaticRegisterNativesUAuraInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraInputComponent);
	UClass* Z_Construct_UClass_UAuraInputComponent_NoRegister()
	{
		return UAuraInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuraInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraInputComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/AuraInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/AuraInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraInputComponent_Statics::ClassParams = {
		&UAuraInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraInputComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraInputComponent()
	{
		if (!Z_Registration_Info_UClass_UAuraInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraInputComponent.OuterSingleton, Z_Construct_UClass_UAuraInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraInputComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraInputComponent>()
	{
		return UAuraInputComponent::StaticClass();
	}
	UAuraInputComponent::UAuraInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraInputComponent);
	UAuraInputComponent::~UAuraInputComponent() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Input_AuraInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Input_AuraInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraInputComponent, UAuraInputComponent::StaticClass, TEXT("UAuraInputComponent"), &Z_Registration_Info_UClass_UAuraInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraInputComponent), 3969177388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Input_AuraInputComponent_h_1405847473(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Input_AuraInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Input_AuraInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
