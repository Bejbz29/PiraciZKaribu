// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dzik_scene/IOFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOFile() {}
// Cross Module References
	DZIK_SCENE_API UClass* Z_Construct_UClass_UIOFile_NoRegister();
	DZIK_SCENE_API UClass* Z_Construct_UClass_UIOFile();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Dzik_scene();
// End Cross Module References
	DEFINE_FUNCTION(UIOFile::execStartSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIOFile::StartSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOFile::execValidateLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_login);
		P_GET_PROPERTY(FStrProperty,Z_Param_password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UIOFile::ValidateLogin(Z_Param_login,Z_Param_password);
		P_NATIVE_END;
	}
	void UIOFile::StaticRegisterNativesUIOFile()
	{
		UClass* Class = UIOFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSession", &UIOFile::execStartSession },
			{ "ValidateLogin", &UIOFile::execValidateLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOFile_StartSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOFile_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Keywords", "SaveTxt" },
		{ "ModuleRelativePath", "IOFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOFile_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOFile, nullptr, "StartSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOFile_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOFile_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOFile_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIOFile_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOFile_ValidateLogin_Statics
	{
		struct IOFile_eventValidateLogin_Parms
		{
			FString login;
			FString password;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_login;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IOFile_eventValidateLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IOFile_eventValidateLogin_Parms), &Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IOFile_eventValidateLogin_Parms, password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_login = { "login", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IOFile_eventValidateLogin_Parms, login), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::NewProp_login,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Keywords", "ValidateLogin" },
		{ "ModuleRelativePath", "IOFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOFile, nullptr, "ValidateLogin", nullptr, nullptr, sizeof(IOFile_eventValidateLogin_Parms), Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOFile_ValidateLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIOFile_ValidateLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIOFile_NoRegister()
	{
		return UIOFile::StaticClass();
	}
	struct Z_Construct_UClass_UIOFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Dzik_scene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOFile_StartSession, "StartSession" }, // 3002906525
		{ &Z_Construct_UFunction_UIOFile_ValidateLogin, "ValidateLogin" }, // 1396715898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IOFile.h" },
		{ "ModuleRelativePath", "IOFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIOFile_Statics::ClassParams = {
		&UIOFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIOFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIOFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIOFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIOFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIOFile, 1129043516);
	template<> DZIK_SCENE_API UClass* StaticClass<UIOFile>()
	{
		return UIOFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIOFile(Z_Construct_UClass_UIOFile, &UIOFile::StaticClass, TEXT("/Script/Dzik_scene"), TEXT("UIOFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
