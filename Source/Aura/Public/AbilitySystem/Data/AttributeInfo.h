// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AttributeInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuraAttributeInfo
{
	GENERATED_BODY()

	// yapı nesnesinin oyun etiketiyle tanımlanması
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag AttributeTag = FGameplayTag();

	// özellik adını widget'a aktarmak için metin (özellik adı menüde ayarlanabilir)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText AttributeName = FText();

	// özellik açıklaması
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText AttributeDescription = FText();

	// özelliğin değeri
	UPROPERTY(BlueprintReadOnly)
	float AttributeValue = 0.f;
};

/**
 * 
 */
UCLASS()
class AURA_API UAttributeInfo : public UDataAsset
{
	GENERATED_BODY()

public:
	// bir oyun etiketi alacak ve doğru bilgiyi döndürecek bir işlev
	// etikete göre AttributeInformation dizisindeki doğru FAuraAttributeInfo struct
	FAuraAttributeInfo FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool blogNotFound = false) const;
	
	// FAuraAttributeInfo struct içeren bir T dizisi
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FAuraAttributeInfo> AttributeInformation;
	
};
