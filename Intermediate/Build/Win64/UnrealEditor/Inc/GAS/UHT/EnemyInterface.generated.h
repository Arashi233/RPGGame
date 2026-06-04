// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/EnemyInterface.h"

#ifdef GAS_EnemyInterface_generated_h
#error "EnemyInterface.generated.h already included, missing '#pragma once' in EnemyInterface.h"
#endif
#define GAS_EnemyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEnemyInterface ******************************************************
struct Z_Construct_UClass_UEnemyInterface_Statics;
GAS_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAS_API UEnemyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyInterface(UEnemyInterface&&) = delete; \
	UEnemyInterface(const UEnemyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAS_API, UEnemyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyInterface) \
	virtual ~UEnemyInterface() = default;


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemyInterface(); \
	friend struct ::Z_Construct_UClass_UEnemyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UEnemyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UEnemyInterface_NoRegister) \
	DECLARE_SERIALIZER(UEnemyInterface)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemyInterface() {} \
public: \
	typedef UEnemyInterface UClassType; \
	typedef IEnemyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_10_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyInterface;

// ********** End Interface UEnemyInterface ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_Interaction_EnemyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
