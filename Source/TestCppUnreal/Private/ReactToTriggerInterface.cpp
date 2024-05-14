// Fill out your copyright notice in the Description page of Project Settings.

#include "ReactToTriggerInterface.h"

#include "InteractObject.h"
#include "Engine/World.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "TestCppUnreal/TestCppUnrealCharacter.h"


void IReactToTriggerInterface::StartGrab(AActor* Grabber, const FHitResult& Hit)
{
		
	UPhysicsHandleComponent* GrabberPhysicsComp = Cast<UPhysicsHandleComponent>(Grabber->GetComponentByClass(UPhysicsHandleComponent::StaticClass()));
	AInteractObject* Object = Cast<AInteractObject>(Hit.GetActor());
	ATestCppUnrealCharacter* player = Cast<ATestCppUnrealCharacter>(Grabber);
	
	if (Hit.bBlockingHit && Object && player && Object->FindComponentByClass<UStaticMeshComponent>()->IsSimulatingPhysics() && GrabberPhysicsComp)
	{
		UE_LOG(LogTemp,Warning,TEXT("ui"))
		GrabberPhysicsComp->GrabComponentAtLocation(Object->FindComponentByClass<UStaticMeshComponent>(),"None",Hit.Location);
		Object->OnGrabbedObjectDelegate.AddDynamic(player,&ATestCppUnrealCharacter::ReleaseGrab);
		
	}
}








