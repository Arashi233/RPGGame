// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "UI/HUD/AuraHUD.h"
#include "AuraGameplayTags.h"
#include "AuraAbilitySystemLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API UAuraAbilitySystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary")
	static UOverlayWidgetController* GetOverlayWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary")
	static UAttributeMenuWidgetController* GetAttributeMenuWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary")
	static TArray<FGameplayTag> GetAttributeTagsByCategory(
		EAttributeCategory Category);
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary")
	static TArray<FGameplayTag> GetAllAttributeTags();



	static bool MakeWidgetControllerParams(
		const UObject* WorldContextObject,
		FWidgetControllerParams& OutParams,
		AAuraHUD*& OutAuraHUD);
};
