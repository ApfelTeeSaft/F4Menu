#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MoveDock_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MoveDock_BP.MoveDock_BP_C.ExecuteUbergraph_MoveDock_BP
// 0x0134 (0x0134 - 0x0000)
struct MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0010(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x00A8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP) == 0x000004, "Wrong alignment on MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP");
static_assert(sizeof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP) == 0x000134, "Wrong size on MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP");
static_assert(offsetof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP, EntryPoint) == 0x000000, "Member 'MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP, CallFunc_RLerp_ReturnValue) == 0x000004, "Member 'MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000010, "Member 'MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP, CallFunc_RLerp_ReturnValue_1) == 0x00009C, "Member 'MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x0000A8, "Member 'MoveDock_BP_C_ExecuteUbergraph_MoveDock_BP::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");

// Function MoveDock_BP.MoveDock_BP_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct MoveDock_BP_C_UserConstructionScript final
{
public:
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MoveDock_BP_C_UserConstructionScript) == 0x000004, "Wrong alignment on MoveDock_BP_C_UserConstructionScript");
static_assert(sizeof(MoveDock_BP_C_UserConstructionScript) == 0x000028, "Wrong size on MoveDock_BP_C_UserConstructionScript");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_BreakRotator_Roll) == 0x000000, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_BreakRotator_Pitch) == 0x000004, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_BreakRotator_Yaw) == 0x000008, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000010, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MoveDock_BP_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x00001C, "Member 'MoveDock_BP_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");

}

