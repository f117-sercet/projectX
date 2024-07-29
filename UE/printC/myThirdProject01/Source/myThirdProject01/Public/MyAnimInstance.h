// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "myThirdProject01/myThirdProject01Character.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class  UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	 // 三个属性
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<APlayerController> PlayerCharacter;
	UPROPERTY(BlueprintReadOnly)
	float Speed;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<APlayerController> PlayerCharacterMovement;
	

	 
	
};
