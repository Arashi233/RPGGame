// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Data/AttributeInfo.h"
#include "Engine/Engine.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag & AttributeTag, bool bLogNotFound)const
{
	for(const FAuraAttributeInfo& Info : AttributesInformation)
	{
		if(Info.AttributeTag.MatchesTagExact(AttributeTag))
		{
			return Info;
		}
	}
	if(bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Attribute with tag [%s] not found in AttributeInfo data asset [%s]"), *AttributeTag.ToString(),*GetNameSafe(this));
	}

	return FAuraAttributeInfo();
}