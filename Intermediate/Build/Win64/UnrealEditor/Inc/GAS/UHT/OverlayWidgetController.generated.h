// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/OverlayWidgetController.h"

#ifdef GAS_OverlayWidgetController_generated_h
#error "OverlayWidgetController.generated.h already included, missing '#pragma once' in OverlayWidgetController.h"
#endif
#define GAS_OverlayWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIWidgetRow;

// ********** Begin ScriptStruct FUIWidgetRow ******************************************************
struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics;
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIWidgetRow_Statics; \
	GAS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FUIWidgetRow;
// ********** End ScriptStruct FUIWidgetRow ********************************************************

// ********** Begin Delegate FOnAttributeChangedSignature ******************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_30_DELEGATE \
GAS_API void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue);


// ********** End Delegate FOnAttributeChangedSignature ********************************************

// ********** Begin Delegate FMessageWidgetRowSignature ********************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_34_DELEGATE \
GAS_API void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow const& Row);


// ********** End Delegate FMessageWidgetRowSignature **********************************************

// ********** Begin Class UOverlayWidgetController *************************************************
struct Z_Construct_UClass_UOverlayWidgetController_Statics;
GAS_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlayWidgetController(); \
	friend struct ::Z_Construct_UClass_UOverlayWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UOverlayWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UOverlayWidgetController, UAuraWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UOverlayWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UOverlayWidgetController)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlayWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOverlayWidgetController(UOverlayWidgetController&&) = delete; \
	UOverlayWidgetController(const UOverlayWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlayWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlayWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlayWidgetController) \
	NO_API virtual ~UOverlayWidgetController();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_42_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_45_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOverlayWidgetController;

// ********** End Class UOverlayWidgetController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_UI_WidgetController_OverlayWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
