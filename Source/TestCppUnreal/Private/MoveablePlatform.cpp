// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveablePlatform.h"

// Sets default values
AMoveablePlatform::AMoveablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JeanPierre"));

	
}

// Called when the game starts or when spawned
void AMoveablePlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveablePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

