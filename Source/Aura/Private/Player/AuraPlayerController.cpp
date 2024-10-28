// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/AuraPlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AuraGameplayTags.h"
#include "EnhancedInputSubsystems.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "Components/SplineComponent.h"
#include "Input/AuraInputComponent.h"
#include "Interaction/EnemyInterface.h"

AAuraPlayerController::AAuraPlayerController() // yapıcı
{
    // bReplicates: çok oyunculu modda çoğaltma, sunucuda bir varlığın değişmesidir.
    // Sunucuda meydana gelen bu değişiklik, bağlı tüm istemcilere kopyalanacak veya gönderilecek
    // birden fazla makinede değişiklik yapılması
    // verileri sunucuda güncelleme ve bunu istemcilere gönderme
    bReplicates = true;

    // spline bileşenini oluşturdum
    Spline = CreateDefaultSubobject<USplineComponent>("Spline");
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
    Super::PlayerTick(DeltaTime);
    
    // fare imleci IEnemyInterface uygulayan aktörün üzerindeyse vurgula
    CursorTrace();

    AutoRun();
}

void AAuraPlayerController::AutoRun()
{
    if (!bAutoRunning) return;
    
    // sol fare tuşu ile tıklanıp hemen bırakılan noktaya gidecek 
    if (APawn* ControlledPawn = GetPawn())
    {
        // LocationOnSpline(vektör), spline üzerinde kontrol edilen piyona en yakın konumdur.
        const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(ControlledPawn->GetActorLocation(), ESplineCoordinateSpace::World);
        // spline üzerinde LocationOnSpline konuma karşılık gelen yön
        const FVector Direction = Spline->FindDirectionClosestToWorldLocation(LocationOnSpline, ESplineCoordinateSpace::World);
        // kontrollü piyonu Direction yönünde hareket ettireceğim
        ControlledPawn->AddMovementInput(Direction);

        // başlangıç - bitiş = bitişe olan uzaklık
        const float DistanceToDestination = (LocationOnSpline - CachedDestination).Length();
        if (DistanceToDestination <= AutoRunAcceptanceRadius)
        {
            // varış noktasına geldi, duracak
            bAutoRunning = false;
        }
    }
}

// imlecin altındaki isabet sonucunu almayı içerir
void AAuraPlayerController::CursorTrace()
{
    // FHitResult CursorHit;
    GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
    if (!CursorHit.bBlockingHit) return;

    LastActor = ThisActor; // her karede son aktörü bu aktöre eşitleyeceğim
    ThisActor = CursorHit.GetActor(); // şu an vurulan aktör

    if (LastActor != ThisActor)
    {
        // son aktör, bu aktörden farklıysa
        if (LastActor) LastActor->UnHighlightActor();
        if (ThisActor) ThisActor->HighlightActor();
    }
}

void AAuraPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
    // farenin sol tuşuna mı basıldı?
    if (InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
    {
        // oyuncu düşmana tıkladıysa true
        bTargeting = ThisActor ? true : false;
        bAutoRunning = false; // henüz basılma süresi bilinmiyor
    }
}

void AAuraPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
    // farenin sol tuşu bırakılmadıysa
    if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
    {
        // giriş etiketi sol fare düğmesi değilse yetenek etkinleştirilir.
        if (GetASC()) GetASC()->AbilityInputTagReleased(InputTag);

        return; // aşağıdaki kod ile ikinci kez etkinleştirmemek için
    }

    if(bTargeting)
    {
        // farenin sol tuşu düşmanda bırakıldıysa yetenek etkinleştirilir.
        if (GetASC()) GetASC()->AbilityInputTagReleased(InputTag);
    }
    else // sol tuş düşman dışında farklı bir yerde bırakıldıysa 
    {
        const APawn* ControlledPawn = GetPawn();
        // basılma süresi yok denecek kadar kısaysa (sol tuş hemen bırakıldıysa)
        if (FollowTime <= ShortPressThreshold && ControlledPawn)
        {
            // başlangıç, bitiş
            if (UNavigationPath* NavPath  = UNavigationSystemV1::FindPathToLocationSynchronously(this, ControlledPawn->GetActorLocation(), CachedDestination))
            {
                Spline->ClearSplinePoints();
                for(const FVector& PointLoc : NavPath->PathPoints)
                {
                    // Takip edilecek noktalardan (NavPath->PathPoints) oluşan bir gezinme yolu oluşturacağım
                    Spline->AddSplinePoint(PointLoc, ESplineCoordinateSpace::World);
                    // DrawDebugSphere(GetWorld(), PointLoc, 8.f, 8, FColor::Purple, false, 5.f);
                }
                // eleman sayısı - 1: dizideki son elemanı verir.
                CachedDestination = NavPath->PathPoints[NavPath->PathPoints.Num() - 1];
                bAutoRunning = true; // tıklanıp hemen bırakılan noktaya gidecek
            }
        }
        // tuş bırakıldı, artık hedef yok, basılma süresi sıfırlandı, hareket etmeyecek
        FollowTime = 0.f;
        bTargeting = false;
    }
}

void AAuraPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
    // farenin sol tuşuna basılı tutulmuyorsa
    if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
    {
        // giriş etiketi sol fare düğmesi değilse yetenek etkinleştirilir.
        if (GetASC()) GetASC()->AbilityInputTagHeld(InputTag);

        return; // aşağıdaki kod ile ikinci kez etkinleştirmemek için
    }
    
    if(bTargeting)
    {
        // farenin sol tuşu ile düşmana tıklandıysa yetenek etkinleştirilir.
        if (GetASC()) GetASC()->AbilityInputTagHeld(InputTag);
    }
    else // farenin sol tuşu ile düşmana tıklanılmadıysa
    {
        // farenin sol tuşuna bastığı süre
        FollowTime += GetWorld()->GetDeltaSeconds();

        // CursorHit: imlecin altındaki isabet sonucu
        if (CursorHit.bBlockingHit)
        {
            // tıklanılan yer, karakterin gideceği yer
            CachedDestination = CursorHit.ImpactPoint;
        }

        if (APawn* ControlledPawn = GetPawn())
        {
            // karakterin gideceği yön = (gidilecek konum - karakterin konumu) normalize edilir
            const FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
            ControlledPawn->AddMovementInput(WorldDirection); // karakter tıklanılan yere doğru ilerler
            // Sol fare düğmesiyle düşman dışında bir yere basılı tutuluyorsa karakter o yere doğru ilerler
        }
    }
}

UAuraAbilitySystemComponent* AAuraPlayerController::GetASC()
{
    if (AuraAbilitySystemComponent == nullptr)
    {
       AuraAbilitySystemComponent = Cast<UAuraAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
    }
    return AuraAbilitySystemComponent;
}

// girdi eşleme bağlamı AuraPlayerController'a bağlanacak
void AAuraPlayerController::BeginPlay()
{
    Super::BeginPlay();
    check(AuraContext);

    // eşleme bağlamı eklemek için çağrılacak alt sistem
    UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    if(Subsystem) // null değilse
    {
        // giriş eşleme bağlamı ekleme
        // Oyuncu denetleyicinin(AuraPlayerController) verileri alabilmesi için haritalama bağlamı eklenir
        Subsystem->AddMappingContext(AuraContext, 0); // bir giriş eşleme bağlamı var bu yüzden öncelik 0
    } 

    // girdi eşleme bağlamı ayarı
    bShowMouseCursor = true;                    // fare imlecini göster
    DefaultMouseCursor = EMouseCursor::Default; // fare imleci

    // klavyeden ve fareden girdi kullanabilir ve ayrıca kullanıcı arayüzünü etkilemek için de girdi kullanabilir
    FInputModeGameAndUI InputModeData; // giriş modu verileri
    // Görüntü alanı davranışını görüntülemek için
    InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock); // fare görüntü alanına kilitlenmesin
    InputModeData.SetHideCursorDuringCapture(false);                         // imleç görünüm alanına yakalanır yakalanmaz imleç gizlenmeyecek
    SetInputMode(InputModeData);                                             //  imleç ayarları yapılandırıldı ve artık alt sistem kuruldu
}

void AAuraPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // UEnhancedInputComponent(gelişmiş giriş bileşeni): AuraInputComponent
    UAuraInputComponent *AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);

    // giriş hareketini bağlayacağım
    // ETriggerEvent::Triggered girdi(MoveAction) tetiklendiği veya basılı tutulduğu sürece Move çağrılmaya devam edilecek
    // bu oynatıcı kontrol nesnesi olacak kullanıcı nesnesidir.
    AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);

    // yetenekler için (tuşlar ile fonksiyonlar birleştirilir)
    AuraInputComponent->BindAbilityActions(InputConfig, this, &ThisClass::AbilityInputTagPressed, &ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
}

// girdi eylemine dayalı olarak hareketi gerçekleştirecek bir Move fonksiyonu
void AAuraPlayerController::Move(const FInputActionValue &InputActionValue)
{
    // giriş eylemi değerini 2 boyutlu bir vektöre dönüştürdüm
    const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
    // rotasyon
    const FRotator Rotation = GetControlRotation();
    const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

    // yön vektörü
    const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
    const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

    // kontrol edilen pawn/piyon var mı?
    if (APawn *ControlledPawn = GetPawn<APawn>())
    {
        // W ve S tuşları ileri - geri
        ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
        // A ve D tuşları sağa - sola
        ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
    }
}


