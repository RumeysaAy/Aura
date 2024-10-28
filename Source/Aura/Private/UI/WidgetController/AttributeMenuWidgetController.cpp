// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/AttributeMenuWidgetController.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "AbilitySystem/Data/AttributeInfo.h"

// nitelikler değiştikçe menü güncellenecek
void UAttributeMenuWidgetController::BindCallbacksToDependencies()
{
	UAuraAttributeSet* AS = CastChecked<UAuraAttributeSet>(AttributeSet);

	check(AttributeInfo);

	// sırasıyla bütün nitelikler için etiket - nitelik
	for (auto& Pair: AS->TagsToAttributes)
	{
		// yetenek sistemi bileşeninin, özellik değiştiğinde yayınlayacağı delegesi vardır.
		// geri aramayı veya lambdayı bağlayabileceğimiz bir temsilciyi döndürür.
		// sistemimizdeki her bir özellik için oynanış özelliği değer değişikliği temsilcisini alıyoruz.
        // Artık nitelik değiştiğinde, nitelik değişikliğine yanıt olarak lambda çağrılacaktır.
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this, Pair](const FOnAttributeChangeData& Data)
			{
				BroadcastAttributeInfo(Pair.Key, Pair.Value());
			}
		);
	}
}

// veri yayınlanacak
void UAttributeMenuWidgetController::BroadcastInitialValues()
{
	UAuraAttributeSet* AS = CastChecked<UAuraAttributeSet>(AttributeSet);

	check(AttributeInfo);

	// <FGameplayTag, FGameplayAttribute(*)()>
	for (auto& Pair : AS->TagsToAttributes)
	{
		BroadcastAttributeInfo(Pair.Key, Pair.Value());
	}
}

void UAttributeMenuWidgetController::BroadcastAttributeInfo(const FGameplayTag& AttributeTag,
	const FGameplayAttribute& Attribute) const
{
	FAuraAttributeInfo Info = AttributeInfo->FindAttributeInfoForTag(AttributeTag);
	Info.AttributeValue = Attribute.GetNumericValue(AttributeSet);
	// artık öznitelik bilgimize sahibiz ve öznitelik değerini ayarladık ve bunu yayınlayabiliriz
	AttributeInfoDelegate.Broadcast(Info); // yayınlandı
	// attribute menu'deki widgetlar bu yayın sayesinde kendisini günceller
}
