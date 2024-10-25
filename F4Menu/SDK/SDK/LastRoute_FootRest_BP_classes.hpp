#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LastRoute_FootRest_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LastRoute_FootRest_BP.LastRoute_FootRest_BP_C
// 0x0050 (0x0270 - 0x0220)
class ALastRoute_FootRest_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   FootRest;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                       FootRest_Physics;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCableComponent*                        Cable;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                       RotaRoot;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FRotator                               Rotation_Rate;                                     // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LastRoute_FootRest_BP(int32 EntryPoint);
	void Stop();
	void Active();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LastRoute_FootRest_BP_C">();
	}
	static class ALastRoute_FootRest_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALastRoute_FootRest_BP_C>();
	}
};
static_assert(alignof(ALastRoute_FootRest_BP_C) == 0x000008, "Wrong alignment on ALastRoute_FootRest_BP_C");
static_assert(sizeof(ALastRoute_FootRest_BP_C) == 0x000270, "Wrong size on ALastRoute_FootRest_BP_C");
static_assert(offsetof(ALastRoute_FootRest_BP_C, UberGraphFrame) == 0x000220, "Member 'ALastRoute_FootRest_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, FootRest) == 0x000228, "Member 'ALastRoute_FootRest_BP_C::FootRest' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, FootRest_Physics) == 0x000230, "Member 'ALastRoute_FootRest_BP_C::FootRest_Physics' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, RotatingMovement) == 0x000238, "Member 'ALastRoute_FootRest_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, PhysicsConstraint) == 0x000240, "Member 'ALastRoute_FootRest_BP_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, Cable) == 0x000248, "Member 'ALastRoute_FootRest_BP_C::Cable' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, Root) == 0x000250, "Member 'ALastRoute_FootRest_BP_C::Root' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, RotaRoot) == 0x000258, "Member 'ALastRoute_FootRest_BP_C::RotaRoot' has a wrong offset!");
static_assert(offsetof(ALastRoute_FootRest_BP_C, Rotation_Rate) == 0x000260, "Member 'ALastRoute_FootRest_BP_C::Rotation_Rate' has a wrong offset!");

}

