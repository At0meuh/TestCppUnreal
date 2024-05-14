#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReactToTriggerInterface.h"
#include "InteractObject.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGrabbedOject);

UCLASS(BlueprintType, Category="MyGame")
class AInteractObject : public AActor, public IReactToTriggerInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* Mesh;
	
public:

	FOnGrabbedOject OnGrabbedObjectDelegate;
	
	AInteractObject();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	
	
	// Blueprint Native Event override
	virtual bool ReactToTrigger_Implementation() override;

	virtual void TestInterfaceCall_Implementation() override;
};