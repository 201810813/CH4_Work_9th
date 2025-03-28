// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BBPlayerController.generated.h"

class UBBUserWidget;

UCLASS()
class NUMBASEBALL_API ABBPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category = "Widget")
	TSubclassOf<UBBUserWidget> BBWidgetClass;
	UPROPERTY()
	TObjectPtr<UBBUserWidget> BBWidgetInstance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;
	
protected:
	FString CurrentChatMessage;
	
public:
	ABBPlayerController();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	void SetChatMassage(const FString& InChatMassage);
	void PrintChatMassage(const FString& InChatMassage);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InChatMessageString);

	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;
};
