// Fill out your copyright notice in the Description page of Project Settings.

#include "ReactToTriggerInterface.h"
#include "Engine/World.h"

#include "KismetTraceUtils.h"
#include "Analytics/RPCDoSDetectionAnalytics.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

void IReactToTriggerInterface::StartGrab(const AActor* Grabber, const FHitResult& Hit)
{
	UPhysicsHandleComponent*GrabberPhysicsComp = Cast<UPhysicsHandleComponent>(Grabber->GetComponentByClass(UPhysicsHandleComponent::StaticClass()));
	if (Hit.bBlockingHit && Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>() && GrabberPhysicsComp)
	{
		GrabberPhysicsComp->GrabComponentAtLocation(Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>(),"None",Hit.Location);
	}
}








