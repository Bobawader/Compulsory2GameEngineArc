// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/BTTask_MeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MeleeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTER_API UClass* Z_Construct_UClass_UBTTask_MeleeAttack();
SHOOTER_API UClass* Z_Construct_UClass_UBTTask_MeleeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class UBTTask_MeleeAttack
void UBTTask_MeleeAttack::StaticRegisterNativesUBTTask_MeleeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MeleeAttack);
UClass* Z_Construct_UClass_UBTTask_MeleeAttack_NoRegister()
{
	return UBTTask_MeleeAttack::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/BTTask_MeleeAttack.h" },
		{ "ModuleRelativePath", "Player/BTTask_MeleeAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::ClassParams = {
	&UBTTask_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton, Z_Construct_UClass_UBTTask_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<UBTTask_MeleeAttack>()
{
	return UBTTask_MeleeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MeleeAttack);
UBTTask_MeleeAttack::~UBTTask_MeleeAttack() {}
// End Class UBTTask_MeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_BTTask_MeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MeleeAttack, UBTTask_MeleeAttack::StaticClass, TEXT("UBTTask_MeleeAttack"), &Z_Registration_Info_UClass_UBTTask_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MeleeAttack), 2944815337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_BTTask_MeleeAttack_h_1193586646(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_BTTask_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_BTTask_MeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
