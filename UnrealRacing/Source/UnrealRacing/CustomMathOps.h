// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomMathOps.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UNREALRACING_API UCustomMathOps : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
		static FVector AddToVector(FVector vec, float x, float y, float z);
};
