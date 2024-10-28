// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/AttributeInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo();
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraAttributeInfo;
class UScriptStruct* FAuraAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraAttributeInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AuraAttributeInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraAttributeInfo>()
{
	return FAuraAttributeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraAttributeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// yap\xc4\xb1 nesnesinin oyun etiketiyle tan\xc4\xb1mlanmas\xc4\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "yap\xc4\xb1 nesnesinin oyun etiketiyle tan\xc4\xb1mlanmas\xc4\xb1" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag_MetaData), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc3\xb6zellik ad\xc4\xb1n\xc4\xb1 widget'a aktarmak i\xc3\xa7in metin (\xc3\xb6zellik ad\xc4\xb1 men\xc3\xbc""de ayarlanabilir)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xb6zellik ad\xc4\xb1n\xc4\xb1 widget'a aktarmak i\xc3\xa7in metin (\xc3\xb6zellik ad\xc4\xb1 men\xc3\xbc""de ayarlanabilir)" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName_MetaData), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc3\xb6zellik a\xc3\xa7\xc4\xb1klamas\xc4\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xb6zellik a\xc3\xa7\xc4\xb1klamas\xc4\xb1" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription = { "AttributeDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription_MetaData), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc3\xb6zelli\xc4\x9fin de\xc4\x9f""eri\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xb6zelli\xc4\x9fin de\xc4\x9f""eri" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeInfo, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewProp_AttributeValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"AuraAttributeInfo",
		Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers),
		sizeof(FAuraAttributeInfo),
		alignof(FAuraAttributeInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraAttributeInfo.InnerSingleton;
	}
	void UAttributeInfo::StaticRegisterNativesUAttributeInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeInfo);
	UClass* Z_Construct_UClass_UAttributeInfo_NoRegister()
	{
		return UAttributeInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/AttributeInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner = { "AttributeInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraAttributeInfo, METADATA_PARAMS(0, nullptr) }; // 1966884259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData[] = {
		{ "Category", "AttributeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FAuraAttributeInfo struct i\xc3\xa7""eren bir T dizisi\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAuraAttributeInfo struct i\xc3\xa7""eren bir T dizisi" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation = { "AttributeInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeInfo, AttributeInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData), Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData) }; // 1966884259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeInfo_Statics::ClassParams = {
		&UAttributeInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeInfo()
	{
		if (!Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton, Z_Construct_UClass_UAttributeInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAttributeInfo>()
	{
		return UAttributeInfo::StaticClass();
	}
	UAttributeInfo::UAttributeInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeInfo);
	UAttributeInfo::~UAttributeInfo() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo[] = {
		{ FAuraAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FAuraAttributeInfo_Statics::NewStructOps, TEXT("AuraAttributeInfo"), &Z_Registration_Info_UScriptStruct_AuraAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraAttributeInfo), 1966884259U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeInfo, UAttributeInfo::StaticClass, TEXT("UAttributeInfo"), &Z_Registration_Info_UClass_UAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeInfo), 3993883317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_1194760910(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
