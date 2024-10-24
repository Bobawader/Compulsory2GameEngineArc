// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/MyBTService_IsPlayerRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTService_IsPlayerRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTService_IsPlayerRange();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTService_IsPlayerRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class UMyBTService_IsPlayerRange
void UMyBTService_IsPlayerRange::StaticRegisterNativesUMyBTService_IsPlayerRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTService_IsPlayerRange);
UClass* Z_Construct_UClass_UMyBTService_IsPlayerRange_NoRegister()
{
	return UMyBTService_IsPlayerRange::StaticClass();
}
struct Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/MyBTService_IsPlayerRange.h" },
		{ "ModuleRelativePath", "Player/MyBTService_IsPlayerRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Player/MyBTService_IsPlayerRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTService_IsPlayerRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTService_IsPlayerRange, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::NewProp_MeleeRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::ClassParams = {
	&UMyBTService_IsPlayerRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTService_IsPlayerRange()
{
	if (!Z_Registration_Info_UClass_UMyBTService_IsPlayerRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTService_IsPlayerRange.OuterSingleton, Z_Construct_UClass_UMyBTService_IsPlayerRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTService_IsPlayerRange.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<UMyBTService_IsPlayerRange>()
{
	return UMyBTService_IsPlayerRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTService_IsPlayerRange);
UMyBTService_IsPlayerRange::~UMyBTService_IsPlayerRange() {}
// End Class UMyBTService_IsPlayerRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTService_IsPlayerRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTService_IsPlayerRange, UMyBTService_IsPlayerRange::StaticClass, TEXT("UMyBTService_IsPlayerRange"), &Z_Registration_Info_UClass_UMyBTService_IsPlayerRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTService_IsPlayerRange), 242272523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTService_IsPlayerRange_h_4013750190(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTService_IsPlayerRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTService_IsPlayerRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
