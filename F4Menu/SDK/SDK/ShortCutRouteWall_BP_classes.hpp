#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShortCutRouteWall_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShortCutRouteWall_BP.ShortCutRouteWall_BP_C
// 0x0080 (0x02A0 - 0x0220)
class AShortCutRouteWall_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   WoodPlank_mdl3;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WoodPlank_mdl2;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WoodPlank_mdl1;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WoodPlank_mdl;                                     // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_01;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_05;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_04;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_03;                                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_02;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       RotaRoot;                                          // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Rota_Alpha_3B1DC7C54B17488DD2ADA29E607FE313;       // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Rota__Direction_3B1DC7C54B17488DD2ADA29E607FE313;  // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Rota;                                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FRotator                               B;                                                 // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ShortCutRouteWall_BP(int32 EntryPoint);
	void Rollback();
	void Active();
	void Rota__UpdateFunc();
	void Rota__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortCutRouteWall_BP_C">();
	}
	static class AShortCutRouteWall_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShortCutRouteWall_BP_C>();
	}
};
static_assert(alignof(AShortCutRouteWall_BP_C) == 0x000008, "Wrong alignment on AShortCutRouteWall_BP_C");
static_assert(sizeof(AShortCutRouteWall_BP_C) == 0x0002A0, "Wrong size on AShortCutRouteWall_BP_C");
static_assert(offsetof(AShortCutRouteWall_BP_C, UberGraphFrame) == 0x000220, "Member 'AShortCutRouteWall_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, WoodPlank_mdl3) == 0x000228, "Member 'AShortCutRouteWall_BP_C::WoodPlank_mdl3' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, WoodPlank_mdl2) == 0x000230, "Member 'AShortCutRouteWall_BP_C::WoodPlank_mdl2' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, WoodPlank_mdl1) == 0x000238, "Member 'AShortCutRouteWall_BP_C::WoodPlank_mdl1' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, WoodPlank_mdl) == 0x000240, "Member 'AShortCutRouteWall_BP_C::WoodPlank_mdl' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Wall_01) == 0x000248, "Member 'AShortCutRouteWall_BP_C::Wall_01' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Wall_05) == 0x000250, "Member 'AShortCutRouteWall_BP_C::Wall_05' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Wall_04) == 0x000258, "Member 'AShortCutRouteWall_BP_C::Wall_04' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Wall_03) == 0x000260, "Member 'AShortCutRouteWall_BP_C::Wall_03' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Wall_02) == 0x000268, "Member 'AShortCutRouteWall_BP_C::Wall_02' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, RotaRoot) == 0x000270, "Member 'AShortCutRouteWall_BP_C::RotaRoot' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, DefaultSceneRoot) == 0x000278, "Member 'AShortCutRouteWall_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Rota_Alpha_3B1DC7C54B17488DD2ADA29E607FE313) == 0x000280, "Member 'AShortCutRouteWall_BP_C::Rota_Alpha_3B1DC7C54B17488DD2ADA29E607FE313' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Rota__Direction_3B1DC7C54B17488DD2ADA29E607FE313) == 0x000284, "Member 'AShortCutRouteWall_BP_C::Rota__Direction_3B1DC7C54B17488DD2ADA29E607FE313' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, Rota) == 0x000288, "Member 'AShortCutRouteWall_BP_C::Rota' has a wrong offset!");
static_assert(offsetof(AShortCutRouteWall_BP_C, B) == 0x000290, "Member 'AShortCutRouteWall_BP_C::B' has a wrong offset!");

}

