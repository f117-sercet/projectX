// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myThirdProject01/Public/MyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_UMyAnimInstance();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class UMyAnimInstance
void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
{
	return UMyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "MyAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x89\xe4\xb8\xaa\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x89\xe4\xb8\xaa\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "MyAnimInstance" },
		{ "ModuleRelativePath", "Public/MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterMovement_MetaData[] = {
		{ "Category", "MyAnimInstance" },
		{ "ModuleRelativePath", "Public/MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, PlayerCharacter), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacterMovement = { "PlayerCharacterMovement", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, PlayerCharacterMovement), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterMovement_MetaData), NewProp_PlayerCharacterMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacterMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_myThirdProject01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
	&UMyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
}
template<> MYTHIRDPROJECT01_API UClass* StaticClass<UMyAnimInstance>()
{
	return UMyAnimInstance::StaticClass();
}
UMyAnimInstance::UMyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
UMyAnimInstance::~UMyAnimInstance() {}
// End Class UMyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 3638379472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyAnimInstance_h_1156954594(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
