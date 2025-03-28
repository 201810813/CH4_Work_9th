// Fill out your copyright notice in the Description page of Project Settings.


#include "BBPawn.h"
#include "BBFunctionLibrary.h"

// Sets default values
ABBPawn::ABBPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ABBPawn::BeginPlay()
{
	Super::BeginPlay();
	FString NetModeString = BBFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::BeginPlay() %s [%s]"), *BBFunctionLibrary::GetNetModeString(this), *NetModeString);
	BBFunctionLibrary::MyPrintString(this, CombinedString, 5.f);
}

void ABBPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	FString NetModeString = BBFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::PossessedBy() %s [%s]"), *BBFunctionLibrary::GetNetModeString(this), *NetModeString);
	BBFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}


