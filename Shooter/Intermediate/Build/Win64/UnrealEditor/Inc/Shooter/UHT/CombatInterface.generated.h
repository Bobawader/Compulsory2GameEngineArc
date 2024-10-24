// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define SHOOTER_CombatInterface_generated_h

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 MeleeAttack_Implementation() { return 0; }; \
	DECLARE_FUNCTION(execMeleeAttack);


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_CALLBACK_WRAPPERS
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTER_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatInterface(UCombatInterface&&); \
	UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTER_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	SHOOTER_API virtual ~UCombatInterface();


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Shooter"), SHOOTER_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static int32 Execute_MeleeAttack(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_10_PROLOG
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_CALLBACK_WRAPPERS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
