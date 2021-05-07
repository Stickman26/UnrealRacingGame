// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomMathOps.h"

FVector UCustomMathOps::AddToVector(FVector vec, float x = 0, float y = 0, float z = 0)
{
	vec.X += x;
	vec.Y += y;
	vec.Z += z;
	return vec;
}