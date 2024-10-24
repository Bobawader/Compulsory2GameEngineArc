// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyEnemy_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef SHOOTER_MyEnemy_AIController_generated_h
#error "MyEnemy_AIController.generated.h already included, missing '#pragma once' in MyEnemy_AIController.h"
#endif
#define SHOOTER_MyEnemy_AIController_generated_h

#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetDetected);


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemy_AIController(); \
	friend struct Z_Construct_UClass_AMyEnemy_AIController_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy_AIController)


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyEnemy_AIController(AMyEnemy_AIController&&); \
	AMyEnemy_AIController(const AMyEnemy_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEnemy_AIController) \
	NO_API virtual ~AMyEnemy_AIController();


#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_14_PROLOG
#define FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AMyEnemy_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyEnemy_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
