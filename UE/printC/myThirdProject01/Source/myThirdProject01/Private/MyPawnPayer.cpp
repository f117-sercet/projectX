// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawnPayer.h"

// Sets default values
AMyPawnPayer::AMyPawnPayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// LinTrace
// Called when the game starts or when spawned
void AMyPawnPayer::BeginPlay()
{
	Super::BeginPlay();
	LineTrance
	
}

// Called every frame
void AMyPawnPayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawnPayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

