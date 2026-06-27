// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AuraAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "Player/AuraPlayerState.h"

UOverlayWidgetController* UAuraAbilitySystemLibrary::GetOverlayWidgetController(
	const UObject* WorldContextObject)
{
	FWidgetControllerParams Params;
	AAuraHUD* AuraHUD = nullptr;

	if (MakeWidgetControllerParams(
		WorldContextObject,
		Params,
		AuraHUD))
	{
		return AuraHUD->GetOverlayWidgetController(Params);
	}

	return nullptr;
}

UAttributeMenuWidgetController* UAuraAbilitySystemLibrary::GetAttributeMenuWidgetController(
	const UObject* WorldContextObject)
{
	FWidgetControllerParams Params;
	AAuraHUD* AuraHUD = nullptr;

	if (MakeWidgetControllerParams(
		WorldContextObject,
		Params,
		AuraHUD))
	{
		return AuraHUD->GetAttributeMenuWidgetController(Params);
	}
	return nullptr;
}

TArray<FGameplayTag> UAuraAbilitySystemLibrary::GetAttributeTagsByCategory(EAttributeCategory Category)
{
	return FAuraGameplayTags::Get().GetAttributeTagsByCategory(Category);
}

TArray<FGameplayTag> UAuraAbilitySystemLibrary::GetAllAttributeTags()
{
	return FAuraGameplayTags::Get().GetAllAttributeTags();
}


bool UAuraAbilitySystemLibrary::MakeWidgetControllerParams(
	const UObject* WorldContextObject, FWidgetControllerParams& OutParams, AAuraHUD*& OutAuraHUD)
{
	APlayerController* PC =
		UGameplayStatics::GetPlayerController(WorldContextObject, 0);
	if (!PC)
	{
		return false;
	}

	OutAuraHUD = Cast<AAuraHUD>(PC->GetHUD());
	if (!OutAuraHUD)
	{
		return false;
	}

	AAuraPlayerState* PS = PC->GetPlayerState<AAuraPlayerState>();
	if (!PS)
	{
		return false;
	}
	UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
	UAttributeSet* AS = PS->GetAttributeSet();

	OutParams = FWidgetControllerParams(
		PC,
		PS,
		ASC,
		AS);
	return true;
}




