#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaunchShield_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LaunchShield_BP.LaunchShield_BP_C
// 0x0050 (0x0270 - 0x0220)
class ALaunchShield_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Two_____L1_Cue;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Two___B_L2_Cue;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  RadialForce;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleComponent*                 Shield_DM;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Shield;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ___;                                               // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LaunchShield_BP(int32 EntryPoint);
	void BndEvt__LaunchShield_BP_shield_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__LaunchShield_BP_Root_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LaunchShield_BP_C">();
	}
	static class ALaunchShield_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALaunchShield_BP_C>();
	}
};
static_assert(alignof(ALaunchShield_BP_C) == 0x000008, "Wrong alignment on ALaunchShield_BP_C");
static_assert(sizeof(ALaunchShield_BP_C) == 0x000270, "Wrong size on ALaunchShield_BP_C");
static_assert(offsetof(ALaunchShield_BP_C, UberGraphFrame) == 0x000220, "Member 'ALaunchShield_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, Two_____L1_Cue) == 0x000228, "Member 'ALaunchShield_BP_C::Two_____L1_Cue' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, Two___B_L2_Cue) == 0x000230, "Member 'ALaunchShield_BP_C::Two___B_L2_Cue' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, RadialForce) == 0x000238, "Member 'ALaunchShield_BP_C::RadialForce' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, Shield_DM) == 0x000240, "Member 'ALaunchShield_BP_C::Shield_DM' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, Shield) == 0x000248, "Member 'ALaunchShield_BP_C::Shield' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, Root) == 0x000250, "Member 'ALaunchShield_BP_C::Root' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, RotatingMovement) == 0x000258, "Member 'ALaunchShield_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, ProjectileMovement) == 0x000260, "Member 'ALaunchShield_BP_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ALaunchShield_BP_C, ___) == 0x000268, "Member 'ALaunchShield_BP_C::___' has a wrong offset!");

}
