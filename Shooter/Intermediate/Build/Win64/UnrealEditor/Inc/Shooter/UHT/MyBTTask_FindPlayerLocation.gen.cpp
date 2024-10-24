// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Player/MyBTTask_FindPlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_FindPlayerLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTTask_FindPlayerLocation();
SHOOTER_API UClass* Z_Construct_UClass_UMyBTTask_FindPlayerLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class UMyBTTask_FindPlayerLocation
void UMyBTTask_FindPlayerLocation::StaticRegisterNativesUMyBTTask_FindPlayerLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_FindPlayerLocation);
UClass* Z_Construct_UClass_UMyBTTask_FindPlayerLocation_NoRegister()
{
	return UMyBTTask_FindPlayerLocation::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/MyBTTask_FindPlayerLocation.h" },
		{ "ModuleRelativePath", "Player/MyBTTask_FindPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRandom_MetaData[] = {
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Player/MyBTTask_FindPlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Player/MyBTTask_FindPlayerLocation.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SearchRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SearchRandom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_FindPlayerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRandom_SetBit(void* Obj)
{
	((UMyBTTask_FindPlayerLocation*)Obj)->SearchRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRandom = { "SearchRandom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBTTask_FindPlayerLocation), &Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRandom_MetaData), NewProp_SearchRandom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_FindPlayerLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::ClassParams = {
	&UMyBTTask_FindPlayerLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_FindPlayerLocation()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_FindPlayerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_FindPlayerLocation.OuterSingleton, Z_Construct_UClass_UMyBTTask_FindPlayerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_FindPlayerLocation.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<UMyBTTask_FindPlayerLocation>()
{
	return UMyBTTask_FindPlayerLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_FindPlayerLocation);
UMyBTTask_FindPlayerLocation::~UMyBTTask_FindPlayerLocation() {}
// End Class UMyBTTask_FindPlayerLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindPlayerLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_FindPlayerLocation, UMyBTTask_FindPlayerLocation::StaticClass, TEXT("UMyBTTask_FindPlayerLocation"), &Z_Registration_Info_UClass_UMyBTTask_FindPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_FindPlayerLocation), 2374123223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindPlayerLocation_h_1571428276(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindPlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Player_MyBTTask_FindPlayerLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
