// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define SHOOTER_PlayerCharacter_generated_h

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyPositionComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyPositionComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyHealthComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyHealthComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyPotionComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyPotionComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyInputComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyInputComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyDamageableComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyDamageableComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FMyEnemyTagComponent>();

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnEnemy);


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_219_PROLOG
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_INCLASS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
