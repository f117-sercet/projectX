// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyCharacterCpp.generated.h"

class UInputMappingContext;
class USpringArmComponent;

UCLASS()
class MYTHIRDPROJECT01_API AMyCharacterCpp : public ACharacter{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterCpp();

	// 虚函数
	UFUNCTION(BlueprintCallable, Category="Action")
	virtual void Attack();

	// 添加碰撞体
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=CAMERA_ZOOM_DAMPEN,meta=(AllowPrivateAccess="true"))
	TObjectPtr<USphereComponent> SphereComponent;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);
	void LOOK(const FInputActionValue& Value);

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
    UPROPERTY(EditAnywhere)
	// 数组
	TArray<int32> MyIntArray;

	FORCEINLINE UProjectileMovementComponent* GetProjectileMovementComponent() const {return ProjectMovement;}


	
	

private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=CAMERA_ZOOM_DAMPEN,meta=(AllowPrivateAccess="true"))
	TObjectPtr<USpringArmComponent>CameraBoom;

	//Input
	UPROPERTY(EditDefaultsOnly,Category="Input")
	TObjectPtr<UInputMappingContext> DefaultMapping;

	//Input
	UPROPERTY(EditDefaultsOnly,Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	//Input
	UPROPERTY(EditDefaultsOnly,Category="Input")
	TObjectPtr<UInputAction> LookAction;


	// 添加碰撞体(球体)
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Ball",meta=(AllowPrivateAccess="true"))
	TObjectPtr<USphereComponent> SphereComponentBall;

	// 移动
	TObjectPtr<UProjectileMovementComponent> ProjectMovement;
	
	

	
};
