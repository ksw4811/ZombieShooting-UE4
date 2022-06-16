// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ZombieShooting.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class ZOMBIESHOOTING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* SpringArm;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class UCameraComponent* Camera;

	/*
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRange;

	UPROPERTY(VisibleInstanceOnly, Replicated, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackPower;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRadius;

	UPROPERTY(VisibleInstanceOnly, Replicated, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;

	UPROPERTY(VisibleInstanceOnly, Replicated, Category = Speed)
		float fSprintSpeedMultiPlayer; // �޸���
	*/
	//UPROPERTY(VisibleInstanceOnly, Replicated, Category = Animation)
	//UPROPERTY(VisibleInstanceOnly, Category = Animation)
		//class UABAnimInstance* ABAnim;

private:
	//UFUNCTION(NetMulticast, Reliable)
	void UpDown(float NewAxisValue);
	//UFUNCTION(NetMulticast, Reliable)
	void LeftRight(float NewAxisValue);
	//UFUNCTION(NetMulticast, Reliable)
	void LookUp(float NewAxisValue);
	//UFUNCTION(NetMulticast, Reliable)
	void Turn(float NewAxisValue);
};
