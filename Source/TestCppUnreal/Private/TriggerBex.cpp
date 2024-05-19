// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerBex.h"
#include "Components/BoxComponent.h"
#include "TestCppUnreal/TestCppUnrealCharacter.h"

// Sets default values
ATriggerBex::ATriggerBex()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PoloAsticot"));
	SetRootComponent(TriggerBox);
	
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ATriggerBex::BeginOverlap);

}

// Called when the game starts or when spawned
void ATriggerBex::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerBex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerBex::BeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Warning,TEXT("Overlap"));
	ATestCppUnrealCharacter* OverlapperActor = Cast<ATestCppUnrealCharacter>(OtherActor);
	if (OverlapperActor)
	{
		UE_LOG(LogTemp,Warning,TEXT("ActorOverlap"));
	}
}

