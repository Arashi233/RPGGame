// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/AuraGameModeBase.h"

#ifdef GAS_AuraGameModeBase_generated_h
#error "AuraGameModeBase.generated.h already included, missing '#pragma once' in AuraGameModeBase.h"
#endif
#define GAS_AuraGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraGameModeBase ********************************************************
struct Z_Construct_UClass_AAuraGameModeBase_Statics;
GAS_API UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraGameModeBase(); \
	friend struct ::Z_Construct_UClass_AAuraGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_AAuraGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_AAuraGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AAuraGameModeBase)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraGameModeBase(AAuraGameModeBase&&) = delete; \
	AAuraGameModeBase(const AAuraGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuraGameModeBase) \
	NO_API virtual ~AAuraGameModeBase();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_12_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraGameModeBase;

// ********** End Class AAuraGameModeBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_Game_AuraGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
