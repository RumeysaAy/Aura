// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDataUnderMouse() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse();
	AURA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventMouseTargetDataSignature_Parms
		{
			FGameplayAbilityTargetDataHandle DataHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventMouseTargetDataSignature_Parms, DataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData), Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData) }; // 3419327209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "MouseTargetDataSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::_Script_Aura_eventMouseTargetDataSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::_Script_Aura_eventMouseTargetDataSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMouseTargetDataSignature_DelegateWrapper(const FMulticastScriptDelegate& MouseTargetDataSignature, FGameplayAbilityTargetDataHandle const& DataHandle)
{
	struct _Script_Aura_eventMouseTargetDataSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
	_Script_Aura_eventMouseTargetDataSignature_Parms Parms;
	Parms.DataHandle=DataHandle;
	MouseTargetDataSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTargetDataUnderMouse::execCreateTargetDataUnderMouse)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTargetDataUnderMouse**)Z_Param__Result=UTargetDataUnderMouse::CreateTargetDataUnderMouse(Z_Param_OwningAbility);
		P_NATIVE_END;
	}
	void UTargetDataUnderMouse::StaticRegisterNativesUTargetDataUnderMouse()
	{
		UClass* Class = UTargetDataUnderMouse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTargetDataUnderMouse", &UTargetDataUnderMouse::execCreateTargetDataUnderMouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics
	{
		struct TargetDataUnderMouse_eventCreateTargetDataUnderMouse_Parms
		{
			UGameplayAbility* OwningAbility;
			UTargetDataUnderMouse* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDataUnderMouse_eventCreateTargetDataUnderMouse_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDataUnderMouse_eventCreateTargetDataUnderMouse_Parms, ReturnValue), Z_Construct_UClass_UTargetDataUnderMouse_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "TargetDataUnderMouse" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDataUnderMouse, nullptr, "CreateTargetDataUnderMouse", nullptr, nullptr, Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::TargetDataUnderMouse_eventCreateTargetDataUnderMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::TargetDataUnderMouse_eventCreateTargetDataUnderMouse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetDataUnderMouse);
	UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister()
	{
		return UTargetDataUnderMouse::StaticClass();
	}
	struct Z_Construct_UClass_UTargetDataUnderMouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetDataUnderMouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetDataUnderMouse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetDataUnderMouse_CreateTargetDataUnderMouse, "CreateTargetDataUnderMouse" }, // 2786135117
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDataUnderMouse_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDataUnderMouse_Statics::NewProp_ValidData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetDataUnderMouse_Statics::NewProp_ValidData = { "ValidData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDataUnderMouse, ValidData), Z_Construct_UDelegateFunction_Aura_MouseTargetDataSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::NewProp_ValidData_MetaData), Z_Construct_UClass_UTargetDataUnderMouse_Statics::NewProp_ValidData_MetaData) }; // 2051891117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetDataUnderMouse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDataUnderMouse_Statics::NewProp_ValidData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetDataUnderMouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetDataUnderMouse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetDataUnderMouse_Statics::ClassParams = {
		&UTargetDataUnderMouse::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetDataUnderMouse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetDataUnderMouse_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetDataUnderMouse()
	{
		if (!Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton, Z_Construct_UClass_UTargetDataUnderMouse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UTargetDataUnderMouse>()
	{
		return UTargetDataUnderMouse::StaticClass();
	}
	UTargetDataUnderMouse::UTargetDataUnderMouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetDataUnderMouse);
	UTargetDataUnderMouse::~UTargetDataUnderMouse() {}
	struct Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetDataUnderMouse, UTargetDataUnderMouse::StaticClass, TEXT("UTargetDataUnderMouse"), &Z_Registration_Info_UClass_UTargetDataUnderMouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetDataUnderMouse), 2757172223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_1967300244(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_rumeysaay_Documents_Unreal_Projects_Aura_Source_Aura_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
