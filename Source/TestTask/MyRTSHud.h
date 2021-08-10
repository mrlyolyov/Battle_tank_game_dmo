// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyRTSHud.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_API AMyRTSHud : public AHUD
{
	GENERATED_BODY()
	
public:

	virtual void DrawHUD() override;//
	
	FVector2D InitialPoint; // Possition on mouse on screen when pressed
	FVector2D CurrentPoint; // Possition on mouse on screen while holding.
	FVector2D GetMousePossition(); //

	bool bStartSelect= false;

};
