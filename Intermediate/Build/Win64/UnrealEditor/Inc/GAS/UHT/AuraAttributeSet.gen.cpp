// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GAS_API UClass* Z_Construct_UClass_UAuraAttributeSet();
GAS_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
GAS_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEffectProperties *************************************************
struct Z_Construct_UScriptStruct_FEffectProperties_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEffectProperties); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEffectProperties); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEffectProperties constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEffectProperties constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEffectProperties_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_GAS(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton;
	}

// ********** Begin ScriptStruct FEffectProperties Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEffectProperties Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
	nullptr,
	&NewStructOps,
	"EffectProperties",
	Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
	sizeof(FEffectProperties),
	alignof(FEffectProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton);
}
// ********** End ScriptStruct FEffectProperties ***************************************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Armor ***********************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics
{
	struct AuraAttributeSet_eventOnRep_Armor_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Armor constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Armor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Armor Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Armor_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Armor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Armor", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Armor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Armor *************************************

// ********** Begin Class UAuraAttributeSet Function OnRep_ArmorPenetration ************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics
{
	struct AuraAttributeSet_eventOnRep_ArmorPenetration_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ArmorPenetration constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ArmorPenetration constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ArmorPenetration Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ArmorPenetration_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers) < 2048);
// ********** End Function OnRep_ArmorPenetration Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ArmorPenetration", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ArmorPenetration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ArmorPenetration(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_ArmorPenetration **************************

// ********** Begin Class UAuraAttributeSet Function OnRep_BlockChance *****************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics
{
	struct AuraAttributeSet_eventOnRep_BlockChance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_BlockChance constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_BlockChance constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_BlockChance Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_BlockChance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
// ********** End Function OnRep_BlockChance Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_BlockChance", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_BlockChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockChance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_BlockChance *******************************

// ********** Begin Class UAuraAttributeSet Function OnRep_CastSpeed *******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics
{
	struct AuraAttributeSet_eventOnRep_CastSpeed_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CastSpeed constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CastSpeed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CastSpeed Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CastSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CastSpeed Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CastSpeed", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::AuraAttributeSet_eventOnRep_CastSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::AuraAttributeSet_eventOnRep_CastSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CastSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CastSpeed(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_CastSpeed *********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_CritChance ******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics
{
	struct AuraAttributeSet_eventOnRep_CritChance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CritChance constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CritChance constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CritChance Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CritChance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CritChance Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CritChance", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::AuraAttributeSet_eventOnRep_CritChance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::AuraAttributeSet_eventOnRep_CritChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CritChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritChance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_CritChance ********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_CritDamage ******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics
{
	struct AuraAttributeSet_eventOnRep_CritDamage_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CritDamage constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CritDamage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CritDamage Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CritDamage_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CritDamage Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CritDamage", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::AuraAttributeSet_eventOnRep_CritDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::AuraAttributeSet_eventOnRep_CritDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CritDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritDamage(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_CritDamage ********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_CritResistance **************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics
{
	struct AuraAttributeSet_eventOnRep_CritResistance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CritResistance constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CritResistance constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CritResistance Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CritResistance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CritResistance Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CritResistance", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::AuraAttributeSet_eventOnRep_CritResistance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::AuraAttributeSet_eventOnRep_CritResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CritResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritResistance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_CritResistance ****************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Health **********************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics
{
	struct AuraAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Vital Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Vital Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Health constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Health constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Health Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Health Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Health", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Health ************************************

// ********** Begin Class UAuraAttributeSet Function OnRep_HealthRegen *****************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics
{
	struct AuraAttributeSet_eventOnRep_HealthRegen_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_HealthRegen constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_HealthRegen constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_HealthRegen Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_HealthRegen_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers) < 2048);
// ********** End Function OnRep_HealthRegen Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_HealthRegen", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::AuraAttributeSet_eventOnRep_HealthRegen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::AuraAttributeSet_eventOnRep_HealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_HealthRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegen(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_HealthRegen *******************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Intelligence ****************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics
{
	struct AuraAttributeSet_eventOnRep_Intelligence_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Intelligence constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Intelligence constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Intelligence Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Intelligence_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Intelligence Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Intelligence", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Intelligence)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intelligence(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Intelligence ******************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Mana ************************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics
{
	struct AuraAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Mana constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Mana constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Mana Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Mana Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Mana", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Mana **************************************

// ********** Begin Class UAuraAttributeSet Function OnRep_ManaRegen *******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics
{
	struct AuraAttributeSet_eventOnRep_ManaRegen_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ManaRegen constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ManaRegen constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ManaRegen Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ManaRegen_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers) < 2048);
// ********** End Function OnRep_ManaRegen Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ManaRegen", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::AuraAttributeSet_eventOnRep_ManaRegen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::AuraAttributeSet_eventOnRep_ManaRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ManaRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManaRegen(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_ManaRegen *********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_MaxHealth *******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics
{
	struct AuraAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Secondary Attributes \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Secondary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxHealth constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxHealth constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxHealth Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxHealth Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxHealth", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_MaxHealth *********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_MaxMana *********************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics
{
	struct AuraAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxMana constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxMana constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxMana Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxMana Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxMana", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_MaxMana ***********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_MoveSpeed *******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics
{
	struct AuraAttributeSet_eventOnRep_MoveSpeed_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MoveSpeed constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MoveSpeed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MoveSpeed Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MoveSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MoveSpeed Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MoveSpeed", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::AuraAttributeSet_eventOnRep_MoveSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::AuraAttributeSet_eventOnRep_MoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MoveSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_MoveSpeed *********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Resilience ******************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics
{
	struct AuraAttributeSet_eventOnRep_Resilience_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Resilience constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Resilience constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Resilience Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Resilience_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Resilience Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Resilience", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::AuraAttributeSet_eventOnRep_Resilience_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::AuraAttributeSet_eventOnRep_Resilience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Resilience)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Resilience(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Resilience ********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Strength ********************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics
{
	struct AuraAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Primary Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Primary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Strength constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Strength constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Strength Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Strength_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Strength Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Strength", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Strength **********************************

// ********** Begin Class UAuraAttributeSet Function OnRep_Vigor ***********************************
struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics
{
	struct AuraAttributeSet_eventOnRep_Vigor_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Vigor constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Vigor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Vigor Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Vigor_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Vigor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Vigor", 	Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::AuraAttributeSet_eventOnRep_Vigor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::AuraAttributeSet_eventOnRep_Vigor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Vigor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Vigor(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// ********** End Class UAuraAttributeSet Function OnRep_Vigor *************************************

// ********** Begin Class UAuraAttributeSet ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraAttributeSet;
UClass* UAuraAttributeSet::GetPrivateStaticClass()
{
	using TClass = UAuraAttributeSet;
	if (!Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AuraAttributeSet"),
			Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton,
			StaticRegisterNativesUAuraAttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
{
	return UAuraAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Primary Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Primary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Vital Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Vital Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xe6\x8a\xa4\xe7\x94\xb2\xef\xbc\x8c\xe6\x8a\xa4\xe7\x94\xb2\xe7\xa9\xbf\xe9\x80\x8f\xef\xbc\x8c\xe6\xa0\xbc\xe6\x8c\xa1\xe5\x87\xa0\xe7\x8e\x87\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe6\x8a\x97\xe6\x80\xa7\xef\xbc\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe7\x94\x9f\xe5\x91\xbd\xe6\x81\xa2\xe5\xa4\x8d\xef\xbc\x8c\xe6\xb3\x95\xe5\x8a\x9b\xe5\x9b\x9e\xe5\xa4\x8d\xef\xbc\x8c\xe6\x96\xbd\xe6\xb3\x95\xe9\x80\x9f\xe5\xba\xa6\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe6\x8a\xa4\xe7\x94\xb2\xef\xbc\x8c\xe6\x8a\xa4\xe7\x94\xb2\xe7\xa9\xbf\xe9\x80\x8f\xef\xbc\x8c\xe6\xa0\xbc\xe6\x8c\xa1\xe5\x87\xa0\xe7\x8e\x87\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xef\xbc\x8c\xe6\x9a\xb4\xe5\x87\xbb\xe6\x8a\x97\xe6\x80\xa7\xef\xbc\x8c\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe7\x94\x9f\xe5\x91\xbd\xe6\x81\xa2\xe5\xa4\x8d\xef\xbc\x8c\xe6\xb3\x95\xe5\x8a\x9b\xe5\x9b\x9e\xe5\xa4\x8d\xef\xbc\x8c\xe6\x96\xbd\xe6\xb3\x95\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritDamage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritResistance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegen_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegen_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastSpeed_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAuraAttributeSet constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vigor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAuraAttributeSet constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_Armor"), .Pointer = &UAuraAttributeSet::execOnRep_Armor },
		{ .NameUTF8 = UTF8TEXT("OnRep_ArmorPenetration"), .Pointer = &UAuraAttributeSet::execOnRep_ArmorPenetration },
		{ .NameUTF8 = UTF8TEXT("OnRep_BlockChance"), .Pointer = &UAuraAttributeSet::execOnRep_BlockChance },
		{ .NameUTF8 = UTF8TEXT("OnRep_CastSpeed"), .Pointer = &UAuraAttributeSet::execOnRep_CastSpeed },
		{ .NameUTF8 = UTF8TEXT("OnRep_CritChance"), .Pointer = &UAuraAttributeSet::execOnRep_CritChance },
		{ .NameUTF8 = UTF8TEXT("OnRep_CritDamage"), .Pointer = &UAuraAttributeSet::execOnRep_CritDamage },
		{ .NameUTF8 = UTF8TEXT("OnRep_CritResistance"), .Pointer = &UAuraAttributeSet::execOnRep_CritResistance },
		{ .NameUTF8 = UTF8TEXT("OnRep_Health"), .Pointer = &UAuraAttributeSet::execOnRep_Health },
		{ .NameUTF8 = UTF8TEXT("OnRep_HealthRegen"), .Pointer = &UAuraAttributeSet::execOnRep_HealthRegen },
		{ .NameUTF8 = UTF8TEXT("OnRep_Intelligence"), .Pointer = &UAuraAttributeSet::execOnRep_Intelligence },
		{ .NameUTF8 = UTF8TEXT("OnRep_Mana"), .Pointer = &UAuraAttributeSet::execOnRep_Mana },
		{ .NameUTF8 = UTF8TEXT("OnRep_ManaRegen"), .Pointer = &UAuraAttributeSet::execOnRep_ManaRegen },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxHealth"), .Pointer = &UAuraAttributeSet::execOnRep_MaxHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxMana"), .Pointer = &UAuraAttributeSet::execOnRep_MaxMana },
		{ .NameUTF8 = UTF8TEXT("OnRep_MoveSpeed"), .Pointer = &UAuraAttributeSet::execOnRep_MoveSpeed },
		{ .NameUTF8 = UTF8TEXT("OnRep_Resilience"), .Pointer = &UAuraAttributeSet::execOnRep_Resilience },
		{ .NameUTF8 = UTF8TEXT("OnRep_Strength"), .Pointer = &UAuraAttributeSet::execOnRep_Strength },
		{ .NameUTF8 = UTF8TEXT("OnRep_Vigor"), .Pointer = &UAuraAttributeSet::execOnRep_Vigor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 2044278894
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration, "OnRep_ArmorPenetration" }, // 4031083928
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 4012259946
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CastSpeed, "OnRep_CastSpeed" }, // 4109612229
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritChance, "OnRep_CritChance" }, // 414936452
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritDamage, "OnRep_CritDamage" }, // 2633762607
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CritResistance, "OnRep_CritResistance" }, // 1940532112
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health, "OnRep_Health" }, // 3770228060
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen, "OnRep_HealthRegen" }, // 2409066578
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 2331697829
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2466572290
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen, "OnRep_ManaRegen" }, // 986349668
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 620094854
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 1639276343
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 3443961378
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Resilience, "OnRep_Resilience" }, // 3641797099
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 3621577677
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vigor, "OnRep_Vigor" }, // 700366636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAuraAttributeSet_Statics

// ********** Begin Class UAuraAttributeSet Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience = { "Resilience", "OnRep_Resilience", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Resilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resilience_MetaData), NewProp_Resilience_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor = { "Vigor", "OnRep_Vigor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Vigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", "OnRep_ArmorPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorPenetration_MetaData), NewProp_ArmorPenetration_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritChance = { "CritChance", "OnRep_CritChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CritChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritChance_MetaData), NewProp_CritChance_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritDamage = { "CritDamage", "OnRep_CritDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CritDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritDamage_MetaData), NewProp_CritDamage_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritResistance = { "CritResistance", "OnRep_CritResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CritResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritResistance_MetaData), NewProp_CritResistance_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen = { "HealthRegen", "OnRep_HealthRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, HealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegen_MetaData), NewProp_HealthRegen_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen = { "ManaRegen", "OnRep_ManaRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegen_MetaData), NewProp_ManaRegen_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CastSpeed = { "CastSpeed", "OnRep_CastSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CastSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastSpeed_MetaData), NewProp_CastSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Resilience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CritResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CastSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UAuraAttributeSet Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
	&UAuraAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams)
};
void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
{
	UClass* Class = UAuraAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAuraAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAuraAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UAuraAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Strength(TEXT("Strength"));
	static FName Name_Resilience(TEXT("Resilience"));
	static FName Name_Intelligence(TEXT("Intelligence"));
	static FName Name_Vigor(TEXT("Vigor"));
	static FName Name_Health(TEXT("Health"));
	static FName Name_Mana(TEXT("Mana"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_MaxMana(TEXT("MaxMana"));
	static FName Name_Armor(TEXT("Armor"));
	static FName Name_ArmorPenetration(TEXT("ArmorPenetration"));
	static FName Name_BlockChance(TEXT("BlockChance"));
	static FName Name_CritChance(TEXT("CritChance"));
	static FName Name_CritDamage(TEXT("CritDamage"));
	static FName Name_CritResistance(TEXT("CritResistance"));
	static FName Name_MoveSpeed(TEXT("MoveSpeed"));
	static FName Name_HealthRegen(TEXT("HealthRegen"));
	static FName Name_ManaRegen(TEXT("ManaRegen"));
	static FName Name_CastSpeed(TEXT("CastSpeed"));
	const bool bIsValid = true
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Resilience == ClassReps[(int32)ENetFields_Private::Resilience].Property->GetFName()
		&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
		&& Name_Vigor == ClassReps[(int32)ENetFields_Private::Vigor].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
		&& Name_ArmorPenetration == ClassReps[(int32)ENetFields_Private::ArmorPenetration].Property->GetFName()
		&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
		&& Name_CritChance == ClassReps[(int32)ENetFields_Private::CritChance].Property->GetFName()
		&& Name_CritDamage == ClassReps[(int32)ENetFields_Private::CritDamage].Property->GetFName()
		&& Name_CritResistance == ClassReps[(int32)ENetFields_Private::CritResistance].Property->GetFName()
		&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName()
		&& Name_HealthRegen == ClassReps[(int32)ENetFields_Private::HealthRegen].Property->GetFName()
		&& Name_ManaRegen == ClassReps[(int32)ENetFields_Private::ManaRegen].Property->GetFName()
		&& Name_CastSpeed == ClassReps[(int32)ENetFields_Private::CastSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuraAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAuraAttributeSet);
UAuraAttributeSet::~UAuraAttributeSet() {}
// ********** End Class UAuraAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"),&Z_Registration_Info_UScriptStruct_FEffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 2603154481U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 1823032149U) },
	};
}; // Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_846930511{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h__Script_GAS_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
