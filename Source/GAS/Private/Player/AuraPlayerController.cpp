// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerController.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AuraGameplayTags.h"
#include "Components/SplineComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Input/AuraInputComponent.h"
#include "Interaction/EnemyInterface.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
}

void AAuraPlayerController::AbilityInputPressed(FGameplayTag InputTag)
{
	if (InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		bTargeting = ThisActor ? true : false;
		bAutoRunning = false;
	}
}

void AAuraPlayerController::AbilityInputReleased(FGameplayTag InputTag)
{
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		if (!GetASC())return;
		GetASC()->AbilityInputHeld(InputTag);
		return;
	}
	if (bTargeting)
	{
		if (!GetASC())return;
		GetASC()->AbilityInputHeld(InputTag);
	}
	else 
	{
		const APawn* ControlledPawn = GetPawn();
		if (FollowTime <= ShortPressThreshold && ControlledPawn)
		{
			if (UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(
				this, ControlledPawn->GetActorLocation(), CacheDestination))
			{
				Spline->ClearSplinePoints();
				for (const FVector& PathLoc: NavPath->PathPoints)
				{
					Spline->AddSplinePoint(PathLoc, ESplineCoordinateSpace::World);
				}
				if (NavPath->PathPoints.Num() > 0)CacheDestination = NavPath->PathPoints.Last();
				bAutoRunning = true;
			}
		}
		FollowTime = 0.f;
		bTargeting = false;
	}
}

void AAuraPlayerController::AbilityInputHeld(FGameplayTag InputTag)
{
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		if (!GetASC())return;
		GetASC()->AbilityInputHeld(InputTag);
		return;
	}
	if(bTargeting)
	{
		if (!GetASC())return;
		GetASC()->AbilityInputHeld(InputTag);
	}
	else
	{
		FollowTime += GetWorld()->GetDeltaSeconds();
		if (CursorHit.bBlockingHit)
		{
			CacheDestination = CursorHit.ImpactPoint;
		}
		if (APawn* ControlledPawn = GetPawn())
		{
			const FVector WorldDirection = (CacheDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
			ControlledPawn->AddMovementInput(WorldDirection);
		}
	}	
}

UAuraAbilitySystemComponent* AAuraPlayerController::GetASC()
{
	if (!AuraAbilitySystemComponent)
	{
		AuraAbilitySystemComponent = Cast<UAuraAbilitySystemComponent>(
			UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AuraAbilitySystemComponent;
}

void AAuraPlayerController::AutoRun()
{
	if (!bAutoRunning)return;
	if (APawn* ControlledPawn = GetPawn())
	{
		const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(
			ControlledPawn->GetActorLocation(), ESplineCoordinateSpace::World);
		const FVector Direction = Spline->FindDirectionClosestToWorldLocation(
			LocationOnSpline, ESplineCoordinateSpace::World);
		ControlledPawn->AddMovementInput(Direction);
		const float DistanceToDestination = (LocationOnSpline - CacheDestination).Length();
		if (DistanceToDestination <= AutoRunAcceptanceRadius)
		{
			bAutoRunning = false;
		}
	}
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (Subsystem) {
		Subsystem->AddMappingContext(AuraContext, 0);
	}

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UAuraInputComponent* AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);
	AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);
	AuraInputComponent->BindAbilityActions(InputConfig, this, 
		&ThisClass::AbilityInputPressed, 
		&ThisClass::AbilityInputReleased,
		&ThisClass::AbilityInputHeld);
	
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)
{
	if (bAutoRunning)bAutoRunning = false;
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	 
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	if (APawn* ControllerPawn = GetPawn<APawn>()) {
		ControllerPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControllerPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}
void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	CursorTrace();
	AutoRun();
}
void AAuraPlayerController::CursorTrace()
{
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit)return;

	LastActor = ThisActor;
	ThisActor = CursorHit.GetActor();
	if (LastActor != ThisActor)//B,C,E
	{
		if (LastActor)//C
		{
			LastActor->UnHighLight();
		}
		if (ThisActor)//B
		{
			ThisActor->HighLight();
		}
	}
}

