#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireBall_Projectile_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FireBall_Projectile_BP.FireBall_Projectile_BP_C
// 0x0030 (0x0250 - 0x0220)
class AFireBall_Projectile_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        CannonShot_Cue;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  RadialForce;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Par_LMagic_Fire_Atk_01;                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HitCollision;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FireBall_Projectile_BP(int32 EntryPoint);
	void BndEvt__FireBall_Projectile_BP_HitCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireBall_Projectile_BP_C">();
	}
	static class AFireBall_Projectile_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFireBall_Projectile_BP_C>();
	}
};
static_assert(alignof(AFireBall_Projectile_BP_C) == 0x000008, "Wrong alignment on AFireBall_Projectile_BP_C");
static_assert(sizeof(AFireBall_Projectile_BP_C) == 0x000250, "Wrong size on AFireBall_Projectile_BP_C");
static_assert(offsetof(AFireBall_Projectile_BP_C, UberGraphFrame) == 0x000220, "Member 'AFireBall_Projectile_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFireBall_Projectile_BP_C, CannonShot_Cue) == 0x000228, "Member 'AFireBall_Projectile_BP_C::CannonShot_Cue' has a wrong offset!");
static_assert(offsetof(AFireBall_Projectile_BP_C, RadialForce) == 0x000230, "Member 'AFireBall_Projectile_BP_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AFireBall_Projectile_BP_C, Par_LMagic_Fire_Atk_01) == 0x000238, "Member 'AFireBall_Projectile_BP_C::Par_LMagic_Fire_Atk_01' has a wrong offset!");
static_assert(offsetof(AFireBall_Projectile_BP_C, HitCollision) == 0x000240, "Member 'AFireBall_Projectile_BP_C::HitCollision' has a wrong offset!");
static_assert(offsetof(AFireBall_Projectile_BP_C, ProjectileMovement) == 0x000248, "Member 'AFireBall_Projectile_BP_C::ProjectileMovement' has a wrong offset!");

}

