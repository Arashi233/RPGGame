// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "AuraHUD.generated.h"

/**
 * 
 */
class UOverlayWidgetController;
class UAuraUserWidget;
class UAttributeSet;
class UAbilitySystemComponent;
struct FWidgetControllerParams;
UCLASS()
class GAS_API AAuraHUD : public AHUD
{
	GENERATED_BODY()
public:
	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);
	UOverlayWidgetController* CreateOverlayWidgetController(const FWidgetControllerParams& WCParams);
	UAttributeMenuWidgetController* GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams);
	UAttributeMenuWidgetController* CreateAttributeMenuWidgetController(const FWidgetControllerParams& WCParams);
	void InitializeOverlayWidgetController(const FWidgetControllerParams& WCParams);
	void InitializeAttributeMenuWidgetController(const FWidgetControllerParams& WCParams);
	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);
private:
	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;
	UPROPERTY()
	TObjectPtr<UOverlayWidgetController>OverlayWidgetController;
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;

	UPROPERTY()
	TObjectPtr<UAttributeMenuWidgetController> AttributeMenuWidgetController;
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UAttributeMenuWidgetController> AttributeMenuWidgetControllerClass;
protected:

};
