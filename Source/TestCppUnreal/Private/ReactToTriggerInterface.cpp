// Fill out your copyright notice in the Description page of Project Settings.

#include "ReactToTriggerInterface.h"
#include "Engine/World.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


void IReactToTriggerInterface::StartGrab(const AActor* Grabber, const FHitResult& Hit)
{
		
	UPhysicsHandleComponent* GrabberPhysicsComp = Cast<UPhysicsHandleComponent>(Grabber->GetComponentByClass(UPhysicsHandleComponent::StaticClass()));
	
	if (Hit.bBlockingHit && Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>()->IsSimulatingPhysics() && GrabberPhysicsComp)
	{
		GrabberPhysicsComp->GrabComponentAtLocation(Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>(),"None",Hit.Location);
	}
}








