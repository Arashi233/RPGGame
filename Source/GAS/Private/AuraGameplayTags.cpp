// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"


FAuraGameplayTags FAuraGameplayTags::GameplayTags;

TArray<FGameplayTag> FAuraGameplayTags::GetAllAttributeTags() const
{
	TArray<FGameplayTag> Result;

	AttributeCategories.GetKeys(Result);

	return Result;
}

TArray<FGameplayTag> FAuraGameplayTags::GetAttributeTagsByCategory(EAttributeCategory Category) const
{
	TArray<FGameplayTag> Result;

	for (const auto& Pair : AttributeCategories)
	{
		if (Pair.Value == Category)
		{
			Result.Add(Pair.Key);
		}
	}

	return Result;
}

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Primary Attributes Tags
	 */

	GameplayTags.Attribute_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), TEXT("提高法术伤害和法力值"));
	GameplayTags.Attribute_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Resilience"), TEXT("提高物理防御"));
	GameplayTags.Attribute_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"), TEXT("提高物理伤害"));
	GameplayTags.Attribute_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), TEXT("提高生命值"));

	/*
	 * Secondary Attributes Tags
	 */

	GameplayTags.Attribute_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), TEXT("减少伤害，提高格挡"));
	GameplayTags.Attribute_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"), TEXT("无视部分护甲"));
	GameplayTags.Attribute_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"), TEXT("增加格挡几率"));
	GameplayTags.Attribute_Secondary_CastSpeed = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CastSpeed"), TEXT("提高施法速度"));
	GameplayTags.Attribute_Secondary_CritChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CritChance"), TEXT("增加暴击几率"));
	GameplayTags.Attribute_Secondary_CritDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CritDamage"), TEXT("增加暴击伤害"));
	GameplayTags.Attribute_Secondary_CritResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CritResistance"), TEXT("增加暴击抗性"));
	GameplayTags.Attribute_Secondary_HealthRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegen"), TEXT("增加生命回复速度"));
	GameplayTags.Attribute_Secondary_ManaRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegen"), TEXT("增加法力回复速度"));
	GameplayTags.Attribute_Secondary_MoveSpeed = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MoveSpeed"), TEXT("增加移动速度"));
	GameplayTags.Attribute_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"), TEXT("最大生命"));
	GameplayTags.Attribute_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"), TEXT("最大法力"));
	
	/*
	 * Input Action Tags
	 */

	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_LMB"), TEXT("左键"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_RMB"), TEXT("右键"));
	GameplayTags.InputTag_SpaceBar = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_SpaceBar"), TEXT("空格键"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_1"), TEXT("数字键1"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_2"), TEXT("数字键2"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_3"), TEXT("数字键3"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag_4"), TEXT("数字键4"));




	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Primary_Strength,
		EAttributeCategory::Primary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Primary_Intelligence,
		EAttributeCategory::Primary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Primary_Resilience,
		EAttributeCategory::Primary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Primary_Vigor,
		EAttributeCategory::Primary);

	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_Armor,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_ArmorPenetration,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_BlockChance,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_CastSpeed,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_CritChance,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_CritDamage,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_CritResistance,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_HealthRegen,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_ManaRegen,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_MoveSpeed,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_MaxHealth,
		EAttributeCategory::Secondary);
	GameplayTags.AttributeCategories.Add(
		GameplayTags.Attribute_Secondary_MaxMana,
		EAttributeCategory::Secondary);
}
