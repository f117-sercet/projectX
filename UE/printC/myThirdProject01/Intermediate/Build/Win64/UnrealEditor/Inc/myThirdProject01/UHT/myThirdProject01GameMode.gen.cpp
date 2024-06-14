// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myThirdProject01/myThirdProject01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyThirdProject01GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AmyThirdProject01GameMode();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AmyThirdProject01GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class AmyThirdProject01GameMode
void AmyThirdProject01GameMode::StaticRegisterNativesAmyThirdProject01GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmyThirdProject01GameMode);
UClass* Z_Construct_UClass_AmyThirdProject01GameMode_NoRegister()
{
	return AmyThirdProject01GameMode::StaticClass();
}
struct Z_Construct_UClass_AmyThirdProject01GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "myThirdProject01GameMode.h" },
		{ "ModuleRelativePath", "myThirdProject01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyThirdProject01GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AmyThirdProject01GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_myThirdProject01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmyThirdProject01GameMode_Statics::ClassParams = {
	&AmyThirdProject01GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AmyThirdProject01GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmyThirdProject01GameMode()
{
	if (!Z_Registration_Info_UClass_AmyThirdProject01GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmyThirdProject01GameMode.OuterSingleton, Z_Construct_UClass_AmyThirdProject01GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmyThirdProject01GameMode.OuterSingleton;
}
template<> MYTHIRDPROJECT01_API UClass* StaticClass<AmyThirdProject01GameMode>()
{
	return AmyThirdProject01GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmyThirdProject01GameMode);
AmyThirdProject01GameMode::~AmyThirdProject01GameMode() {}
// End Class AmyThirdProject01GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmyThirdProject01GameMode, AmyThirdProject01GameMode::StaticClass, TEXT("AmyThirdProject01GameMode"), &Z_Registration_Info_UClass_AmyThirdProject01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmyThirdProject01GameMode), 1582915592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01GameMode_h_4069160920(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
