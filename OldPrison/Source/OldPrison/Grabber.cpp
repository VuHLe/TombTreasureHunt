// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

}

//--------------------------------------------------------------------------------------------------------------
// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Handle physics component
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle == nullptr)
	{
		return;
	}

	if (PhysicsHandle->GetGrabbedComponent() != nullptr)
	{
		// When grab and hold on actor, the actor will move and follow where player move
		FVector NewTargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(NewTargetLocation, GetComponentRotation());
	}	
}

//--------------------------------------------------------------------------------------------------------------
// Get hit result by using SweepSingleByChannel()
bool UGrabber::GetGrabbableInReach( FHitResult& OutHitResult) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGrabDistance;

	//DrawDebugLine(GetWorld(), Start, End, FColor::Red); // Create debug line in game world to see
	//DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5); // draw a debug sphere when Grab() func active

	FCollisionShape SphereZone = FCollisionShape::MakeSphere(GrabRadius); // create sphere zone, where player can grab the actors
	// Check if the player recognize the actors
	bool HasHit = GetWorld()->SweepSingleByChannel(
		OutHitResult, 
		Start, End, 
		FQuat::Identity, 
		ECC_GameTraceChannel2, 
		SphereZone
	);
	return HasHit;
}

//--------------------------------------------------------------------------------------------------------------
void UGrabber::Release()
{
	// Handle physics component
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle == nullptr)
	{
		return;
	}

	if (PhysicsHandle->GetGrabbedComponent() != nullptr)
	{
		PhysicsHandle->GetGrabbedComponent()->WakeAllRigidBodies(); // wake up the actor, so it is respond to physic handel correctly

		AActor* GrabbingActor = PhysicsHandle->GetGrabbedComponent()->GetOwner(); // get the actor that are grabbing
		GrabbingActor->Tags.Remove("Grabbing"); // remove "Grabbing" tags when release actor

		PhysicsHandle->ReleaseComponent(); // release whatever component is grabbed by player
	}
}

//--------------------------------------------------------------------------------------------------------------
// GRAB and INTERACT with world's actors
void UGrabber::Grab()
{
	// Handle physics component
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle != nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Got Physics Handle: %s"), *PhysicsHandle->GetName());
	}
	else 
	{
		UE_LOG(LogTemp, Error, TEXT("No Physics Handle Found!"));
	}

	// Get hit result by using SweepSingleByChannel()
	FHitResult HitResult;
	bool HasHit = GetGrabbableInReach(HitResult);

	// Use Physics handle to grab actor in game
	if(HasHit)
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		// if grab again from trigger component
		HitComponent->SetSimulatePhysics(true); 
		HitComponent->WakeAllRigidBodies(); // wake up the actor, so it is respond to physic handel correctly

		AActor* HitActor = HitResult.GetActor();
		HitActor->Tags.Add("Grabbing"); // add tag name to the actor when grab it
		HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform); // detach the grabbing actor that is on the trigger away from the trigger

		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitComponent, 
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation());
	}
}


