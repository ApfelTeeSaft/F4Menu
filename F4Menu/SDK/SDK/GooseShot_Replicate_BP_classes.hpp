#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooseShot_Replicate_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GooseShot_Replicate_BP.GooseShot_Replicate_BP_C
// 0x0048 (0x0268 - 0x0220)
class AGooseShot_Replicate_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Par_MissileTrails2;                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Chicken_Wings_Random_Cue;                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 ChickMesh;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  Expore;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GooseShot_Replicate_BP(int32 EntryPoint);
	void BndEvt__GooseShot_Replicate_BP_ChickMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseShot_Replicate_BP_C">();
	}
	static class AGooseShot_Replicate_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGooseShot_Replicate_BP_C>();
	}
};
static_assert(alignof(AGooseShot_Replicate_BP_C) == 0x000008, "Wrong alignment on AGooseShot_Replicate_BP_C");
static_assert(sizeof(AGooseShot_Replicate_BP_C) == 0x000268, "Wrong size on AGooseShot_Replicate_BP_C");
static_assert(offsetof(AGooseShot_Replicate_BP_C, UberGraphFrame) == 0x000220, "Member 'AGooseShot_Replicate_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, Par_MissileTrails2) == 0x000228, "Member 'AGooseShot_Replicate_BP_C::Par_MissileTrails2' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, Chicken_Wings_Random_Cue) == 0x000230, "Member 'AGooseShot_Replicate_BP_C::Chicken_Wings_Random_Cue' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, Arrow) == 0x000238, "Member 'AGooseShot_Replicate_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, ChickMesh) == 0x000240, "Member 'AGooseShot_Replicate_BP_C::ChickMesh' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, Sphere) == 0x000248, "Member 'AGooseShot_Replicate_BP_C::Sphere' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, RotatingMovement) == 0x000250, "Member 'AGooseShot_Replicate_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, Expore) == 0x000258, "Member 'AGooseShot_Replicate_BP_C::Expore' has a wrong offset!");
static_assert(offsetof(AGooseShot_Replicate_BP_C, ProjectileMovement) == 0x000260, "Member 'AGooseShot_Replicate_BP_C::ProjectileMovement' has a wrong offset!");

}
