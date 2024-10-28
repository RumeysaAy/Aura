// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/AuraProjectileSpell.h"

#include "Actor/AuraProjectile.h"
#include "Interaction/CombatInterface.h"


void UAuraProjectileSpell::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo,
                                           const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	/*
	 * // Mermi(ProjectileClass) oluşturulacak. (ancak yalnızca sunucudaysa)
	 * const bool bIsServer = HasAuthority(&ActivationInfo); // adres
	 * if (!bIsServer) return;
	 */
}

void UAuraProjectileSpell::SpawnProjectile()
{
	// Mermi(ProjectileClass) oluşturulacak. (ancak yalnızca sunucudaysa)
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority(); // sunucuda mıyım?
	if (!bIsServer) return;

	// sunucudaysam Mermi(ProjectileClass) oluşturulacak.

	/* Avatar aktörü, bu yeteneğe sahip olan yetenek sistemi bileşeniyle ilişkilendirildiği sürece,
	o zaman savaş arayüzünü uyguladığı sürece o silah soketini alabilirim. */
	ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
	if (CombatInterface)
	{
		const FVector SocketLocation = CombatInterface->GetCombatSocketLocation();

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(SocketLocation);

		// TODO: Set the Projectile Rotation
		
		// sunucuda mermi(ProjectileClass) oluşturulacak (mermi kopyalanabilir bir sınıftır)
		AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>(
			ProjectileClass,
			SpawnTransform,
			GetOwningActorFromActorInfo(),
			Cast<APawn>(GetOwningActorFromActorInfo()),
			ESpawnActorCollisionHandlingMethod::AlwaysSpawn
			);

		// TODO: Give the Projectile a Gameplay Effect Spec for causing Damage.
		// Mermiye Hasar vermesi için bir Oynanış Etkisi Özelliği verin.

		// yumurtlamayı bitir
		Projectile->FinishSpawning(SpawnTransform); 
	}
}
