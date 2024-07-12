// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterCpp.generated.h"

class USpringArmComponent;

UCLASS()
class MYTHIRDPROJECT01_API AMyCharacterCpp : public ACharacter{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterCpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Uproperty 属性
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float testLens = 0.1f;
	// Uproperty 属性
	// Callable
	UFUNCTION(BlueprintCallable)
	void  CallableFunction();

private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=CAMERA_ZOOM_DAMPEN,meta=(AllowPrivateAccess="true"))
	TObjectPtr<USpringArmComponent>CameraBoom;

	//Input
	UPROPERTY(EditDefaultsOnly,Category="Input")
	TObjectPtr<UInputMappingContext> DefaultMapping;

	//Input
	UPROPERTY(EditDefaultsOnly,Category="Input")
	TObjectPtr<UInputAction> DefaultMappingAction;
};
