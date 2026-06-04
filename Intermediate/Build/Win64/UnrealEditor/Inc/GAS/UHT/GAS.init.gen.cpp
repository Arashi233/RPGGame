// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	GAS_API UFunction* Z_Construct_UDelegateFunction_GAS_MessageWidgetRowSignature__DelegateSignature();
	GAS_API UFunction* Z_Construct_UDelegateFunction_GAS_OnAttributeChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GAS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GAS()
	{
		if (!Z_Registration_Info_UPackage__Script_GAS.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_GAS_MessageWidgetRowSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_GAS_OnAttributeChangedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/GAS",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x01344FAB,
			0x5354BEA6,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GAS.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_GAS.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GAS(Z_Construct_UPackage__Script_GAS, TEXT("/Script/GAS"), Z_Registration_Info_UPackage__Script_GAS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01344FAB, 0x5354BEA6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
