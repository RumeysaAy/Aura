// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/AuraEffectActor.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"

// Sets default values
AAuraEffectActor::AAuraEffectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));
}

// Called when the game starts or when spawned
void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
}

// Efekt hedefe uygulanacak
// bir tür yetenek sistemi bileşenine sahip bir hedefi iletiriz.
// hedef yetenek sistemi bileşenine bir oynanış efekti uygulamak için
void AAuraEffectActor::ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass)
{
	// hedefin AbilitySystemComponent'ini elde edeceğim
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	// hedefin AbilitySystemComponent'i yoksa hiçbir şey yapma
	if (TargetASC == nullptr) return;

	// aura efekti aktörü bir efekt uygulamak üzere tasarlanmıştır.
	check(GameplayEffectClass); // Eğer bir etkisi olmazsa çöksün
	// efekt bağlamı
	FGameplayEffectContextHandle EffectContextHandle = TargetASC->MakeEffectContext();
	// bu etkiye ne sebep oldu? (kaynak nesne)
	EffectContextHandle.AddSourceObject(this);
	// bir efekt spesifikasyonu elde etmek (yetenek sistemi bileşeni bunu yapabilecek yeteneğe sahiptir)
	// Aktör seviyesine göre az ya da çok güçlü
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectClass, ActorLevel, EffectContextHandle);
	// efektlerin uygulanması
	const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
	
	// oyun efekti sonsuz mu?
	const bool bIsInfinite = EffectSpecHandle.Data.Get()->Def.Get()->DurationPolicy == EGameplayEffectDurationType::Infinite;
	if (bIsInfinite && InfiniteEffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
	{
		ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
	}
}

void AAuraEffectActor::OnOverlap(AActor* TargetActor)
{
	// anlık etkinin hedefe uygulanması
	if (InstantEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, InstanteGameplayEffectClass);
	}

	// süreli etkinin hedefe uygulanması
	if (DurationEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, DurationGameplayEffectClass);
	}

	// sonsuz etkinin hedefe uygulanması
	if (InfiniteEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, InfiniteGameplayEffectClass);
	}
}

void AAuraEffectActor::OnEndOverlap(AActor* TargetActor)
{
	// anlık etkinin hedefe uygulanması
	if (InstantEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, InstanteGameplayEffectClass);
	}

	// süreli etkinin hedefe uygulanması
	if (DurationEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, DurationGameplayEffectClass);
	}

	// sonsuz etkinin hedefe uygulanması
	if (InfiniteEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, InfiniteGameplayEffectClass);
	}

	// sonsuz etkinin kaldırılması
	if(InfiniteEffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
	{
		UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
		if(!IsValid(TargetASC)) return;

		// bir oyun efekti kaldırıldığında, Handle'ı bu diziye ekleyeceğim
		TArray<FActiveGameplayEffectHandle> HandlesToRemove;
		for (TTuple<FActiveGameplayEffectHandle, UAbilitySystemComponent*> HandlePair: ActiveEffectHandles)
		{
			if (TargetASC == HandlePair.Value)
			{
				// oyun etkisini ortadan kaldırır
				TargetASC->RemoveActiveGameplayEffect(HandlePair.Key, 1);
				HandlesToRemove.Add(HandlePair.Key);
			}
		}
		for (FActiveGameplayEffectHandle& Handle : HandlesToRemove)
		{
			// aktif oyun efektinin, yetenek sistemi bileşeninden kaldırılmasıyla sonuçlanır
			ActiveEffectHandles.FindAndRemoveChecked(Handle);
		}
	}
}

