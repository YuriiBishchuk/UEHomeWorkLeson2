// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorForStarLevel.h"



#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMyActorForStarLevel::AMyActorForStarLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));

	// in your object constructor create the text object
	Text = CreateDefaultSubobject<UTextRenderComponent>("TextComponent");
	Text->SetTextRenderColor(FColor::Black);
	Text->SetText("");
	Text->AttachTo(Mesh, "SocketName");

}

// Called when the game starts or when spawned
void AMyActorForStarLevel::BeginPlay()
{
	Super::BeginPlay();
	const auto Material = Mesh->GetMaterial(0);
	DynamicMaterial =  UMaterialInstanceDynamic::Create(Material, NULL);
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyActorForStarLevel::ChangeColorActor, 5.0f, true, 0.1f);
	
	
}

// Called every frame
void AMyActorForStarLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorForStarLevel::ChangeColorActor()
{
	float r = UKismetMathLibrary::RandomFloatInRange(0.0f, 1.0f);
	float g = UKismetMathLibrary::RandomFloatInRange(0.0f, 1.0f);
	float b = UKismetMathLibrary::RandomFloatInRange(0.0f, 1.0f);
	FString text = "R:"+FString::SanitizeFloat(r)+"G:"+FString::SanitizeFloat(g)+"B:"+FString::SanitizeFloat(b);
	FLinearColor color = FLinearColor(r, g, b);
	DynamicMaterial->SetVectorParameterValue(FName(TEXT("RandomColor")), color);
	Text->SetText(text);
	Text->SetTextRenderColor(color.ToFColor(true));
}

