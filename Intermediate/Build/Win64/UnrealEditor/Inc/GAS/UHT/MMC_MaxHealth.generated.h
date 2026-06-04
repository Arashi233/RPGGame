// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/MMC/MMC_MaxHealth.h"

#ifdef GAS_MMC_MaxHealth_generated_h
#error "MMC_MaxHealth.generated.h already included, missing '#pragma once' in MMC_MaxHealth.h"
#endif
#define GAS_MMC_MaxHealth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMMC_MaxHealth ***********************************************************
struct Z_Construct_UClass_UMMC_MaxHealth_Statics;
GAS_API UClass* Z_Construct_UClass_UMMC_MaxHealth_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMC_MaxHealth(); \
	friend struct ::Z_Construct_UClass_UMMC_MaxHealth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UMMC_MaxHealth_NoRegister(); \
public: \
	DECLARE_CLASS2(UMMC_MaxHealth, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UMMC_MaxHealth_NoRegister) \
	DECLARE_SERIALIZER(UMMC_MaxHealth)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMMC_MaxHealth(UMMC_MaxHealth&&) = delete; \
	UMMC_MaxHealth(const UMMC_MaxHealth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMC_MaxHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMC_MaxHealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMC_MaxHealth) \
	NO_API virtual ~UMMC_MaxHealth();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_12_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_15_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMMC_MaxHealth;

// ********** End Class UMMC_MaxHealth *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
