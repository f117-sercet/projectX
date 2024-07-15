// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterCpp.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
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
	if (const ULocalPlayer*Player = (GEngine&&GetWorld())?GEngine->GetFirstGamePlayer(GetWorld()):nullptr)
	{

		// 引入输入增强子系统
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Player);

		// 注入上下文
		if (DefaultMapping)
		{
			Subsystem->AddMappingContext(DefaultMapping,0);
		}
		
	}
	
}

void AMyCharacterCpp::Move(const FInputActionValue& Value)
{
	FVector2D MoveVector = Value.Get<FVector2D>();
	if (Controller)
	{
		// 偏航角
		const FRotator  Rotator = Controller->GetControlRotation();
		const FRotator YawRotation(0,Rotator.Yaw,0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(ForwardDirection,MoveVector.X);
		AddMovementInput(ForwardDirection,MoveVector.Y);
	}
}

void AMyCharacterCpp::LOOK(const FInputActionValue& Value)
{

	FVector2D lookVector = Value.Get<FVector2D>();
	if (Controller)
	{
		// 偏航
		AddControllerYawInput(lookVector.X);
		//俯仰
		AddControllerPitchInput(lookVector.Y);
		
	}
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

	if (UEnhancedInputComponent* enhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		enhancedInputComponent->BindAction(LookAction,ETriggerEvent::Triggered,this,&AMyCharacterCpp::LOOK);
		enhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AMyCharacterCpp::Move);
	}

}
