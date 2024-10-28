// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext; // girdi eşleme bağlamı
class UInputAction;			// giriş eylemi
struct FInputActionValue;
class IEnemyInterface;
class UAuraInputConfig;
class UAuraAbilitySystemComponent;
class USplineComponent;

/**
 *
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController(); // yapıcı
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext; // girdi eşleme bağlamı

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction; // giriş eylemi

	void Move(const FInputActionValue &InputActionValue);
	
	void CursorTrace(); // imlecin altını takip edecek

	// actor EnemyInterface uygular
	TScriptInterface<IEnemyInterface> LastActor; // son actor
	TScriptInterface<IEnemyInterface> ThisActor; // bu karedeki actor
	FHitResult CursorHit;

	// üç fonksiyona ihtiyacım var, üç geri aramaya ihtiyacım var. (etiket alır)
	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	// tuşlar ve etiketleri
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UAuraInputConfig> InputConfig;

	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AuraAbilitySystemComponent;

	UAuraAbilitySystemComponent* GetASC();

	// farenin sol düğmesini basılı tuttuğum sürece karakter imleci takip edecek.
	FVector CachedDestination = FVector::ZeroVector; // tıklanılan yer
	float FollowTime = 0.f; // tuşa basılma süresi
	float ShortPressThreshold = 0.5f; // kısa basma eşiği
	bool bAutoRunning = false; // kısa basma eşiğinden fazla ise true, hedefi takip ediyor mu?
	bool bTargeting = false; // düşmana mı tıklandı?
	
	// karakter koştuğu sürece hedefe yaklaşacak, hedefe ne kadar yaklaştı?
	UPROPERTY(EditDefaultsOnly)
	float AutoRunAcceptanceRadius = 50.f;

	// hedefe giden yol (spline)
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USplineComponent> Spline;

	// sol fare tuşu ile tıklanıp hemen bırakılan noktaya gidecek
	void AutoRun();
};