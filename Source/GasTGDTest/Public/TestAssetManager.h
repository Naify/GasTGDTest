// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "TestAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class GASTGDTEST_API UTestAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:

	virtual void StartInitialLoading() override;
};
