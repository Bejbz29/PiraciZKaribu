// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IOFile.generated.h"

using namespace std;

/**
 * 
 */
UCLASS()
class DZIK_SCENE_API UIOFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() 
	public:
		UFUNCTION(BlueprintPure, Category = "File", meta = (Keywords = "ValidateLogin"))
			static bool ValidateLogin(FString login, FString password);

		UFUNCTION(BlueprintCallable, Category = "File", meta = (Keywords = "SaveTxt"))
			static void StartSession();
	
};
