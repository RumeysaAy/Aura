// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ModMagCalc/MMC_MaxHealth.h"

#include "EditorDirectories.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
	VigorDef.AttributeToCapture = UAuraAttributeSet::GetVigorAttribute();
	VigorDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VigorDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(VigorDef);
}

float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target: kaynak ve hedeften etiketleri topla
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	// bir özelliği yakalamak ve bu özelliğin değerinin büyüklüğünü elde etmek için
	FAggregatorEvaluateParameters EvaluationParameters; // özelliği yakalamak için belirli bir fonksiyona aktarmamız gereken parametreler
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Vigor = 0.f; // gücün gerçek değeri
	// Bu işlev ,Vigor değişkenini  anlık olarak vigor özelliğinin büyüklüğüne veya değerine eşit olacak şekilde ayarlayacaktır.
	GetCapturedAttributeMagnitude(VigorDef, Spec, EvaluationParameters, Vigor);
	// bu işlevi çağırdıktan sonra, vigor artık hedefte vigor özelliğinin değerine sahip olacaktır.

	Vigor = FMath::Max<float>(Vigor, 0.f);

	// kaynak nesne (AuraCharacter): Spec.GetContext().GetSourceObject()
	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel(); // seviye

	return 80.f + 2.5f * Vigor + 10 * PlayerLevel; // MaxHealth değeri
	// 80 + 2.5 * 9 + 10 * 1 = 112.5
}
