// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myThirdProject01/Public/MyPawnPayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawnPayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyPawnPayer();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyPawnPayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class AMyPawnPayer
void AMyPawnPayer::StaticRegisterNativesAMyPawnPayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawnPayer);
UClass* Z_Construct_UClass_AMyPawnPayer_NoRegister()
{
	return AMyPawnPayer::StaticClass();
}
struct Z_Construct_UClass_AMyPawnPayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawnPayer.h" },
		{ "ModuleRelativePath", "Public/MyPawnPayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawnPayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPawnPayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_myThirdProject01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnPayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawnPayer_Statics::ClassParams = {
	&AMyPawnPayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnPayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawnPayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawnPayer()
{
	if (!Z_Registration_Info_UClass_AMyPawnPayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawnPayer.OuterSingleton, Z_Construct_UClass_AMyPawnPayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawnPayer.OuterSingleton;
}
template<> MYTHIRDPROJECT01_API UClass* StaticClass<AMyPawnPayer>()
{
	return AMyPawnPayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawnPayer);
AMyPawnPayer::~AMyPawnPayer() {}
// End Class AMyPawnPayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawnPayer, AMyPawnPayer::StaticClass, TEXT("AMyPawnPayer"), &Z_Registration_Info_UClass_AMyPawnPayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawnPayer), 1774295899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_2774671788(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
