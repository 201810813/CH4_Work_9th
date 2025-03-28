// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BBGameModeBase.generated.h"

class ABBPlayerController;

UCLASS()
class NUMBASEBALL_API ABBGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	TArray<TObjectPtr<ABBPlayerController>> PlayerControllers;
	
protected:
	FString SecretNumber;
	
public:
	virtual void OnPostLogin(AController* NewPlayer) override;
	virtual void BeginPlay() override;

	void IncreaseGuessCount(ABBPlayerController* ChattingBBPlayerController);
	void PrintChatMessage(ABBPlayerController* ChattingBBPlayerController, const FString& InChatMessageString);
	FString GenerateSecretNumber();
	bool IsGuessNumberString(const FString& InNumberString);
	FString JudgeNumber(FString& InSecretNumberString, const FString& InChatMessageString);
	void JugdeGame(ABBPlayerController* ChattingBBPlayerController, int StrikeCount);
	void ResetGame();
};
