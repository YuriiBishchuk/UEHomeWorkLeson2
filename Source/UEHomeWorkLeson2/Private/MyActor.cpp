// Fill out your copyright notice in the Description page of Project Settings.
#include "UEHomeWorkLeson2/Public/MyActor.h"

#include "Engine/World.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	if (GHideAfterSecond > 0) {
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyActor::HideActor, GHideAfterSecond, false, GHideAfterSecond);
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::HideActor()
{
	SetActorHiddenInGame(true);

}

