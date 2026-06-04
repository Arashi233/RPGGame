// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_MaxHealth.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMMC_MaxHealth() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
GAS_API UClass* Z_Construct_UClass_UMMC_MaxHealth();
GAS_API UClass* Z_Construct_UClass_UMMC_MaxHealth_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_MaxHealth ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_MaxHealth;
UClass* UMMC_MaxHealth::GetPrivateStaticClass()
{
	using TClass = UMMC_MaxHealth;
	if (!Z_Registration_Info_UClass_UMMC_MaxHealth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MMC_MaxHealth"),
			Z_Registration_Info_UClass_UMMC_MaxHealth.InnerSingleton,
			StaticRegisterNativesUMMC_MaxHealth,
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
	return Z_Registration_Info_UClass_UMMC_MaxHealth.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_MaxHealth_NoRegister()
{
	return UMMC_MaxHealth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_MaxHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_MaxHealth.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_MaxHealth.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMMC_MaxHealth constinit property declarations ***************************
// ********** End Class UMMC_MaxHealth constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_MaxHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMMC_MaxHealth_Statics
UObject* (*const Z_Construct_UClass_UMMC_MaxHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_MaxHealth_Statics::ClassParams = {
	&UMMC_MaxHealth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_MaxHealth_Statics::Class_MetaDataParams)
};
void UMMC_MaxHealth::StaticRegisterNativesUMMC_MaxHealth()
{
}
UClass* Z_Construct_UClass_UMMC_MaxHealth()
{
	if (!Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton, Z_Construct_UClass_UMMC_MaxHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_MaxHealth.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMMC_MaxHealth);
UMMC_MaxHealth::~UMMC_MaxHealth() {}
// ********** End Class UMMC_MaxHealth *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_MaxHealth, UMMC_MaxHealth::StaticClass, TEXT("UMMC_MaxHealth"), &Z_Registration_Info_UClass_UMMC_MaxHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_MaxHealth), 4079561766U) },
	};
}; // Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h__Script_GAS_1808732037{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_AbilitySystem_MMC_MMC_MaxHealth_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
