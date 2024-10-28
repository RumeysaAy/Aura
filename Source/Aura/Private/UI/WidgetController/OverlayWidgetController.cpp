// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlayWidgetController.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	// widget'lara sağlık ve büyünün başlangıç değerini yayınlayacağım
	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
	OnMaxManaChanged.Broadcast(AuraAttributeSet->GetMaxMana());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);
	
	// nitelikler değiştiğinde bu işlevler çağrılacak.
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthAttribute()
		).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				// widget'ın yanıt verebilmesi için sağlık değişikliği temsilcisini yayınladım
				OnHealthChanged.Broadcast(Data.NewValue);
			}
		);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetMaxHealthAttribute()
		).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
		);

	// ManaChanged, yetenek sistemi bileşenindeki delegelere bağlanır
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetManaAttribute()
		).AddLambda(
			// büyünün değeri değiştiğinde bu fonksiyon çağrılacak
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaChanged.Broadcast(Data.NewValue);
			}
		);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetMaxManaAttribute()
		).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxManaChanged.Broadcast(Data.NewValue);
			}
		);


	// widget denetleyicinin, EffectAssetTags temsilcisine yanıt olarak ateşlenecek bir lambdası var.
	// EffectAssetTags temsilcisi için yayın gerçekleştiğinde, bu lambda çağrılacak
	// ve bir giriş parametresine(FGameplayTagContainer) sahip olacak
	// AssetTags adı verilir ve bunu temsilciden alır.
	Cast<UAuraAbilitySystemComponent>(AbilitySystemComponent)->EffectAssetTags.AddLambda(
		// Delegate yayınına yanıt olarak Lambda çağrıldı
		[this](const FGameplayTagContainer& AssetTags)
		{
			// TagContainer'ın(AssetTags) içindeki her bir etiket için widget denetleyicisine yayın yapmak
			for (const FGameplayTag Tag : AssetTags)
			{
				// For example, say that Tag = Message.HealthPotion
				// “Message.HealthPotion”.MatchesTag(“Message”) will return True, “Message”.MatchesTag(“Message.HealthPotion”) will return False
				FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(FName("Message"));
				if (Tag.MatchesTag(MessageTag)) // bir mesaj etiketi mi?
				{
					// veri tablosundaki satırı etiket kullanarak çağırdım (etiket ile satır aynı adlı)
					const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable, Tag);
					// bu satırı widget'a gönder, widget'a yayınla
					MessageWidgetRowDelegate.Broadcast(*Row);
				}
			}
		}
	);
}

