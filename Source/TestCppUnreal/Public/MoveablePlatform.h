// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveablePlatform.generated.h"

UCLASS()
class TESTCPPUNREAL_API AMoveablePlatform : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="StaticMesh")
	class UStaticMeshComponent* platform;
	
public:	
	// Sets default values for this actor's properties
	AMoveablePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
