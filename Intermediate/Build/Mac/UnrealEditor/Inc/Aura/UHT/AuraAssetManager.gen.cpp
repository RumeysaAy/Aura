// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAssetManager() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAssetManager();
	AURA_API UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraAssetManager::StaticRegisterNativesUAuraAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAssetManager);
	UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister()
	{
		return UAuraAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AuraAssetManager.h" },
		{ "ModuleRelativePath", "Public/AuraAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAssetManager_Statics::ClassParams = {
		&UAuraAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAssetManager()
	{
		if (!Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton, Z_Construct_UClass_UAuraAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAssetManager.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAssetManager>()
	{
		return UAuraAssetManager::StaticClass();
	}
	UAuraAssetManager::UAuraAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAssetManager);
	UAuraAssetManager::~UAuraAssetManager() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AuraAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AuraAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAssetManager, UAuraAssetManager::StaticClass, TEXT("UAuraAssetManager"), &Z_Registration_Info_UClass_UAuraAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAssetManager), 344969449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AuraAssetManager_h_2413982215(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AuraAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AuraAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
