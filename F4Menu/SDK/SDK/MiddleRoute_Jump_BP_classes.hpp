#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiddleRoute_Jump_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MiddleRoute_Jump_BP.MiddleRoute_Jump_BP_C
// 0x0048 (0x0268 - 0x0220)
class AMiddleRoute_Jump_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Acc_02;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Acc_01;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap;                                           // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FootRest;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       RotaRoot;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Rota_Alpha_7D29CC8D4239133CAD37079149E090A6;       // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Rota__Direction_7D29CC8D4239133CAD37079149E090A6;  // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Rota;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MiddleRoute_Jump_BP(int32 EntryPoint);
	void Stop();
	void Active();
	void Rota__UpdateFunc();
	void Rota__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiddleRoute_Jump_BP_C">();
	}
	static class AMiddleRoute_Jump_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMiddleRoute_Jump_BP_C>();
	}
};
static_assert(alignof(AMiddleRoute_Jump_BP_C) == 0x000008, "Wrong alignment on AMiddleRoute_Jump_BP_C");
static_assert(sizeof(AMiddleRoute_Jump_BP_C) == 0x000268, "Wrong size on AMiddleRoute_Jump_BP_C");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, UberGraphFrame) == 0x000220, "Member 'AMiddleRoute_Jump_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Acc_02) == 0x000228, "Member 'AMiddleRoute_Jump_BP_C::Acc_02' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Acc_01) == 0x000230, "Member 'AMiddleRoute_Jump_BP_C::Acc_01' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Overlap) == 0x000238, "Member 'AMiddleRoute_Jump_BP_C::Overlap' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, FootRest) == 0x000240, "Member 'AMiddleRoute_Jump_BP_C::FootRest' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Root) == 0x000248, "Member 'AMiddleRoute_Jump_BP_C::Root' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, RotaRoot) == 0x000250, "Member 'AMiddleRoute_Jump_BP_C::RotaRoot' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Rota_Alpha_7D29CC8D4239133CAD37079149E090A6) == 0x000258, "Member 'AMiddleRoute_Jump_BP_C::Rota_Alpha_7D29CC8D4239133CAD37079149E090A6' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Rota__Direction_7D29CC8D4239133CAD37079149E090A6) == 0x00025C, "Member 'AMiddleRoute_Jump_BP_C::Rota__Direction_7D29CC8D4239133CAD37079149E090A6' has a wrong offset!");
static_assert(offsetof(AMiddleRoute_Jump_BP_C, Rota) == 0x000260, "Member 'AMiddleRoute_Jump_BP_C::Rota' has a wrong offset!");

}

