// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_MyEnemy_generated_h
#error "MyEnemy.generated.h already included, missing '#pragma once' in MyEnemy.h"
#endif
#define SHOOTER_MyEnemy_generated_h

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemy(); \
	friend struct Z_Construct_UClass_AMyEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AMyEnemy*>(this); }


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyEnemy(AMyEnemy&&); \
	AMyEnemy(const AMyEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEnemy) \
	NO_API virtual ~AMyEnemy();


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_13_PROLOG
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AMyEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
