// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		void MenuSetup();

protected:
	virtual bool Initialize();

private:
	//To use BindWidget, the ame of the variable must be the same name of the Button or the thing u want to bind
	UPROPERTY(meta = (BindWidget))
		class UButton* HostButton;
		UButton* JoinButton;

	UFUNCTION()
		void HostButtonClicked();
	
	UFUNCTION()
		void JoinButtonClicked();

	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;
};
