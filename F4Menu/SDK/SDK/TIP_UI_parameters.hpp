#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TIP_UI

#include "Basic.hpp"


namespace SDK::Params
{

// Function TIP_UI.TIP_UI_C.ExecuteUbergraph_TIP_UI
// 0x0020 (0x0020 - 0x0000)
struct TIP_UI_C_ExecuteUbergraph_TIP_UI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0008(0x0018)()
};
static_assert(alignof(TIP_UI_C_ExecuteUbergraph_TIP_UI) == 0x000008, "Wrong alignment on TIP_UI_C_ExecuteUbergraph_TIP_UI");
static_assert(sizeof(TIP_UI_C_ExecuteUbergraph_TIP_UI) == 0x000020, "Wrong size on TIP_UI_C_ExecuteUbergraph_TIP_UI");
static_assert(offsetof(TIP_UI_C_ExecuteUbergraph_TIP_UI, EntryPoint) == 0x000000, "Member 'TIP_UI_C_ExecuteUbergraph_TIP_UI::EntryPoint' has a wrong offset!");
static_assert(offsetof(TIP_UI_C_ExecuteUbergraph_TIP_UI, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'TIP_UI_C_ExecuteUbergraph_TIP_UI::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TIP_UI_C_ExecuteUbergraph_TIP_UI, CallFunc_Array_Get_Item) == 0x000008, "Member 'TIP_UI_C_ExecuteUbergraph_TIP_UI::CallFunc_Array_Get_Item' has a wrong offset!");

}

