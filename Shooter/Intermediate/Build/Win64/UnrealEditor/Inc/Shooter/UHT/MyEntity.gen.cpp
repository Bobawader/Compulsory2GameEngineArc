// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Components/MyEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEntity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHOOTER_API UClass* Z_Construct_UClass_AMyEntity();
SHOOTER_API UClass* Z_Construct_UClass_AMyEntity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AMyEntity
void AMyEntity::StaticRegisterNativesAMyEntity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEntity);
UClass* Z_Construct_UClass_AMyEntity_NoRegister()
{
	return AMyEntity::StaticClass();
}
struct Z_Construct_UClass_AMyEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/MyEntity.h" },
		{ "ModuleRelativePath", "Components/MyEntity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEntity_Statics::ClassParams = {
	&AMyEntity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEntity()
{
	if (!Z_Registration_Info_UClass_AMyEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEntity.OuterSingleton, Z_Construct_UClass_AMyEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEntity.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AMyEntity>()
{
	return AMyEntity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEntity);
AMyEntity::~AMyEntity() {}
// End Class AMyEntity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyEntity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEntity, AMyEntity::StaticClass, TEXT("AMyEntity"), &Z_Registration_Info_UClass_AMyEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEntity), 2152932265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyEntity_h_619206741(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyEntity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
