// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MyRTSHud.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyRTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_API AMyRTSPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	AMyRTSPlayerController();
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	AMyRTSHud* Hud; 

protected:
	void SelectionPressed();
	void SelectionReleased();
	void MoveReleased();
};
