// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAttributeSet.h"

#ifdef GAS_AuraAttributeSet_generated_h
#error "AuraAttributeSet.generated.h already included, missing '#pragma once' in AuraAttributeSet.h"
#endif
#define GAS_AuraAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin ScriptStruct FEffectProperties *************************************************
struct Z_Construct_UScriptStruct_FEffectProperties_Statics;
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	GAS_API static class UScriptStruct* StaticStruct();


struct FEffectProperties;
// ********** End ScriptStruct FEffectProperties ***************************************************

// ********** Begin Class UAuraAttributeSet ********************************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CastSpeed); \
	DECLARE_FUNCTION(execOnRep_ManaRegen); \
	DECLARE_FUNCTION(execOnRep_HealthRegen); \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_CritResistance); \
	DECLARE_FUNCTION(execOnRep_CritDamage); \
	DECLARE_FUNCTION(execOnRep_CritChance); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_ArmorPenetration); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Vigor); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Resilience); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health);


struct Z_Construct_UClass_UAuraAttributeSet_Statics;
GAS_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAttributeSet(); \
	friend struct ::Z_Construct_UClass_UAuraAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UAuraAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UAuraAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UAuraAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Resilience, \
		Intelligence, \
		Vigor, \
		Health, \
		Mana, \
		MaxHealth, \
		MaxMana, \
		Armor, \
		ArmorPenetration, \
		BlockChance, \
		CritChance, \
		CritDamage, \
		CritResistance, \
		MoveSpeed, \
		HealthRegen, \
		ManaRegen, \
		CastSpeed, \
		NETFIELD_REP_END=CastSpeed	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UAuraAttributeSet) \
public:


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraAttributeSet(UAuraAttributeSet&&) = delete; \
	UAuraAttributeSet(const UAuraAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuraAttributeSet) \
	NO_API virtual ~UAuraAttributeSet();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_53_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraAttributeSet;

// ********** End Class UAuraAttributeSet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
