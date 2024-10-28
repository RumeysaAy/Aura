// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ModMagCalc/MMC_MaxMana.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxMana::UMMC_MaxMana()
{
	IntDef.AttributeToCapture = UAuraAttributeSet::GetIntelligenceAttribute();
	// öznitelik kaynağını Hedef olarak ayarlandı
	IntDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	IntDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(IntDef);
}

float UMMC_MaxMana::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target: kaynak ve hedeften etiketleri topla
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	// bir özelliği yakalamak ve bu özelliğin değerinin büyüklüğünü elde etmek için
	FAggregatorEvaluateParameters EvaluationParameters; // özelliği yakalamak için belirli bir fonksiyona aktarmamız gereken parametreler
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Int = 0.f; // gücün gerçek değeri
	// Bu işlev ,Int değişkenini  anlık olarak IntDef özelliğinin büyüklüğüne veya değerine eşit olacak şekilde ayarlayacaktır.
	GetCapturedAttributeMagnitude(IntDef, Spec, EvaluationParameters, Int);
	// bu işlevi çağırdıktan sonra, Int artık hedefte IntDef özelliğinin değerine sahip olacaktır.

	Int = FMath::Max<float>(Int, 0.f);

	// kaynak nesne (AuraCharacter): Spec.GetContext().GetSourceObject()
	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel(); // seviye

	return 50.f + 2.5f * Int + 15.f * PlayerLevel; // MaxMana değeri
	// 50 + 2.5 * 17 + 10 * 1
}
