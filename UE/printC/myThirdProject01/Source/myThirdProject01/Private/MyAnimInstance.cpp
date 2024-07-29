// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

void UMyAnimInstance::NativeInitializeAnimation()
{
	// 继承父类
	Super::NativeInitializeAnimation();

	PlayerCharacter = Cast<APlayerController>(TryGetPawnOwner());
	if (PlayerCharacter)
	{
		PlayerCharacterMovement = 0;
	}
	
}
void UMyAnimInstance::NativeUpdateAnimation(float updateTime)
{
	Super::NativeUpdateAnimation(updateTime);

	if (PlayerCharacterMovement)
	{
		Speed = 0;
	}
}


