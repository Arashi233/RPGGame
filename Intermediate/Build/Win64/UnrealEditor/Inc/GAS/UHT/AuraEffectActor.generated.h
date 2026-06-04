// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"

#ifdef GAS_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define GAS_AuraEffectActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UGameplayEffect;

// ********** Begin Class AAuraEffectActor *********************************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execApplyEffectToTarget);


struct Z_Construct_UClass_AAuraEffectActor_Statics;
GAS_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct ::Z_Construct_UClass_AAuraEffectActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_AAuraEffectActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_AAuraEffectActor_NoRegister) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraEffectActor(AAuraEffectActor&&) = delete; \
	AAuraEffectActor(const AAuraEffectActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_28_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraEffectActor;

// ********** End Class AAuraEffectActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_Actor_AuraEffectActor_h

// ********** Begin Enum EEffectApplicationPolicy **************************************************
#define FOREACH_ENUM_EEFFECTAPPLICATIONPOLICY(op) \
	op(EEffectApplicationPolicy::ApplyOnOverlap) \
	op(EEffectApplicationPolicy::ApplyOnEndOverlap) \
	op(EEffectApplicationPolicy::DoNotApply) 

enum class EEffectApplicationPolicy : uint8;
template<> struct TIsUEnumClass<EEffectApplicationPolicy> { enum { Value = true }; };
template<> GAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EEffectApplicationPolicy>();
// ********** End Enum EEffectApplicationPolicy ****************************************************

// ********** Begin Enum EEffectRemovalPolicy ******************************************************
#define FOREACH_ENUM_EEFFECTREMOVALPOLICY(op) \
	op(EEffectRemovalPolicy::RemoveOnEndOverlap) \
	op(EEffectRemovalPolicy::DoNotRemove) 

enum class EEffectRemovalPolicy : uint8;
template<> struct TIsUEnumClass<EEffectRemovalPolicy> { enum { Value = true }; };
template<> GAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EEffectRemovalPolicy>();
// ********** End Enum EEffectRemovalPolicy ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
