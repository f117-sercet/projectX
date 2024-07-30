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
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

// Begin Class AMyCharacterCpp Function Attack
struct Z_Construct_UFunction_AMyCharacterCpp_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterCpp_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterCpp, nullptr, "Attack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterCpp_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterCpp_Attack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacterCpp_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterCpp_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterCpp::execAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack();
	P_NATIVE_END;
}
// End Class AMyCharacterCpp Function Attack

// Begin Class AMyCharacterCpp Function CallableFunction
struct Z_Construct_UFunction_AMyCharacterCpp_CallableFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uproperty \xe5\xb1\x9e\xe6\x80\xa7\n// Callable\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uproperty \xe5\xb1\x9e\xe6\x80\xa7\nCallable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterCpp_CallableFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterCpp, nullptr, "CallableFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterCpp_CallableFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterCpp_CallableFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacterCpp_CallableFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterCpp_CallableFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterCpp::execCallableFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallableFunction();
	P_NATIVE_END;
}
// End Class AMyCharacterCpp Function CallableFunction

// Begin Class AMyCharacterCpp
void AMyCharacterCpp::StaticRegisterNativesAMyCharacterCpp()
{
	UClass* Class = AMyCharacterCpp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack", &AMyCharacterCpp::execAttack },
		{ "CallableFunction", &AMyCharacterCpp::execCallableFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CAMERA_ZOOM_DAMPEN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb7\xbb\xe5\x8a\xa0\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_testLens_MetaData[] = {
		{ "Category", "MyCharacterCpp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uproperty \xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uproperty \xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CAMERA_ZOOM_DAMPEN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMapping_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_testLens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacterCpp_Attack, "Attack" }, // 1043946497
		{ &Z_Construct_UFunction_AMyCharacterCpp_CallableFunction, "CallableFunction" }, // 901963429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_testLens = { "testLens", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, testLens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testLens_MetaData), NewProp_testLens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_DefaultMapping = { "DefaultMapping", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, DefaultMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMapping_MetaData), NewProp_DefaultMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_testLens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_DefaultMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterCpp_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AMyCharacterCpp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterCpp_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMyCharacterCpp, AMyCharacterCpp::StaticClass, TEXT("AMyCharacterCpp"), &Z_Registration_Info_UClass_AMyCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterCpp), 2301518299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_2067412345(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
