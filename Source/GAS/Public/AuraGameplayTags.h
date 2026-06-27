// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"


/**
 * AuraGameplayTags
 * Signleton containing native Gameplay Tags
 */
UENUM(BlueprintType)
enum class EAttributeCategory : uint8
{
	Primary		UMETA(DisplayName = "Primary"),
	Secondary	UMETA(DisplayName = "Secondary"),
};

struct FAuraGameplayTags
{
public:
	TMap<FGameplayTag, EAttributeCategory> AttributeCategories;
	TArray<FGameplayTag> GetAllAttributeTags() const;
	TArray<FGameplayTag> GetAttributeTagsByCategory(
		EAttributeCategory Category) const;

	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();
	/*
	 * Primary Attributes
	 * 
	 */
	FGameplayTag Attribute_Primary_Strength;
	FGameplayTag Attribute_Primary_Resilience;
	FGameplayTag Attribute_Primary_Intelligence;
	FGameplayTag Attribute_Primary_Vigor;
	 /*
	  * Secondary Attributes
	  * 护甲，护甲穿透，格挡几率，暴击率，暴击伤害，暴击抗性，移动速度，生命恢复，法力回复，施法速度
	  */
	FGameplayTag Attribute_Secondary_Armor;
	FGameplayTag Attribute_Secondary_ArmorPenetration;
	FGameplayTag Attribute_Secondary_BlockChance;
	FGameplayTag Attribute_Secondary_CritChance;
	FGameplayTag Attribute_Secondary_CritDamage;
	FGameplayTag Attribute_Secondary_CritResistance;
	FGameplayTag Attribute_Secondary_MoveSpeed;
	FGameplayTag Attribute_Secondary_HealthRegen;
	FGameplayTag Attribute_Secondary_ManaRegen;
	FGameplayTag Attribute_Secondary_CastSpeed;

	FGameplayTag Attribute_Secondary_MaxHealth;
	FGameplayTag Attribute_Secondary_MaxMana;

	/*
	 *  InputAction Tags
	 */
	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_SpaceBar;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;
protected:
private:
	static FAuraGameplayTags GameplayTags;
};
