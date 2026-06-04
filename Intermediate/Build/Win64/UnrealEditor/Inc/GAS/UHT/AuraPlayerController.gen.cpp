// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/AuraPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAS_API UClass* Z_Construct_UClass_AAuraPlayerController();
GAS_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAuraPlayerController ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAuraPlayerController;
UClass* AAuraPlayerController::GetPrivateStaticClass()
{
	using TClass = AAuraPlayerController;
	if (!Z_Registration_Info_UClass_AAuraPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AuraPlayerController"),
			Z_Registration_Info_UClass_AAuraPlayerController.InnerSingleton,
			StaticRegisterNativesAAuraPlayerController,
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
	return Z_Registration_Info_UClass_AAuraPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
{
	return AAuraPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAuraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAuraPlayerController constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAuraPlayerController constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAuraPlayerController_Statics

// ********** Begin Class AAuraPlayerController Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext = { "AuraContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraContext_MetaData), NewProp_AuraContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AAuraPlayerController Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
	&AAuraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
};
void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
{
}
UClass* Z_Construct_UClass_AAuraPlayerController()
{
	if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAuraPlayerController);
AAuraPlayerController::~AAuraPlayerController() {}
// ********** End Class AAuraPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerController_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 3761880005U) },
	};
}; // Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerController_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerController_h__Script_GAS_189886590{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerController_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerController_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
