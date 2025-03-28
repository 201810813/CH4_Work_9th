// Fill out your copyright notice in the Description page of Project Settings.


#include "BBGameModeBase.h"

#include <tiffio.h>

#include "BBGameStateBase.h"
#include "BBPlayerController.h"
#include "BBPlayerState.h"
#include "EngineUtils.h"

class ABBPlayerState;

void ABBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	/*
	Super::OnPostLogin(NewPlayer);
	ABBGameStateBase* BBGameStateBase = GetGameState<ABBGameStateBase>();
	if (IsValid(BBGameStateBase) == true)
	{
		BBGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXXX"));
	}

	ABBPlayerController* BBPC = Cast<ABBPlayerController>(NewPlayer);
	if (BBPC)
	{
		PlayerControllers.Add(BBPC);
	}
	*/
	ABBPlayerController* BBPlayerController = Cast<ABBPlayerController>(NewPlayer);
	if (IsValid(BBPlayerController) == true)
	{
		BBPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
		PlayerControllers.Add(BBPlayerController);

		ABBPlayerState* BBPS = BBPlayerController->GetPlayerState<ABBPlayerState>();
		if (BBPS)
		{
			BBPS->PlayerNameString = TEXT("Player") + FString::FromInt(PlayerControllers.Num());
		}

		ABBGameStateBase* CXGameStateBase =  GetGameState<ABBGameStateBase>();
		if (IsValid(CXGameStateBase) == true)
		{
			CXGameStateBase->MulticastRPCBroadcastLoginMessage(BBPS->PlayerNameString);
		}
	}
	
}

void ABBGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SecretNumber = GenerateSecretNumber();
}

void ABBGameModeBase::IncreaseGuessCount(ABBPlayerController* ChattingBBPlayerController)
{
	ABBPlayerState* BBPS = ChattingBBPlayerController->GetPlayerState<ABBPlayerState>();
	if (IsValid(BBPS) == true)
	{
		BBPS->CurrentAttempt++;
	}
}

void ABBGameModeBase::PrintChatMessage(ABBPlayerController* InChattingBBPlayerController, const FString& InChatMessageString)
{
	FString ChatMessageString = InChatMessageString;
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);
	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeNumber(SecretNumber, GuessNumberString);
		IncreaseGuessCount(InChattingBBPlayerController);
		for (TActorIterator<ABBPlayerController> It(GetWorld()); It; ++It)
		{
			ABBPlayerController* BBPlayerController = *It;
			if (IsValid(BBPlayerController) == true)
			{
				ABBPlayerState* BBPS = InChattingBBPlayerController->GetPlayerState<ABBPlayerState>();
				if (BBPS)
				{
					if (BBPS->CurrentAttempt >= BBPS->MaxAttempt)
					{
						BBPlayerController->ClientRPCPrintChatMessageString(FString(TEXT("기회가 끝났습니다.")));
						return;
					}
				}
				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JugdeGame(InChattingBBPlayerController, StrikeCount);
				FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
				BBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
			}
		}
	}
	else
	{
		for (TActorIterator<ABBPlayerController> It(GetWorld()); It; ++It)
		{
			ABBPlayerController* CXPlayerController = *It;
			if (IsValid(CXPlayerController) == true)
			{
				CXPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
	}
}

FString ABBGameModeBase::GenerateSecretNumber()
{
	TArray<int32> PossibleNumbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		PossibleNumbers.Add(i);
	}

	TArray<int32> SecretNumbers;
	
	for (int32 i = 0; i < 3; ++i)
	{
		int32 RandomIndex = FMath::RandRange(0, PossibleNumbers.Num() - 1);
		int32 RandomNumber = PossibleNumbers[RandomIndex];
		SecretNumbers.Add(RandomNumber);
		
		PossibleNumbers.RemoveAt(RandomIndex);
	}
	
	FString SecretNumberString = FString::Printf(TEXT("%d%d%d"), SecretNumbers[0], SecretNumbers[1], SecretNumbers[2]);
	return SecretNumberString;
}

bool ABBGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {
		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}
			
			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
		
	} while (false);	

	return bCanPlay;
}	

FString ABBGameModeBase::JudgeNumber(FString& InSecretNumberString, const FString& InChatMessageString)
{
	int32 StrikeCount = 0, BallCount = 0;
	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InChatMessageString[i])
		{
			StrikeCount++;
		}
		else 
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InChatMessageString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;				
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("하나도 안맞습니다.;;");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ABBGameModeBase::JugdeGame(ABBPlayerController* ChattingBBPlayerController, int StrikeCount)
{
	if (3 == StrikeCount)
	{
		ABBPlayerState* CXPS = ChattingBBPlayerController->GetPlayerState<ABBPlayerState>();
		for (const auto& CXPlayerController : PlayerControllers)
		{
			if (IsValid(CXPS) == true)
			{
				FString CombinedMessageString = CXPS->PlayerNameString + TEXT(" has won the game.");
				CXPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& BBPlayerController : PlayerControllers)
		{
			ABBPlayerState* BBPS = BBPlayerController->GetPlayerState<ABBPlayerState>();
			if (IsValid(BBPS) == true)
			{
				if (BBPS->CurrentAttempt < BBPS->MaxAttempt)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& CXPlayerController : PlayerControllers)
			{
				CXPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}

void ABBGameModeBase::ResetGame()
{
	SecretNumber = GenerateSecretNumber();

	for (const auto& CXPlayerController : PlayerControllers)
	{
		ABBPlayerState* CXPS = CXPlayerController->GetPlayerState<ABBPlayerState>();
		if (IsValid(CXPS) == true)
		{
			CXPS->CurrentAttempt = 0;
		}
	}
}
