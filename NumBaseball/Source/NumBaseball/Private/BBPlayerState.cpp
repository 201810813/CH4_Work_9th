// Fill out your copyright notice in the Description page of Project Settings.


#include "BBPlayerState.h"
#include "Net/UnrealNetwork.h"
ABBPlayerState::ABBPlayerState() : PlayerNameString(TEXT("None")), MaxAttempt(5), CurrentAttempt(0)
{
	bReplicates = true;
}

void ABBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PlayerNameString);
	DOREPLIFETIME(ThisClass, CurrentAttempt);
}

FString ABBPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = PlayerNameString + TEXT("(") + FString::FromInt(CurrentAttempt) + TEXT("/") + FString::FromInt(MaxAttempt) + TEXT(")");
	return PlayerInfoString;
}
