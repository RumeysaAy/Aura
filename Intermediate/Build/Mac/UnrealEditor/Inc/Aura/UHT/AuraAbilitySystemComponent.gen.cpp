// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraAbilitySystemComponent::execClientEffectApplied)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
		P_NATIVE_END;
	}
	struct AuraAbilitySystemComponent_eventClientEffectApplied_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayEffectSpec EffectSpec;
		FActiveGameplayEffectHandle ActiveEffectHandle;
	};
	static FName NAME_UAuraAbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
	void UAuraAbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
	{
		AuraAbilitySystemComponent_eventClientEffectApplied_Parms Parms;
		Parms.AbilitySystemComponent=AbilitySystemComponent;
		Parms.EffectSpec=EffectSpec;
		Parms.ActiveEffectHandle=ActiveEffectHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAuraAbilitySystemComponent_ClientEffectApplied),&Parms);
	}
	void UAuraAbilitySystemComponent::StaticRegisterNativesUAuraAbilitySystemComponent()
	{
		UClass* Class = UAuraAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEffectApplied", &UAuraAbilitySystemComponent::execClientEffectApplied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData) }; // 4290086594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemComponent_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), sizeof(AuraAbilitySystemComponent_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers) < 2048);
	static_assert(sizeof(AuraAbilitySystemComponent_eventClientEffectApplied_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemComponent);
	UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister()
	{
		return UAuraAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 2481925008
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams = {
		&UAuraAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAbilitySystemComponent>()
	{
		return UAuraAbilitySystemComponent::StaticClass();
	}
	UAuraAbilitySystemComponent::UAuraAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemComponent);
	UAuraAbilitySystemComponent::~UAuraAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemComponent, UAuraAbilitySystemComponent::StaticClass, TEXT("UAuraAbilitySystemComponent"), &Z_Registration_Info_UClass_UAuraAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemComponent), 1392647887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_4160697058(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
