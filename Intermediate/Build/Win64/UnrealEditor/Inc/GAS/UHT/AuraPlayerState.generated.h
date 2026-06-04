// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerState.h"

#ifdef GAS_AuraPlayerState_generated_h
#error "AuraPlayerState.generated.h already included, missing '#pragma once' in AuraPlayerState.h"
#endif
#define GAS_AuraPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraPlayerState *********************************************************
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Level);


struct Z_Construct_UClass_AAuraPlayerState_Statics;
GAS_API UClass* Z_Construct_UClass_AAuraPlayerState_NoRegister();

#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerState(); \
	friend struct ::Z_Construct_UClass_AAuraPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_AAuraPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_AAuraPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AAuraPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Level=NETFIELD_REP_START, \
		NETFIELD_REP_END=Level	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraPlayerState(AAuraPlayerState&&) = delete; \
	AAuraPlayerState(const AAuraPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerState) \
	NO_API virtual ~AAuraPlayerState();


#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_15_PROLOG
#define FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraPlayerState;

// ********** End Class AAuraPlayerState ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_work_Unreal_Projects_GAS_Source_GAS_Public_Player_AuraPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
