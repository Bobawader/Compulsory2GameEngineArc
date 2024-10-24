// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SHOOTER_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define SHOOTER_Projectile_generated_h

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectile(AProjectile&&); \
	AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_40_PROLOG
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_INCLASS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
