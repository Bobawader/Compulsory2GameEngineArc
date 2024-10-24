// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/Potion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_APotion();
SHOOTER_API UClass* Z_Construct_UClass_APotion_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class APotion
void APotion::StaticRegisterNativesAPotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APotion);
UClass* Z_Construct_UClass_APotion_NoRegister()
{
	return APotion::StaticClass();
}
struct Z_Construct_UClass_APotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Potion.h" },
		{ "ModuleRelativePath", "Player/Potion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[] = {
		{ "ModuleRelativePath", "Player/Potion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Potion.h" },
	};
#endif // WITH_METADATA
	static void NewProp_active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APotion_Statics::NewProp_active_SetBit(void* Obj)
{
	((APotion*)Obj)->active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APotion), &Z_Construct_UClass_APotion_Statics::NewProp_active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_active_MetaData), NewProp_active_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APotion, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APotion_Statics::ClassParams = {
	&APotion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APotion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams), Z_Construct_UClass_APotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APotion()
{
	if (!Z_Registration_Info_UClass_APotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APotion.OuterSingleton, Z_Construct_UClass_APotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APotion.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<APotion>()
{
	return APotion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APotion);
APotion::~APotion() {}
// End Class APotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Potion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APotion, APotion::StaticClass, TEXT("APotion"), &Z_Registration_Info_UClass_APotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APotion), 4253367985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Potion_h_579622988(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Potion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_Potion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
