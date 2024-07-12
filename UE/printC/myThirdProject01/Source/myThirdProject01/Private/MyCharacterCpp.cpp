// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterCpp.h"
#include "Camera/CameraComponent.h"
# include "GameFramework/SpringArmComponent.h"

// Sets default values
AMyCharacterCpp::AMyCharacterCpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	 CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	// 挂到根节点
	CameraBoom->SetupAttachment(RootComponent);
	// 设置相机杆
	CameraBoom->TargetArmLength = 600.f;
	// 调整角度
	CameraBoom->SetRelativeRotation(FRotator(-40.F,0.F,0.F));
	 auto PlayerCamera= CreateDefaultSubobject<USpringArmComponent>("Player Camera");
	// 附着某一个位置
	PlayerCamera->SetupAttachment(CameraBoom,USpringArmComponent::SocketName);
	//PlayerCamera->SetupAttachment(GetMesh(),FName("RootSocket"));
}

// Called when the game starts or when spawned
void AMyCharacterCpp::BeginPlay()
{
	Super::BeginPlay();
	// 打log
	GEngine->AddOnScreenDebugMessage(-1,0,FColor::Blue,FString::Printf(TEXT("Camera Boom:TargetArmLength:%f"),CameraBoom->TargetArmLength));
	
}
void AMyCharacterCpp::CallableFunction(){
	
	UE_LOG(LogTemp,Warning,TEXT("Callable"));
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
