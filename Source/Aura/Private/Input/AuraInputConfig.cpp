// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag,
	bool bLogNotFound) const
{
	// bu fonksiyona aktarılan giriş etiketiyle ilişkili giriş eylemini (UInputAction) bulmak istiyorum.
	// Yetenek Girişi eylem dizisinden (AbilityInputActions) belirli bir etiketle ilişkili giriş eylemini (UInputAction) bulacağım.
	for (const FAuraInputAction& Action: AbilityInputActions)
	{
		// Action: yetenek girişi eylemlerindeki her bir eylemdir. (struct)
		// Action.InputAction, nullptr değilse ve bu fonksiyona aktarılan giriş etiketiyse
		if(Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}
	// Action.InputAction, nullptr ise
	if (bLogNotFound)
	{
		// giriş etiketi için yetenek giriş eylemi (Action) bulunamadı
		UE_LOG(LogTemp, Error, TEXT("Can't find AbilityInputAction for InputTag [%s], on InputConfig [%s]"), *InputTag.ToString(), *GetNameSafe(this));
	}
	return nullptr;
}
