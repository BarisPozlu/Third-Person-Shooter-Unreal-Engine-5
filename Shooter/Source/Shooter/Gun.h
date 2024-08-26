

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AGun();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	void AttachToSkeletalMeshComponent(USkeletalMeshComponent* skeletalMeshComponent);
	void Fire();

private:

	UPROPERTY(VisibleAnywhere)
	USceneComponent* sceneComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* skeletalMeshComponent;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* particleSystemComponent;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* audioComponent;
	
	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* hitEffect;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* hitSound;
	
	UPROPERTY(EditDefaultsOnly)
	float shootDistance;

	UPROPERTY(EditDefaultsOnly)
	float damage;
	
	APawn* ownerPawn;
	FTimerHandle effectTimer;

	bool GunLineTrace(FHitResult& hitResult, FVector& rotationVector);
};
