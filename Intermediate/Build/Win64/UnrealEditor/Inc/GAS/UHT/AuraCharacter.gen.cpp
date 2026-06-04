// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/AuraCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAuraCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAS_API UClass* Z_Construct_UClass_AAuraCharacter();
GAS_API UClass* Z_Construct_UClass_AAuraCharacter_NoRegister();
GAS_API UClass* Z_Construct_UClass_AAuraCharacterBase();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAuraCharacter ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAuraCharacter;
UClass* AAuraCharacter::GetPrivateStaticClass()
{
	using TClass = AAuraCharacter;
	if (!Z_Registration_Info_UClass_AAuraCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AuraCharacter"),
			Z_Registration_Info_UClass_AAuraCharacter.InnerSingleton,
			StaticRegisterNativesAAuraCharacter,
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
	return Z_Registration_Info_UClass_AAuraCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAuraCharacter_NoRegister()
{
	return AAuraCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAuraCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAuraCharacter constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAuraCharacter constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAuraCharacter_Statics

// ********** Begin Class AAuraCharacter Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, DefaultAttributes), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_DefaultAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers) < 2048);
// ********** End Class AAuraCharacter Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacter_Statics::ClassParams = {
	&AAuraCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams)
};
void AAuraCharacter::StaticRegisterNativesAAuraCharacter()
{
}
UClass* Z_Construct_UClass_AAuraCharacter()
{
	if (!Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton, Z_Construct_UClass_AAuraCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAuraCharacter);
AAuraCharacter::~AAuraCharacter() {}
// ********** End Class AAuraCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Character_AuraCharacter_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacter, AAuraCharacter::StaticClass, TEXT("AAuraCharacter"), &Z_Registration_Info_UClass_AAuraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacter), 390126468U) },
	};
}; // Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Character_AuraCharacter_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Character_AuraCharacter_h__Script_GAS_511771519{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Character_AuraCharacter_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Character_AuraCharacter_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
