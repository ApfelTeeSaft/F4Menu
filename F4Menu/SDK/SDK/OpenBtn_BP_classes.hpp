#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenBtn_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OpenBtn_BP.OpenBtn_BP_C
// 0x0058 (0x0278 - 0x0220)
class AOpenBtn_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        One7____Cue;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Button;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MoveRoot;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Move_Alpha_34D4096A4948E0DEDB599BB7A69DA3D0;       // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Move__Direction_34D4096A4948E0DEDB599BB7A69DA3D0;  // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Move;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                DefaultLocation;                                   // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MoveLocation;                                      // 0x0264(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoorOpen_;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_OpenBtn_BP(int32 EntryPoint);
	void BndEvt__OpenBtn_BP_Button_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Move__RollbackMat__EventFunc();
	void Move__SoundEvent__EventFunc();
	void Move__UpdateFunc();
	void Move__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OpenBtn_BP_C">();
	}
	static class AOpenBtn_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOpenBtn_BP_C>();
	}
};
static_assert(alignof(AOpenBtn_BP_C) == 0x000008, "Wrong alignment on AOpenBtn_BP_C");
static_assert(sizeof(AOpenBtn_BP_C) == 0x000278, "Wrong size on AOpenBtn_BP_C");
static_assert(offsetof(AOpenBtn_BP_C, UberGraphFrame) == 0x000220, "Member 'AOpenBtn_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, One7____Cue) == 0x000228, "Member 'AOpenBtn_BP_C::One7____Cue' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, Button) == 0x000230, "Member 'AOpenBtn_BP_C::Button' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, Root) == 0x000238, "Member 'AOpenBtn_BP_C::Root' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, MoveRoot) == 0x000240, "Member 'AOpenBtn_BP_C::MoveRoot' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, Move_Alpha_34D4096A4948E0DEDB599BB7A69DA3D0) == 0x000248, "Member 'AOpenBtn_BP_C::Move_Alpha_34D4096A4948E0DEDB599BB7A69DA3D0' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, Move__Direction_34D4096A4948E0DEDB599BB7A69DA3D0) == 0x00024C, "Member 'AOpenBtn_BP_C::Move__Direction_34D4096A4948E0DEDB599BB7A69DA3D0' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, Move) == 0x000250, "Member 'AOpenBtn_BP_C::Move' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, DefaultLocation) == 0x000258, "Member 'AOpenBtn_BP_C::DefaultLocation' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, MoveLocation) == 0x000264, "Member 'AOpenBtn_BP_C::MoveLocation' has a wrong offset!");
static_assert(offsetof(AOpenBtn_BP_C, DoorOpen_) == 0x000270, "Member 'AOpenBtn_BP_C::DoorOpen_' has a wrong offset!");

}
