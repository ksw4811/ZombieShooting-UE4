// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
struct FPlayerDataTable;
class UDataTable;

UCLASS()
class ZOMBIESHOOTING_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	// ������ �� ������(�̾��ϱ⿡�� ���?)
	FString GetPlayerName();
	int GetPlayerHp();
	FString GetPlayerGun();
	int GetPlayerStage();
	float GetPlayerBgmPower();
	void SetPlayerBgmPower(float fBgmPower);
	void SetPlayerDataDefault();

	// Json ���� (����� �̻��)
	//void JsonSave();
	//void JsonLoad();

private:
	UPROPERTY()
		UDataTable* FPlayerTable;
};