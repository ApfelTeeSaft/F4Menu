#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sancho_ai_controler

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function sancho_ai_controler.sancho_ai_controler_C.ExecuteUbergraph_sancho_ai_controler
// 0x0020 (0x0020 - 0x0000)
struct Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingRequestResult                   CallFunc_MoveToActor_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingRequestResult                   CallFunc_MoveToActor_ReturnValue_1;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler) == 0x000008, "Wrong alignment on Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler");
static_assert(sizeof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler) == 0x000020, "Wrong size on Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler");
static_assert(offsetof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler, EntryPoint) == 0x000000, "Member 'Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler::EntryPoint' has a wrong offset!");
static_assert(offsetof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler, CallFunc_MoveToActor_ReturnValue) == 0x000004, "Member 'Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler::CallFunc_MoveToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler, CallFunc_MoveToActor_ReturnValue_1) == 0x000018, "Member 'Sancho_ai_controler_C_ExecuteUbergraph_sancho_ai_controler::CallFunc_MoveToActor_ReturnValue_1' has a wrong offset!");

// Function sancho_ai_controler.sancho_ai_controler_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Sancho_ai_controler_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sancho_ai_controler_C_ReceiveTick) == 0x000004, "Wrong alignment on Sancho_ai_controler_C_ReceiveTick");
static_assert(sizeof(Sancho_ai_controler_C_ReceiveTick) == 0x000004, "Wrong size on Sancho_ai_controler_C_ReceiveTick");
static_assert(offsetof(Sancho_ai_controler_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Sancho_ai_controler_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
