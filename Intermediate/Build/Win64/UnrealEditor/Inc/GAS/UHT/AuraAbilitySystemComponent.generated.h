// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAbilitySystemComponent.h"

#ifdef GAS_AuraAbilitySystemComponent_generated_h
#error "AuraAbilitySystemComponent.generated.h already included, missing '#pragma once' in AuraAbilitySystemComponent.h"
#endif
#define GAS_AuraAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAuraAbilitySystemComponent **********************************************
struct Z_Construct_UClass_UAuraAbilitySystemComponent_Statics;
GAS_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAbilitySystemComponent(); \
	friend struct ::Z_Construct_UClass_UAuraAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UAuraAbilitySystemComponent)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraAbilitySystemComponent(UAuraAbilitySystemComponent&&) = delete; \
	UAuraAbilitySystemComponent(const UAuraAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAbilitySystemComponent) \
	NO_API virtual ~UAuraAbilitySystemComponent();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_14_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraAbilitySystemComponent;

// ********** End Class UAuraAbilitySystemComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_AuraAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
