#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotationWoodenBoard_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotationWoodenBoard_BP.RotationWoodenBoard_BP_C
// 0x0040 (0x0260 - 0x0220)
class ARotationWoodenBoard_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        One4__4__D______Cue;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Floor_1x4_mdl;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WagonWheel01;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation_Rate;                                     // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_RotationWoodenBoard_BP(int32 EntryPoint);
	void Stop();
	void Active();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotationWoodenBoard_BP_C">();
	}
	static class ARotationWoodenBoard_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotationWoodenBoard_BP_C>();
	}
};
static_assert(alignof(ARotationWoodenBoard_BP_C) == 0x000008, "Wrong alignment on ARotationWoodenBoard_BP_C");
static_assert(sizeof(ARotationWoodenBoard_BP_C) == 0x000260, "Wrong size on ARotationWoodenBoard_BP_C");
static_assert(offsetof(ARotationWoodenBoard_BP_C, UberGraphFrame) == 0x000220, "Member 'ARotationWoodenBoard_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, One4__4__D______Cue) == 0x000228, "Member 'ARotationWoodenBoard_BP_C::One4__4__D______Cue' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, RotatingMovement) == 0x000230, "Member 'ARotationWoodenBoard_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, Floor_1x4_mdl) == 0x000238, "Member 'ARotationWoodenBoard_BP_C::Floor_1x4_mdl' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, Sphere) == 0x000240, "Member 'ARotationWoodenBoard_BP_C::Sphere' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, SM_WagonWheel01) == 0x000248, "Member 'ARotationWoodenBoard_BP_C::SM_WagonWheel01' has a wrong offset!");
static_assert(offsetof(ARotationWoodenBoard_BP_C, Rotation_Rate) == 0x000250, "Member 'ARotationWoodenBoard_BP_C::Rotation_Rate' has a wrong offset!");

}
