// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveComponent.h"

// Sets default values for this component's properties
UInteractiveComponent::UInteractiveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractiveComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	AActor* Owner = GetOwner();
	TArray<UPrimitiveComponent*> Primitives;
	Owner->GetComponents<UPrimitiveComponent>(Primitives);

	for (UPrimitiveComponent* comp : Primitives)
	{
		comp->SetGenerateOverlapEvents(true);
	}
}


// Called every frame
void UInteractiveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractiveComponent::StartLookAt(const AActor* from)
{
}

void UInteractiveComponent::EndLookAt(const AActor* from)
{
}

void UInteractiveComponent::TriggerInteract(const AActor* from)
{
}

