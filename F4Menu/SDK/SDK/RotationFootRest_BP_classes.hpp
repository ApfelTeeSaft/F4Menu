#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotationFootRest_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotationFootRest_BP.RotationFootRest_BP_C
// 0x0090 (0x02B0 - 0x0220)
class ARotationFootRest_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        One4__4__D______Cue;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FoorRest;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       FoorRest_Root;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile5;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile4;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement1;                                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   body1;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile3;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pile2;                                             // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wood_Fence_B_mdl;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TrapRotaiton;                                      // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               FootRestRotation;                                  // 0x029C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         StartDelay;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RotationFootRest_BP(int32 EntryPoint);
	void Active();
	void StopMove();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotationFootRest_BP_C">();
	}
	static class ARotationFootRest_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotationFootRest_BP_C>();
	}
};
static_assert(alignof(ARotationFootRest_BP_C) == 0x000008, "Wrong alignment on ARotationFootRest_BP_C");
static_assert(sizeof(ARotationFootRest_BP_C) == 0x0002B0, "Wrong size on ARotationFootRest_BP_C");
static_assert(offsetof(ARotationFootRest_BP_C, UberGraphFrame) == 0x000220, "Member 'ARotationFootRest_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, One4__4__D______Cue) == 0x000228, "Member 'ARotationFootRest_BP_C::One4__4__D______Cue' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, FoorRest) == 0x000230, "Member 'ARotationFootRest_BP_C::FoorRest' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, FoorRest_Root) == 0x000238, "Member 'ARotationFootRest_BP_C::FoorRest_Root' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Pile5) == 0x000240, "Member 'ARotationFootRest_BP_C::Pile5' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Pile4) == 0x000248, "Member 'ARotationFootRest_BP_C::Pile4' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, RotatingMovement1) == 0x000250, "Member 'ARotationFootRest_BP_C::RotatingMovement1' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Body) == 0x000258, "Member 'ARotationFootRest_BP_C::Body' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, body1) == 0x000260, "Member 'ARotationFootRest_BP_C::body1' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Pile3) == 0x000268, "Member 'ARotationFootRest_BP_C::Pile3' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Pile2) == 0x000270, "Member 'ARotationFootRest_BP_C::Pile2' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, RotatingMovement) == 0x000278, "Member 'ARotationFootRest_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Root) == 0x000280, "Member 'ARotationFootRest_BP_C::Root' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, Wood_Fence_B_mdl) == 0x000288, "Member 'ARotationFootRest_BP_C::Wood_Fence_B_mdl' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, TrapRotaiton) == 0x000290, "Member 'ARotationFootRest_BP_C::TrapRotaiton' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, FootRestRotation) == 0x00029C, "Member 'ARotationFootRest_BP_C::FootRestRotation' has a wrong offset!");
static_assert(offsetof(ARotationFootRest_BP_C, StartDelay) == 0x0002A8, "Member 'ARotationFootRest_BP_C::StartDelay' has a wrong offset!");

}

