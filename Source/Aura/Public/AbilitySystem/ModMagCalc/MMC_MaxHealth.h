// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_MaxHealth.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_MaxHealth : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	UMMC_MaxHealth(); // yapıcı

	// hesaplamaları gerçekleştireceğim
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	// oynanış efekti öznitelik yakalama tanımı, hangi özelliği yakalayacağımı tanımlayan bir yapıdır
	FGameplayEffectAttributeCaptureDefinition VigorDef;
};
