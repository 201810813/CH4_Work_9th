// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatBlueprintFunctionLibrary.h"

FString UChatBlueprintFunctionLibrary::GetMyFirstCPP()
{
	return FString(TEXT("Hello CPP lib in BP"));
}
