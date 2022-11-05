// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "MyActorForStarLevel.generated.h"

UCLASS()
class UEHOMEWORKLESON2_API AMyActorForStarLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorForStarLevel();
	FTimerHandle TimerHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ChangeColorActor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
private:
	UMaterialInstanceDynamic* DynamicMaterial;
	UTextRenderComponent* Text;

};
