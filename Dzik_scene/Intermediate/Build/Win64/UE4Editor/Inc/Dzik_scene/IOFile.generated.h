// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DZIK_SCENE_IOFile_generated_h
#error "IOFile.generated.h already included, missing '#pragma once' in IOFile.h"
#endif
#define DZIK_SCENE_IOFile_generated_h

#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_SPARSE_DATA
#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execValidateLogin);


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execValidateLogin);


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOFile(); \
	friend struct Z_Construct_UClass_UIOFile_Statics; \
public: \
	DECLARE_CLASS(UIOFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dzik_scene"), NO_API) \
	DECLARE_SERIALIZER(UIOFile)


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUIOFile(); \
	friend struct Z_Construct_UClass_UIOFile_Statics; \
public: \
	DECLARE_CLASS(UIOFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dzik_scene"), NO_API) \
	DECLARE_SERIALIZER(UIOFile)


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOFile(UIOFile&&); \
	NO_API UIOFile(const UIOFile&); \
public:


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOFile(UIOFile&&); \
	NO_API UIOFile(const UIOFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOFile)


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_PRIVATE_PROPERTY_OFFSET
#define Dzik_scene_Source_Dzik_scene_IOFile_h_20_PROLOG
#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_PRIVATE_PROPERTY_OFFSET \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_SPARSE_DATA \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_RPC_WRAPPERS \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_INCLASS \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dzik_scene_Source_Dzik_scene_IOFile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_PRIVATE_PROPERTY_OFFSET \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_SPARSE_DATA \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_INCLASS_NO_PURE_DECLS \
	Dzik_scene_Source_Dzik_scene_IOFile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DZIK_SCENE_API UClass* StaticClass<class UIOFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dzik_scene_Source_Dzik_scene_IOFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
