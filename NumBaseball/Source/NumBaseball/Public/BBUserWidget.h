// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BBUserWidget.generated.h"

class UEditableTextBox;

UCLASS()
class NUMBASEBALL_API UBBUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY(meta = (BindWidget))
    TObjectPtr<UEditableTextBox> BBTextBox;

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& NewText, ETextCommit::Type CommitType);	
};
