// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/AuraHUD.h"

#include "UI/Widget/AuraUserWidget.h"
#include "UI/WidgetController/OverlayWidgetController.h"

UOverlayWidgetController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		CreateOverlayWidgetController(WCParams);
	}
	return OverlayWidgetController;
}

UOverlayWidgetController* AAuraHUD::CreateOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetControllerClass == nullptr)
	{
		return nullptr;
	}

	OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
	InitializeOverlayWidgetController(WCParams);
	return OverlayWidgetController;
}

void AAuraHUD::InitializeOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		return;
	}
	OverlayWidgetController->SetWidgetControllerParams(WCParams);
	OverlayWidgetController->BindCallbacksToDependencies();
}

UAttributeMenuWidgetController* AAuraHUD::GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (AttributeMenuWidgetController == nullptr)
	{
		CreateAttributeMenuWidgetController(WCParams);
	}
	return AttributeMenuWidgetController;
}

UAttributeMenuWidgetController* AAuraHUD::CreateAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (AttributeMenuWidgetControllerClass == nullptr)
	{
		return nullptr;
	}
	AttributeMenuWidgetController = NewObject<UAttributeMenuWidgetController>(this, AttributeMenuWidgetControllerClass);
	InitializeAttributeMenuWidgetController(WCParams);
	return AttributeMenuWidgetController;
}


void AAuraHUD::InitializeAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if(AttributeMenuWidgetController == nullptr)
	{
		return;
	}
	AttributeMenuWidgetController->SetWidgetControllerParams(WCParams);
	AttributeMenuWidgetController->BindCallbacksToDependencies();
}

void AAuraHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(OverlayWidgetControllerClass, TEXT("OverlayWidgetControllerClass is nullptr in %s. Please fill the OverlayWidgetControllerClass in the Blueprint of %s"), *GetName(), *GetName());
	checkf(OverlayWidgetClass, TEXT("OverlayWidgetClass is nullptr in %s. Please fill the OverlayWidgetClass in the Blueprint of %s"), *GetName(), *GetName());
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<UAuraUserWidget>(Widget);
	
	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);

	OverlayWidget->SetWidgetController(WidgetController);
	WidgetController->BroadcastInitialValues();
	Widget->AddToViewport();
	UE_LOG(LogTemp, Warning, TEXT("OverlayWidgetControllerClass: %s"),
		*GetNameSafe(OverlayWidgetControllerClass));
}
