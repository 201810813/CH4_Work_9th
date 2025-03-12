// Fill out your copyright notice in the Description page of Project Settings.


#include "GenerateNumLibrary.h"

TArray<int32> UGenerateNumLibrary::GetRandomNumber(int32 Length, int32 min, int32 max)
{
	TArray<int32> result;
	while (result.Num() < Length)
	{
		int32 NewNum = FMath::RandRange(min, max);
		if (!result.Contains(NewNum))
		{
			result.Emplace(NewNum);
		}
	}
	return result;
}
