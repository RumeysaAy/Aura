// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraInputConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
	UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
	{
		return AAuraPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAuraPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuraContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuraContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuraAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuraAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRunAcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRunAcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext = { "AuraContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// girdi e\xc5\x9fleme ba\xc4\x9flam\xc4\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "girdi e\xc5\x9fleme ba\xc4\x9flam\xc4\xb1" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// tu\xc5\x9flar ve etiketleri\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tu\xc5\x9flar ve etiketleri" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, InputConfig), Z_Construct_UClass_UAuraInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent = { "AuraAbilitySystemComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraAbilitySystemComponent), Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData[] = {
		{ "Category", "AuraPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// karakter ko\xc5\x9ftu\xc4\x9fu s\xc3\xbcrece hedefe yakla\xc5\x9f""acak, hedefe ne kadar yakla\xc5\x9ft\xc4\xb1?\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "karakter ko\xc5\x9ftu\xc4\x9fu s\xc3\xbcrece hedefe yakla\xc5\x9f""acak, hedefe ne kadar yakla\xc5\x9ft\xc4\xb1?" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius = { "AutoRunAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AutoRunAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "AuraPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// hedefe giden yol (spline)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hedefe giden yol (spline)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData), Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
		&AAuraPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
	{
		return AAuraPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
	AAuraPlayerController::~AAuraPlayerController() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 2875746253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Player_AuraPlayerController_h_1202328015(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
