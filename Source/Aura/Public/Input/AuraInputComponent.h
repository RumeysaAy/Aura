// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuraInputConfig.h"
#include "EnhancedInputComponent.h"
#include "AuraInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	template<class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
	void BindAbilityActions(const UAuraInputConfig* InputConfig, UserClass* Object,
		PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc);
	
};

template <class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
void UAuraInputComponent::BindAbilityActions(const UAuraInputConfig* InputConfig, UserClass* Object,
	PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc)
{
	check(InputConfig);

	// AbilityInputActions içerisindeki struct'ları gezeceğim
	for(const FAuraInputAction& Action: InputConfig->AbilityInputActions)
	{
		// Action(struct) içerisindeki InputAction'a (IA_LMB, IA_RMB, IA_1, IA_2...)
		// işlevleri (PressedFuncType, ReleasedFuncType, HeldFuncType) bağlayacağım
		if (Action.InputAction && Action.InputTag.IsValid())
		{
			/* işlevleri bağlama eylemini kullanarak bağlayacağım */
			
			if (PressedFunc)
			{
				// ETriggerEvent::Started, bir girişe basıldığı anda bağlayacağımız bu işlevin geri çağrılması anlamına gelir.
				// başlatılır başlatılmaz yalnızca bir kez çağrılacaktır.
				BindAction(Action.InputAction, ETriggerEvent::Started, Object, PressedFunc, Action.InputTag);
			}

			if (ReleasedFunc)
			{
				// ETriggerEvent::Completed sayesinde tuşu(InputAction) bıraktığı anda ReleasedFunc çağrılır.
				// ETriggerEvent::Completed, girişi basılı tutmayı bıraktığımızda geri aramamızın çağrılacağı anlamına gelir.
				BindAction(Action.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag);
			}
			
			if (HeldFunc)
			{
				// belirli bir eylemle (Action.InputAction) ilişkili herhangi bir giriş etiketi (Action.InputTag),
				// geri çağırma işlemine (HeldFunc) aktarılacaktır.
				BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, HeldFunc, Action.InputTag);
				// Belirli bir girişi (InputAction) basılı tuttuğumuz sürece, HeldFunc geri çağrılır.
				// Giriş tutulduğu sürece her karede (ETriggerEvent::Triggered) çağrılacak.
			}
		}
	}
}

/*
 * BindAbilityActions fonksiyona sahibiz, onu çağırdığımızda bir giriş yapılandırma verisi varlığını (UAuraInputConfig) iletebiliriz. Bir kullanıcı nesnesini (Object) ve işlevlere üç işlevi (PressedFunc, ReleasedFunc, HeldFunc) aktarabiliriz.
 * PressedFunc, ReleasedFunc ve HeldFunc geri aramalar olacak ve giriş etiketlerini alabilirler, giriş için oyun etiketlerini (Action.InputTag) alabilirler.
 * BindAction sayesinde, PressedFunc, ReleasedFunc ve HeldFunc, girdi eylemlerinin (Action.InputAction) her birine bağlanacak.
 * AuraPlayerController sınıfında BindAbilityActions işlevini çağıracağım
 */
