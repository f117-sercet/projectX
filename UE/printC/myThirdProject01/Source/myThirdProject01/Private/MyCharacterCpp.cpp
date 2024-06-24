// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterCpp.h"

// Sets default values
AMyCharacterCpp::AMyCharacterCpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

