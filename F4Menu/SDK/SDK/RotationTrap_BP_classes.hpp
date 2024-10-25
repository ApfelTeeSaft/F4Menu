#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotationTrap_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotationTrap_BP.RotationTrap_BP_C
// 0x0090 (0x02B0 - 0x0220)
class ARotationTrap_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        One4__4__D______Cue;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Overlap_05;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap_01;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap_04;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap_03;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap_02;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement1;                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile5;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile4;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   body1;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile3;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile2;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wood_Fence_B_mdl;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wood_Spikes;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RotationTrap_BP(int32 EntryPoint);
	void BndEvt__RotationTrap_BP_Overlap_05_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RotationTrap_BP_Overlap_04_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RotationTrap_BP_Overlap_03_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RotationTrap_BP_Overlap_02_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RotationTrap_BP_Overlap_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Stop();
	void Active();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotationTrap_BP_C">();
	}
	static class ARotationTrap_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotationTrap_BP_C>();
	}
};
static_assert(alignof(ARotationTrap_BP_C) == 0x000008, "Wrong alignment on ARotationTrap_BP_C");
static_assert(sizeof(ARotationTrap_BP_C) == 0x0002B0, "Wrong size on ARotationTrap_BP_C");
static_assert(offsetof(ARotationTrap_BP_C, UberGraphFrame) == 0x000220, "Member 'ARotationTrap_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, One4__4__D______Cue) == 0x000228, "Member 'ARotationTrap_BP_C::One4__4__D______Cue' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Overlap_05) == 0x000230, "Member 'ARotationTrap_BP_C::Overlap_05' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Overlap_01) == 0x000238, "Member 'ARotationTrap_BP_C::Overlap_01' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Overlap_04) == 0x000240, "Member 'ARotationTrap_BP_C::Overlap_04' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Overlap_03) == 0x000248, "Member 'ARotationTrap_BP_C::Overlap_03' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Overlap_02) == 0x000250, "Member 'ARotationTrap_BP_C::Overlap_02' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, RotatingMovement1) == 0x000258, "Member 'ARotationTrap_BP_C::RotatingMovement1' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Pile5) == 0x000260, "Member 'ARotationTrap_BP_C::Pile5' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Pile4) == 0x000268, "Member 'ARotationTrap_BP_C::Pile4' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Body) == 0x000270, "Member 'ARotationTrap_BP_C::Body' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, body1) == 0x000278, "Member 'ARotationTrap_BP_C::body1' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Pile3) == 0x000280, "Member 'ARotationTrap_BP_C::Pile3' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Pile2) == 0x000288, "Member 'ARotationTrap_BP_C::Pile2' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, RotatingMovement) == 0x000290, "Member 'ARotationTrap_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Root) == 0x000298, "Member 'ARotationTrap_BP_C::Root' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, Wood_Fence_B_mdl) == 0x0002A0, "Member 'ARotationTrap_BP_C::Wood_Fence_B_mdl' has a wrong offset!");
static_assert(offsetof(ARotationTrap_BP_C, SM_Wood_Spikes) == 0x0002A8, "Member 'ARotationTrap_BP_C::SM_Wood_Spikes' has a wrong offset!");

}

