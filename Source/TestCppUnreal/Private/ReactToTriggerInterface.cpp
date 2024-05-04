// Fill out your copyright notice in the Description page of Project Settings.

#include "ReactToTriggerInterface.h"
#include "Engine/World.h"

#include "KismetTraceUtils.h"
#include "Analytics/RPCDoSDetectionAnalytics.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

void StartGrab(const AActor& Grabber,FHitResult& Hit)
{
	
	if (Hit.bBlockingHit & Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>)
	{
		UPhysicsHandleComponent*GrabberPhysicsComp = Cast<UPhysicsHandleComponent>(Grabber.GetComponentByClass(UPhysicsHandleComponent::StaticClass()));
		GrabberPhysicsComp->GrabComponentAtLocation(Hit.GetActor()->FindComponentByClass<UStaticMeshComponent>,"None",Hit.Location);
	}
}
