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
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp();
MYTHIRDPROJECT01_API UClass* Z_Construct_UClass_AMyCharacterCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_myThirdProject01();
// End Cross Module References

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
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_testLens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacterCpp_CallableFunction, "CallableFunction" }, // 901963429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_testLens = { "testLens", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, testLens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testLens_MetaData), NewProp_testLens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterCpp, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_testLens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterCpp_Statics::NewProp_CameraBoom,
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
		{ Z_Construct_UClass_AMyCharacterCpp, AMyCharacterCpp::StaticClass, TEXT("AMyCharacterCpp"), &Z_Registration_Info_UClass_AMyCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterCpp), 3702339065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_2405610295(TEXT("/Script/myThirdProject01"),
	Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myThirdProject01_Source_myThirdProject01_Public_MyCharacterCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
