// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/EnemyInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAS_API UClass* Z_Construct_UClass_UEnemyInterface();
GAS_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UEnemyInterface ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyInterface;
UClass* UEnemyInterface::GetPrivateStaticClass()
{
	using TClass = UEnemyInterface;
	if (!Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyInterface"),
			Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton,
			StaticRegisterNativesUEnemyInterface,
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
	return Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyInterface_NoRegister()
{
	return UEnemyInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/EnemyInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UEnemyInterface constinit property declarations **********************
// ********** End Interface UEnemyInterface constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnemyInterface_Statics
UObject* (*const Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyInterface_Statics::ClassParams = {
	&UEnemyInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams)
};
void UEnemyInterface::StaticRegisterNativesUEnemyInterface()
{
}
UClass* Z_Construct_UClass_UEnemyInterface()
{
	if (!Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton, Z_Construct_UClass_UEnemyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton;
}
UEnemyInterface::UEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnemyInterface);
// ********** End Interface UEnemyInterface ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyInterface, UEnemyInterface::StaticClass, TEXT("UEnemyInterface"), &Z_Registration_Info_UClass_UEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyInterface), 714169034U) },
	};
}; // Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h__Script_GAS_3307784245{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
