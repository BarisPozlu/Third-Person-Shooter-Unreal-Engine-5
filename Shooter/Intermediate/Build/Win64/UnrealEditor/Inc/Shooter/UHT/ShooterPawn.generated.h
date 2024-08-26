// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef SHOOTER_ShooterPawn_generated_h
#error "ShooterPawn.generated.h already included, missing '#pragma once' in ShooterPawn.h"
#endif
#define SHOOTER_ShooterPawn_generated_h

#define FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execGetNormalizedHealth);


#define FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPawn(); \
	friend struct Z_Construct_UClass_AShooterPawn_Statics; \
public: \
	DECLARE_CLASS(AShooterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterPawn)


#define FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterPawn(AShooterPawn&&); \
	AShooterPawn(const AShooterPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterPawn) \
	NO_API virtual ~AShooterPawn();


#define FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_13_PROLOG
#define FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
