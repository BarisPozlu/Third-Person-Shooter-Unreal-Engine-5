

#include "ShooterPawn.h"
#include "Gun.h"
#include "ShooterPawnGameMode.h"


AShooterPawn::AShooterPawn() : currentSpeed(0), currentAngle(0), dead(false), maxWalkSpeed(600), jumpSpeed(200), maxHealth(100), health(0)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AShooterPawn::BeginPlay()
{
	Super::BeginPlay();
	
	skeletalMeshComponent = GetComponentByClass<USkeletalMeshComponent>();
	skeletalMeshComponent->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);

	gun = GetWorld()->SpawnActor<AGun>(gunClass);
	if (gun)
	{
		gun->SetOwner(this);                                                               												                    
		gun->AttachToSkeletalMeshComponent(skeletalMeshComponent);
	}
	
	health = maxHealth;
	OnTakeAnyDamage.AddDynamic(this, &AShooterPawn::OnTakeDamage);
}

void AShooterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float AShooterPawn::GetNormalizedHealth()
{
	return health / maxHealth;
}

void AShooterPawn::Shoot()
{
	if (gun)
	{
		gun->Fire();
	}
}

void AShooterPawn::OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (dead) return;

	if (Damage < health)
	{
		health -= Damage;
	}

	else
	{
		health = 0;
		dead = true;

		UPrimitiveComponent* primitiveRoot = Cast<UPrimitiveComponent>(RootComponent);
		primitiveRoot->SetSimulatePhysics(false);
		primitiveRoot->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

		Cast<AShooterPawnGameMode>(GetWorld()->GetAuthGameMode())->PawnKilled(this);
		onPawnDeath.Execute();
	}
	
}
