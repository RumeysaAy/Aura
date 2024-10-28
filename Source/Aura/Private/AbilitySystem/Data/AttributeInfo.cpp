// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool blogNotFound) const
{
	// blogNotFound true ise FAuraAttributeInfo aranır, bulunamazsa hatayı günlüğe kaydedilir
	// Artık bir dizimiz var ve bu fonksiyon, nitelik için bir oyun etiketi alıyor.
	// Peki dizimizde bu özellik etiketine sahip yetenek bilgisi yapısını nasıl bulacağız?

	for (const FAuraAttributeInfo& Info: AttributeInformation)
	{
		if (Info.AttributeTag.MatchesTagExact(AttributeTag)) // tam bir eşleşme olup olmadığını kontrol edecektir.
		{
			return Info; // etikete göre FAuraAttributeInfo dönderilir
		}
	}

	// FAuraAttributeInfo bulunamadıysa hata günlüğe kaydedilir
	// eğer true olarak geçersek bu, başarılı bir özellik alamadığımızda bir hata görmek istediğimiz anlamına gelir
	if (blogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for AttributeTag [%s] on AttributeInfo [%s]."), *AttributeTag.ToString(), *GetNameSafe(this));
	}

	return FAuraAttributeInfo(); // boş bir nitelik bilgisi
}
