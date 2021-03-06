// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseWidget.generated.h"

class USoundCue;


UCLASS()
class SHOOTER_API UBaseWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void Show();

protected:

	UPROPERTY(meta = (BindWidgetAnim), Transient)
		UWidgetAnimation* ShowAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sound")
		USoundCue* OpenSound;
};
