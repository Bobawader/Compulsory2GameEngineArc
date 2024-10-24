// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Components/MyComponents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyComponents() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SHOOTER_API UClass* Z_Construct_UClass_UMyComponents();
SHOOTER_API UClass* Z_Construct_UClass_UMyComponents_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class UMyComponents
void UMyComponents::StaticRegisterNativesUMyComponents()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyComponents);
UClass* Z_Construct_UClass_UMyComponents_NoRegister()
{
	return UMyComponents::StaticClass();
}
struct Z_Construct_UClass_UMyComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/MyComponents.h" },
		{ "ModuleRelativePath", "Components/MyComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyComponents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyComponents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyComponents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyComponents_Statics::ClassParams = {
	&UMyComponents::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyComponents_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyComponents_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyComponents()
{
	if (!Z_Registration_Info_UClass_UMyComponents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyComponents.OuterSingleton, Z_Construct_UClass_UMyComponents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyComponents.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<UMyComponents>()
{
	return UMyComponents::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyComponents);
UMyComponents::~UMyComponents() {}
// End Class UMyComponents

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyComponents_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyComponents, UMyComponents::StaticClass, TEXT("UMyComponents"), &Z_Registration_Info_UClass_UMyComponents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyComponents), 2388173488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyComponents_h_2606119087(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyComponents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_spill_Compulsory2GameEngine_Shooter_Source_Shooter_Components_MyComponents_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
