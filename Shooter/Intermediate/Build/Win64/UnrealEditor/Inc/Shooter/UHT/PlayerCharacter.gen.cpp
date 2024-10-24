// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_APlayerCharacter();
SHOOTER_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyDamageableComponent();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyEnemyTagComponent();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyHealthComponent();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyInputComponent();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyPositionComponent();
SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyPotionComponent();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin ScriptStruct FMyPositionComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyPositionComponent;
class UScriptStruct* FMyPositionComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyPositionComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyPositionComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyPositionComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyPositionComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyPositionComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyPositionComponent>()
{
	return FMyPositionComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyPositionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyPositionComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyPositionComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyPositionComponent",
	nullptr,
	0,
	sizeof(FMyPositionComponent),
	alignof(FMyPositionComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPositionComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyPositionComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyPositionComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyPositionComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyPositionComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyPositionComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyPositionComponent.InnerSingleton;
}
// End ScriptStruct FMyPositionComponent

// Begin ScriptStruct FMyHealthComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyHealthComponent;
class UScriptStruct* FMyHealthComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyHealthComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyHealthComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyHealthComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyHealthComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyHealthComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyHealthComponent>()
{
	return FMyHealthComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyHealthComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyHealthComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyHealthComponent",
	nullptr,
	0,
	sizeof(FMyHealthComponent),
	alignof(FMyHealthComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyHealthComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyHealthComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyHealthComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyHealthComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyHealthComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyHealthComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyHealthComponent.InnerSingleton;
}
// End ScriptStruct FMyHealthComponent

// Begin ScriptStruct FMyPotionComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyPotionComponent;
class UScriptStruct* FMyPotionComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyPotionComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyPotionComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyPotionComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyPotionComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyPotionComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyPotionComponent>()
{
	return FMyPotionComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyPotionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyPotionComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyPotionComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyPotionComponent",
	nullptr,
	0,
	sizeof(FMyPotionComponent),
	alignof(FMyPotionComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPotionComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyPotionComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyPotionComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyPotionComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyPotionComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyPotionComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyPotionComponent.InnerSingleton;
}
// End ScriptStruct FMyPotionComponent

// Begin ScriptStruct FMyInputComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyInputComponent;
class UScriptStruct* FMyInputComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyInputComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyInputComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyInputComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyInputComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyInputComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyInputComponent>()
{
	return FMyInputComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyInputComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyInputComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyInputComponent",
	nullptr,
	0,
	sizeof(FMyInputComponent),
	alignof(FMyInputComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyInputComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyInputComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyInputComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyInputComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyInputComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyInputComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyInputComponent.InnerSingleton;
}
// End ScriptStruct FMyInputComponent

// Begin ScriptStruct FMyDamageableComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyDamageableComponent;
class UScriptStruct* FMyDamageableComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyDamageableComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyDamageableComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyDamageableComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyDamageableComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyDamageableComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyDamageableComponent>()
{
	return FMyDamageableComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyDamageableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyDamageableComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyDamageableComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyDamageableComponent",
	nullptr,
	0,
	sizeof(FMyDamageableComponent),
	alignof(FMyDamageableComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDamageableComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyDamageableComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyDamageableComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyDamageableComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyDamageableComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyDamageableComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyDamageableComponent.InnerSingleton;
}
// End ScriptStruct FMyDamageableComponent

// Begin ScriptStruct FMyEnemyTagComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyEnemyTagComponent;
class UScriptStruct* FMyEnemyTagComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyEnemyTagComponent, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("MyEnemyTagComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FMyEnemyTagComponent>()
{
	return FMyEnemyTagComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyEnemyTagComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	nullptr,
	&NewStructOps,
	"MyEnemyTagComponent",
	nullptr,
	0,
	sizeof(FMyEnemyTagComponent),
	alignof(FMyEnemyTagComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyEnemyTagComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.InnerSingleton, Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyEnemyTagComponent.InnerSingleton;
}
// End ScriptStruct FMyEnemyTagComponent

// Begin Class APlayerCharacter Function SpawnEnemy
struct Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics
{
	struct PlayerCharacter_eventSpawnEnemy_Parms
	{
		FVector SpawnLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSpawnEnemy_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::NewProp_SpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SpawnEnemy", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PlayerCharacter_eventSpawnEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::PlayerCharacter_eventSpawnEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_SpawnEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SpawnEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execSpawnEnemy)
{
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemy(Z_Param_SpawnLocation);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function SpawnEnemy

// Begin Class APlayerCharacter
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnEnemy", &APlayerCharacter::execSpawnEnemy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PlayerCharacter\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerCharacter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireOffset_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_SpawnEnemy, "SpawnEnemy" }, // 3342865374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpawnAction = { "SpawnAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SpawnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnAction_MetaData), NewProp_SpawnAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CollectionRange = { "CollectionRange", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CollectionRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionRange_MetaData), NewProp_CollectionRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Inventory), Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireOffset = { "FireOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, FireOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireOffset_MetaData), NewProp_FireOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpawnAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CollectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<APlayerCharacter>()
{
	return APlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// End Class APlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyPositionComponent::StaticStruct, Z_Construct_UScriptStruct_FMyPositionComponent_Statics::NewStructOps, TEXT("MyPositionComponent"), &Z_Registration_Info_UScriptStruct_MyPositionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyPositionComponent), 1547702040U) },
		{ FMyHealthComponent::StaticStruct, Z_Construct_UScriptStruct_FMyHealthComponent_Statics::NewStructOps, TEXT("MyHealthComponent"), &Z_Registration_Info_UScriptStruct_MyHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyHealthComponent), 527173602U) },
		{ FMyPotionComponent::StaticStruct, Z_Construct_UScriptStruct_FMyPotionComponent_Statics::NewStructOps, TEXT("MyPotionComponent"), &Z_Registration_Info_UScriptStruct_MyPotionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyPotionComponent), 2721419299U) },
		{ FMyInputComponent::StaticStruct, Z_Construct_UScriptStruct_FMyInputComponent_Statics::NewStructOps, TEXT("MyInputComponent"), &Z_Registration_Info_UScriptStruct_MyInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyInputComponent), 1509537140U) },
		{ FMyDamageableComponent::StaticStruct, Z_Construct_UScriptStruct_FMyDamageableComponent_Statics::NewStructOps, TEXT("MyDamageableComponent"), &Z_Registration_Info_UScriptStruct_MyDamageableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyDamageableComponent), 2886196786U) },
		{ FMyEnemyTagComponent::StaticStruct, Z_Construct_UScriptStruct_FMyEnemyTagComponent_Statics::NewStructOps, TEXT("MyEnemyTagComponent"), &Z_Registration_Info_UScriptStruct_MyEnemyTagComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyEnemyTagComponent), 4060442496U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 428468570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_1582619593(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_PlayerCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
