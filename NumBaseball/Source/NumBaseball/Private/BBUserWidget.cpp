// Fill out your copyright notice in the Description page of Project Settings.


#include "BBUserWidget.h"

#include "BBPlayerController.h"
#include "Components/EditableTextBox.h"

void UBBUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (BBTextBox->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == false)
	{
		BBTextBox->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UBBUserWidget::NativeDestruct()
{
	Super::NativeDestruct();
	if (BBTextBox->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true)
	{
		BBTextBox->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UBBUserWidget::OnChatInputTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	if (CommitType == ETextCommit::OnEnter)
	{
		if (APlayerController* PC = GetOwningPlayer())
		{
			ABBPlayerController* BPC = Cast<ABBPlayerController>(PC);
			if (BPC)
			{
				BPC->SetChatMassage(NewText.ToString());
				BBTextBox->SetText(FText());
			}
		}
	}
}
