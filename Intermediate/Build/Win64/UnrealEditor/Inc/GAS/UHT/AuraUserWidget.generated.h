// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widget/AuraUserWidget.h"

#ifdef GAS_AuraUserWidget_generated_h
#error "AuraUserWidget.generated.h already included, missing '#pragma once' in AuraUserWidget.h"
#endif
#define GAS_AuraUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UAuraUserWidget **********************************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetController);


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAuraUserWidget_Statics;
GAS_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraUserWidget(); \
	friend struct ::Z_Construct_UClass_UAuraUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UAuraUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UAuraUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UAuraUserWidget)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraUserWidget(UAuraUserWidget&&) = delete; \
	UAuraUserWidget(const UAuraUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraUserWidget) \
	NO_API virtual ~UAuraUserWidget();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_12_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_CALLBACK_WRAPPERS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraUserWidget;

// ********** End Class UAuraUserWidget ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_Widget_AuraUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
