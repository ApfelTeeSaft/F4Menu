#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuizDoor_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QuizDoor_BP.QuizDoor_BP_C
// 0x00A8 (0x02C8 - 0x0220)
class AQuizDoor_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Door_2Minus1;                                      // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_2Minus2;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       R2;                                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       R1;                                                // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          False_Trigger;                                     // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Ture_Trigger;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PictureMinus02;                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PictureMinus01;                                 // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ScrollMinus03;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_TableForScrollsMinus01;                         // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DoorRoot_02;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_1Minus2;                                      // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_1Minus1;                                      // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DoorRoot_01;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorFrame_02;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorFrame_01;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Rota_Alpha_98EA204B40DB3AEE637D58AD4DC85CB8;       // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Rota__Direction_98EA204B40DB3AEE637D58AD4DC85CB8;  // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Rota;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   Tag;                                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuizDoor_BP(int32 EntryPoint);
	void Reset();
	void BndEvt__QuizDoor_BP_False_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__QuizDoor_BP_Ture_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Rota__UpdateFunc();
	void Rota__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuizDoor_BP_C">();
	}
	static class AQuizDoor_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQuizDoor_BP_C>();
	}
};
static_assert(alignof(AQuizDoor_BP_C) == 0x000008, "Wrong alignment on AQuizDoor_BP_C");
static_assert(sizeof(AQuizDoor_BP_C) == 0x0002C8, "Wrong size on AQuizDoor_BP_C");
static_assert(offsetof(AQuizDoor_BP_C, UberGraphFrame) == 0x000220, "Member 'AQuizDoor_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Door_2Minus1) == 0x000228, "Member 'AQuizDoor_BP_C::Door_2Minus1' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Door_2Minus2) == 0x000230, "Member 'AQuizDoor_BP_C::Door_2Minus2' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, R2) == 0x000238, "Member 'AQuizDoor_BP_C::R2' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, R1) == 0x000240, "Member 'AQuizDoor_BP_C::R1' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, False_Trigger) == 0x000248, "Member 'AQuizDoor_BP_C::False_Trigger' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Ture_Trigger) == 0x000250, "Member 'AQuizDoor_BP_C::Ture_Trigger' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, SM_PictureMinus02) == 0x000258, "Member 'AQuizDoor_BP_C::SM_PictureMinus02' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, SM_PictureMinus01) == 0x000260, "Member 'AQuizDoor_BP_C::SM_PictureMinus01' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, SM_ScrollMinus03) == 0x000268, "Member 'AQuizDoor_BP_C::SM_ScrollMinus03' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, SM_TableForScrollsMinus01) == 0x000270, "Member 'AQuizDoor_BP_C::SM_TableForScrollsMinus01' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, DoorRoot_02) == 0x000278, "Member 'AQuizDoor_BP_C::DoorRoot_02' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Door_1Minus2) == 0x000280, "Member 'AQuizDoor_BP_C::Door_1Minus2' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Door_1Minus1) == 0x000288, "Member 'AQuizDoor_BP_C::Door_1Minus1' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, DoorRoot_01) == 0x000290, "Member 'AQuizDoor_BP_C::DoorRoot_01' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, DoorFrame_02) == 0x000298, "Member 'AQuizDoor_BP_C::DoorFrame_02' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, DoorFrame_01) == 0x0002A0, "Member 'AQuizDoor_BP_C::DoorFrame_01' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AQuizDoor_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Rota_Alpha_98EA204B40DB3AEE637D58AD4DC85CB8) == 0x0002B0, "Member 'AQuizDoor_BP_C::Rota_Alpha_98EA204B40DB3AEE637D58AD4DC85CB8' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Rota__Direction_98EA204B40DB3AEE637D58AD4DC85CB8) == 0x0002B4, "Member 'AQuizDoor_BP_C::Rota__Direction_98EA204B40DB3AEE637D58AD4DC85CB8' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Rota) == 0x0002B8, "Member 'AQuizDoor_BP_C::Rota' has a wrong offset!");
static_assert(offsetof(AQuizDoor_BP_C, Tag) == 0x0002C0, "Member 'AQuizDoor_BP_C::Tag' has a wrong offset!");

}
