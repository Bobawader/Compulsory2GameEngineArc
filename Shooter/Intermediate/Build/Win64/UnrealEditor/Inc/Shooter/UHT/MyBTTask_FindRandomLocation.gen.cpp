// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/MyBTTask_FindRandomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_FindRandomLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTTask_FindRandomLocation();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTTask_FindRandomLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class UMyBTTask_FindRandomLocation
void UMyBTTask_FindRandomLocation::StaticRegisterNativesUMyBTTask_FindRandomLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_FindRandomLocation);
UClass* Z_Construct_UClass_UMyBTTask_FindRandomLocation_NoRegister()
{
	return UMyBTTask_FindRandomLocation::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/MyBTTask_FindRandomLocation.h" },
		{ "ModuleRelativePath", "Player/MyBTTask_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Player/MyBTTask_FindRandomLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_FindRandomLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_FindRandomLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::ClassParams = {
	&UMyBTTask_FindRandomLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_FindRandomLocation()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_FindRandomLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_FindRandomLocation.OuterSingleton, Z_Construct_UClass_UMyBTTask_FindRandomLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_FindRandomLocation.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<UMyBTTask_FindRandomLocation>()
{
	return UMyBTTask_FindRandomLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_FindRandomLocation);
UMyBTTask_FindRandomLocation::~UMyBTTask_FindRandomLocation() {}
// End Class UMyBTTask_FindRandomLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindRandomLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_FindRandomLocation, UMyBTTask_FindRandomLocation::StaticClass, TEXT("UMyBTTask_FindRandomLocation"), &Z_Registration_Info_UClass_UMyBTTask_FindRandomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_FindRandomLocation), 1548678440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindRandomLocation_h_648841718(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindRandomLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindRandomLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
