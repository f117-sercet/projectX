// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPawnPayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRDPROJECT01_MyPawnPayer_generated_h
#error "MyPawnPayer.generated.h already included, missing '#pragma once' in MyPawnPayer.h"
#endif
#define MYTHIRDPROJECT01_MyPawnPayer_generated_h

#define FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawnPayer(); \
	friend struct Z_Construct_UClass_AMyPawnPayer_Statics; \
public: \
	DECLARE_CLASS(AMyPawnPayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/myThirdProject01"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnPayer)


#define FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPawnPayer(AMyPawnPayer&&); \
	AMyPawnPayer(const AMyPawnPayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnPayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnPayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawnPayer) \
	NO_API virtual ~AMyPawnPayer();


#define FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_9_PROLOG
#define FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRDPROJECT01_API UClass* StaticClass<class AMyPawnPayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_myThirdProject01_Source_myThirdProject01_Public_MyPawnPayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
