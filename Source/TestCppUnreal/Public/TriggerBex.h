// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerBex.generated.h"



UCLASS()

class TESTCPPUNREAL_API ATriggerBex : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category="Trigger")
	class UBoxComponent* TriggerBox;
	
	
public:	
	// Sets default values for this actor's properties
	ATriggerBex();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
	void BeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
