// Fill out your copyright notice in the Description page of Project Settings.


#include "RacerPawn.h"

// Sets default values
ARacerPawn::ARacerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARacerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARacerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARacerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ARacerPawn::ShiftGears(int gear, bool &canShift)
{
	if (gear == currentGear + 1 || gear == currentGear - 1)
	{
		canShift = true;
		return speedVals[gear - 1];
	}
	else
	{
		canShift = false;
		return speedVals[currentGear - 1];
	}
}

