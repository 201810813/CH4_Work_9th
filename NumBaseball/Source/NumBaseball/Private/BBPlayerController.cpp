// Fill out your copyright notice in the Description page of Project Settings.


#include "BBPlayerController.h"
#include "BBUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "BBFunctionLibrary.h"
#include "BBGameModeBase.h"
#include "BBGameStateBase.h"
#include "BBPlayerState.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


ABBPlayerController::ABBPlayerController()
{
	bReplicates = true;
}

void ABBPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, NotificationText);
}

void ABBPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (!IsLocalController())
	{
		return;
	}
	
	SetInputMode(FInputModeUIOnly());

	if (BBWidgetClass)
	{
		BBWidgetInstance = CreateWidget<UBBUserWidget>(this, BBWidgetClass);
		if (BBWidgetInstance)
		{
			BBWidgetInstance->AddToViewport(0);
		}
	}

	if (NotificationTextWidgetClass)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (NotificationTextWidgetInstance)
		{
			NotificationTextWidgetInstance->AddToViewport(0);
		}
	}
}

void ABBPlayerController::SetChatMassage(const FString& InChatMassage)
{
	CurrentChatMessage = InChatMassage;
	if (IsLocalController() == true)
	{
		//ServerRPCPrintChatMessageString(InChatMassage);
		ABBPlayerState* BBPS = GetPlayerState<ABBPlayerState>();
		if (BBPS)
		{
			//FString CombinedMessageString = BBPS->PlayerNameString + TEXT(": ") + CurrentChatMessage;
			FString CombinedMessageString = BBPS->GetPlayerInfoString() + TEXT(": ") + InChatMassage;
			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
	}
}

void ABBPlayerController::PrintChatMassage(const FString& InChatMassage)
{
	BBFunctionLibrary::MyPrintString(this, InChatMassage, 10.f);
}

void ABBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	/*
	 for (TActorIterator<ABBPlayerController> It(GetWorld()); It; ++It)
	{
		ABBPlayerController* BBPlayerController = *It;
		if (IsValid(BBPlayerController) == true)
		{
			BBPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		}
	}
	*/
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (GM)
	{
		ABBGameModeBase* BBGM = Cast<ABBGameModeBase>(GM);
		if (BBGM)
		{
			BBGM->PrintChatMessage(this, InChatMessageString);
		}
	}
}

void ABBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMassage(InChatMessageString);
}
