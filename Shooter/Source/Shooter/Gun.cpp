

#include "Gun.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

// Sets default values
AGun::AGun() : shootDistance(1000), damage(25)
{
	PrimaryActorTick.bCanEverTick = true;
	
	RootComponent = sceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	skeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	skeletalMeshComponent->SetupAttachment(RootComponent);

	particleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
	particleSystemComponent->SetupAttachment(RootComponent);

	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	audioComponent->SetupAttachment(RootComponent);
}

void AGun::BeginPlay()
{
	Super::BeginPlay();
	
	particleSystemComponent->Deactivate();
	audioComponent->Deactivate();
}

void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::AttachToSkeletalMeshComponent(USkeletalMeshComponent* inComponent) // after calling AttachToComponent on the root component, children gets detached
{
	AttachToComponent(inComponent, FAttachmentTransformRules::KeepRelativeTransform, TEXT("weaponSocket"));
	skeletalMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	particleSystemComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ownerPawn = Cast<APawn>(GetOwner());
}

void AGun::Fire()
{
	particleSystemComponent->Activate();
	GetWorld()->GetTimerManager().SetTimer(effectTimer, [this](){ particleSystemComponent->Deactivate(); }, 0.1f, false);

	audioComponent->Activate();

	FHitResult hitResult;
	FVector rotationVector;

	GunLineTrace(hitResult, rotationVector);

	if (hitResult.bBlockingHit)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, hitEffect, hitResult.ImpactPoint, (-rotationVector).Rotation());
		UGameplayStatics::PlaySoundAtLocation(this, hitSound, hitResult.ImpactPoint, (-rotationVector).Rotation(), 0.5);
		UGameplayStatics::ApplyDamage(hitResult.GetActor(), damage, ownerPawn->GetController(), this, UDamageType::StaticClass());
	}
	
}

bool AGun::GunLineTrace(FHitResult& hitResult, FVector& rotationVector)
{
	FVector cameraLocation;
	FRotator cameraRotation;
	ownerPawn->GetController()->GetPlayerViewPoint(cameraLocation, cameraRotation);

	rotationVector = cameraRotation.Vector();
	FVector endLocation = cameraLocation + rotationVector * shootDistance;
	
	FCollisionQueryParams params;
	params.AddIgnoredActor(GetOwner());
	
	return GetWorld()->LineTraceSingleByChannel(hitResult, cameraLocation, endLocation, ECC_Visibility, params);
}
