// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "LauncherWeapon.generated.h"

class AProjectile;
class SoundCue;

UCLASS()
class SHOOTER_API ALauncherWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sound")
		USoundCue* NoAmmoSound;

	virtual void StartFire() override;

	virtual void MakeShot() override;
};
