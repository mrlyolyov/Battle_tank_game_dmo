// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSHud.h"


void AMyRTSHud::DrawHUD()
{
	if(bStartSelect)
	{
		CurrentPoint = GetMousePossition();

		DrawRect(FLinearColor(0, 0, 1, .15f), InitialPoint.X, InitialPoint.Y, CurrentPoint.X - InitialPoint.X, CurrentPoint.Y - InitialPoint.Y);
	}
}



FVector2D AMyRTSHud::GetMousePossition()
{
	float possitionX;
	float possitionY;
	GetOwningPlayerController()->GetMousePosition(possitionX,	possitionY);

	return FVector2D(possitionX, possitionY);
}
