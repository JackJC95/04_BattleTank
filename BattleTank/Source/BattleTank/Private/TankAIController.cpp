// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	if (!GetAIControlledTank())
	{
		UE_LOG(LogTemp, Error, TEXT("No AI controlled tank found"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controlling tank called: %s"), *(GetAIControlledTank()->GetName()))
	}
	
}

ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
}



