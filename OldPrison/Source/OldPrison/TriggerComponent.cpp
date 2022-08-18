// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent() 
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

//--------------------------------------------------------------------------------------------------------------
// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

    UE_LOG(LogTemp, Display, TEXT("Trigger Component Active"));
}

//--------------------------------------------------------------------------------------------------------------
// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Get the actor that use to unlock wall
    AActor* AcceptableActor = GetAcceptableActor();
    if (AcceptableActor == nullptr)
    {
        MovingWall->SetShouldMove(false);
    }
    else
    {
        // The actor that used to unlock the wall,
        // will attach to the wall component, and disable its physics, so it will go down with the wall 
        UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(AcceptableActor->GetRootComponent());
        if (Component != nullptr)
        {
             Component->SetSimulatePhysics(false);
        }
        AcceptableActor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);

        
        MovingWall->SetShouldMove(true);
    }
    
}

//--------------------------------------------------------------------------------------------------------------
void UTriggerComponent::SetMover(UMovingWall* NewMovingWall)
{
    MovingWall = NewMovingWall;
}

//--------------------------------------------------------------------------------------------------------------
// Get the actor that use to unlock wall
AActor* UTriggerComponent::GetAcceptableActor() const
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    for(int32 i = 0; i < Actors.Num(); i++) 
    {
        if (Actors[i]->ActorHasTag(UnlockActorTag) == true 
            && Actors[i]->ActorHasTag("Grabbing") == false)
        {
            return Actors[i];
        }
    }

    return nullptr;
}
