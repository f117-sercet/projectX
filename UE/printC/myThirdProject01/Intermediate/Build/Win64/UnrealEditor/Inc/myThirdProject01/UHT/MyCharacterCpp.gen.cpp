// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myThirdProject01/Public/MyCharacterCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterCpp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class AMyCharacterCpp
void AMyCharacterCpp::StaticRegisterNativesAMyCharacterCpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacterCpp);
UClass* Z_Construct_UClass_AMyCharacterCpp_NoRegister()
{
	return AMyCharacterCpp::StaticClass();
}
struct Z_Construct_UClass_AMyCharacterCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterCpp.h" },
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCharacterCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_myThirdProject01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterCpp_Statics::ClassParams = {
	&AMyCharacterCpp::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacterCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacterCpp()
{
	if (!Z_Registration_Info_UClass_AMyCharacterCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterCpp.OuterSingleton, Z_Construct_UClass_AMyCharacterCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacterCpp.OuterSingleton;
}
template<> MYTHIRDPROJECT01_API UClass* StaticClass<AMyCharacterCpp>()
{
	return AMyCharacterCpp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterCpp);
AMyCharacterCpp::~AMyCharacterCpp() {}
// End Class AMyCharacterCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterCpp, AMyCharacterCpp::StaticClass, TEXT("AMyCharacterCpp"), &Z_Registration_Info_UClass_AMyCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterCpp), 1417386212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_1176588618(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
