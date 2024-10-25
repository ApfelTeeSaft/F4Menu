#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChickenAnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChickenAnimBlueprint.ChickenAnimBlueprint_C.ExecuteUbergraph_ChickenAnimBlueprint
// 0x0008 (0x0008 - 0x0000)
struct ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint) == 0x000004, "Wrong alignment on ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint");
static_assert(sizeof(ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint) == 0x000008, "Wrong size on ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint");
static_assert(offsetof(ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint, EntryPoint) == 0x000000, "Member 'ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ChickenAnimBlueprint_C_ExecuteUbergraph_ChickenAnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function ChickenAnimBlueprint.ChickenAnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ChickenAnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChickenAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ChickenAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(ChickenAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ChickenAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(ChickenAnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ChickenAnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ChickenAnimBlueprint.ChickenAnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ChickenAnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ChickenAnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on ChickenAnimBlueprint_C_AnimGraph");
static_assert(sizeof(ChickenAnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on ChickenAnimBlueprint_C_AnimGraph");
static_assert(offsetof(ChickenAnimBlueprint_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ChickenAnimBlueprint_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

