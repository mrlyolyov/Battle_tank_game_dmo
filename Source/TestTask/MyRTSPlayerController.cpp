// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSPlayerController.h"

AMyRTSPlayerController::AMyRTSPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AMyRTSPlayerController::BeginPlay() 
{
	Hud = Cast<AMyRTSHud>(GetHUD());
}

void AMyRTSPlayerController::SetupInputComponent()
{
	InputComponent->BindAction("LeftMouseClicked",IE_Pressed,this,&AMyRTSPlayerController::SelectionPressed);
	InputComponent->BindAction("LeftMouseClicked", IE_Released, this, &AMyRTSPlayerController::SelectionReleased);
	InputComponent->BindAction("RightMouseClicked", IE_Released, this, &AMyRTSPlayerController::MoveReleased);
}

void AMyRTSPlayerController::SelectionPressed()
{
	Hud->InitialPoint = Hud->GetMousePossition();
	Hud->bStartSelect = true;
}

void AMyRTSPlayerController::SelectionReleased()
{

}

void AMyRTSPlayerController::MoveReleased()
{

}
