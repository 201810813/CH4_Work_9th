// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenerateNumLibrary.generated.h"

UCLASS()
class SAMPLECHAT_API UGenerateNumLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "GenerateNumLibrary")
	static TArray<int32> GetRandomNumber(int32 Length, int32 min, int32 max);
};
