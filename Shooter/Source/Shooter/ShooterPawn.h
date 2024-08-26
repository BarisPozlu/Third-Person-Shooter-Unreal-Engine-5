

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShooterPawn.generated.h"

class AGun;

DECLARE_DELEGATE(FOnPawnDeathSignature);

UCLASS()
class SHOOTER_API AShooterPawn : public APawn
{
	GENERATED_BODY()

public:
	
	AShooterPawn();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	
	inline float GetMaxWalkSpeed() const { return maxWalkSpeed; }

	inline float GetJumpSpeed() const { return jumpSpeed; }
	
	inline bool IsDead() const { return dead; }

	UFUNCTION(BlueprintPure)
	float GetNormalizedHealth();

	void Shoot();

	FOnPawnDeathSignature onPawnDeath;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float currentSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float currentAngle;
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool dead;
	
	UPROPERTY(EditDefaultsOnly)
	float maxWalkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float jumpSpeed;

	USkeletalMeshComponent* skeletalMeshComponent;
	AGun* gun;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> gunClass;

	UPROPERTY(EditDefaultsOnly)
	float maxHealth;

	UPROPERTY(VisibleAnywhere)
	float health;

	UFUNCTION()
	void OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
};
