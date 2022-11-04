// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorForStarLevel.h"

// Sets default values
AMyActorForStarLevel::AMyActorForStarLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorForStarLevel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorForStarLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

