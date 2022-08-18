// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "MovingWall.h"
#include "TriggerComponent.generated.h"


/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class OLDPRISON_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTriggerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// func to connect MovingWall.cpp and .h to run with
	UFUNCTION(BlueprintCallable)
	void SetMover(UMovingWall* MovingWall); 

private:
	UPROPERTY(EditAnywhere)
	FName UnlockActorTag; // Name for the specific actor tag to unlock wall

	UMovingWall* MovingWall;

	AActor* GetAcceptableActor() const;
};
