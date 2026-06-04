// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/HUD/AuraHUD.h"

#ifdef GAS_AuraHUD_generated_h
#error "AuraHUD.generated.h already included, missing '#pragma once' in AuraHUD.h"
#endif
#define GAS_AuraHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraHUD *****************************************************************
struct Z_Construct_UClass_AAuraHUD_Statics;
GAS_API UClass* Z_Construct_UClass_AAuraHUD_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraHUD(); \
	friend struct ::Z_Construct_UClass_AAuraHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_AAuraHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_AAuraHUD_NoRegister) \
	DECLARE_SERIALIZER(AAuraHUD)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraHUD(AAuraHUD&&) = delete; \
	AAuraHUD(const AAuraHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuraHUD) \
	NO_API virtual ~AAuraHUD();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_18_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_21_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraHUD;

// ********** End Class AAuraHUD *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_HUD_AuraHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
