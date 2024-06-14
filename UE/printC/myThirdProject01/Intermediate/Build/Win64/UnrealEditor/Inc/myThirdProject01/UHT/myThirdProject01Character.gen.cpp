// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myThirdProject01/myThirdProject01Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyThirdProject01Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AmyThirdProject01Character();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AmyThirdProject01Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class AmyThirdProject01Character
void AmyThirdProject01Character::StaticRegisterNativesAmyThirdProject01Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmyThirdProject01Character);
UClass* Z_Construct_UClass_AmyThirdProject01Character_NoRegister()
{
	return AmyThirdProject01Character::StaticClass();
}
struct Z_Construct_UClass_AmyThirdProject01Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "myThirdProject01Character.h" },
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character *///USpringArmComponent* CameraBoom;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character //USpringArmComponent* CameraBoom;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera *///UCameraComponent* FollowCamera;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera //UCameraComponent* FollowCamera;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext *///UInputMappingContext* DefaultMappingContext;\n" },
#endif
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext //UInputMappingContext* DefaultMappingContext;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action *///UInputAction* JumpAction;\n" },
#endif
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action //UInputAction* JumpAction;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action *///UInputAction* MoveAction;\n" },
#endif
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action //UInputAction* MoveAction;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action *///UInputAction* LookAction;\n" },
#endif
		{ "ModuleRelativePath", "myThirdProject01Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action //UInputAction* LookAction;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyThirdProject01Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyThirdProject01Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmyThirdProject01Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyThirdProject01Character_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AmyThirdProject01Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_myThirdProject01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmyThirdProject01Character_Statics::ClassParams = {
	&AmyThirdProject01Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AmyThirdProject01Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01Character_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmyThirdProject01Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AmyThirdProject01Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmyThirdProject01Character()
{
	if (!Z_Registration_Info_UClass_AmyThirdProject01Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmyThirdProject01Character.OuterSingleton, Z_Construct_UClass_AmyThirdProject01Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmyThirdProject01Character.OuterSingleton;
}
template<> MYTHIRDPROJECT01_API UClass* StaticClass<AmyThirdProject01Character>()
{
	return AmyThirdProject01Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmyThirdProject01Character);
AmyThirdProject01Character::~AmyThirdProject01Character() {}
// End Class AmyThirdProject01Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmyThirdProject01Character, AmyThirdProject01Character::StaticClass, TEXT("AmyThirdProject01Character"), &Z_Registration_Info_UClass_AmyThirdProject01Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmyThirdProject01Character), 2648760048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01Character_h_3171172014(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_myThirdProject01Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
