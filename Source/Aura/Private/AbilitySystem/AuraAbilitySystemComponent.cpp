// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AuraAbilitySystemComponent.h"

#include "AuraGameplayTags.h"
#include "AbilitySystem/Abilities/AuraGameplayAbility.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	/** Kendine bir GE uygulandığında sunucuda çağrılır. Buna anlık ve süreye dayalı GE'ler dahildir. */
	// Kendine oyun efekti uygulanmış delegeyle ilgili olanıdır.
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::ClientEffectApplied);

	// AuraGameplayTags.cpp'deki etikete erişeceğim
	// etiketleri döndürür. etiketleri kopyasını istemediğim için referansta saklayacağım
	const FAuraGameplayTags& GameplayTags = FAuraGameplayTags::Get();
	// GameplayTags.Attributes_Secondary_Armor.ToString() // etikete eriştim

	// etikete erişilir: FAuraGameplayTags::Get().Attributes_Primary_Resilience
}

void UAuraAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupAbilities)
{
	// yetenekleri ekleyeceğim
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupAbilities)
	{
		// AbilityClass, yetenek seviyesi
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);
		if(const UAuraGameplayAbility* AuraAbility = Cast<UAuraGameplayAbility>(AbilitySpec.Ability))
		{
			// yeteneğe etiket ekleyeceğim (AuraGameplayAbility.h'da StartupInputTag bulunur)
			AbilitySpec.DynamicAbilityTags.AddTag(AuraAbility->StartupInputTag);
			GiveAbility(AbilitySpec); // ve bununla birlikte bu yeteneğe sahibim.
		}
	}
}

// tuşa basılı tutuluyorsa gönderilen etikete göre yetenek aktifleştirilir
void UAuraAbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec&  AbilitySpec : GetActivatableAbilities())
	{
		// AbilitySpec, etkinleştirilebilen yetenektir.
		// bu yeteneğin etiketi InputTag ile eşleşiyorsa
		if(AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			AbilitySpecInputPressed(AbilitySpec);
			// yetenek aktif değilse
			if(!AbilitySpec.IsActive())
			{
				// yetenek, etikete sahipse etkinleştirilir.
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
}

void UAuraAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			AbilitySpecInputReleased(AbilitySpec);
		}
	}
}

// Bu yetenek sistemi bileşenine uygulanan herhangi bir etkiye verilen yanıt.
// bir efekt uygulandığında HUD'da bir şeyler göstermek
void UAuraAbilitySystemComponent::ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer TagContainer; // etiketleri saklayacak
	// efektin sahip olduğu oyun etiketleri
	EffectSpec.GetAllAssetTags(TagContainer);

	// EffectAssetTags temsilcisine bağlanan herhangi bir sınıf, dolu bir etiket konteyneri alacaktır
	EffectAssetTags.Broadcast(TagContainer);

	// sadece bir temsilci(EffectAssetTags) yayınlıyor.
	// bu etiket kapsayıcısını gönderecek ve ardından ayrıştıracak olan widget denetleyicisi olacak.
}
