#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadWidgetBP

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GamepadWidgetBP.GamepadWidgetBP_C.ExecuteUbergraph_GamepadWidgetBP
// 0x0008 (0x0008 - 0x0000)
struct GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP) == 0x000004, "Wrong alignment on GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP");
static_assert(sizeof(GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP) == 0x000008, "Wrong size on GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP");
static_assert(offsetof(GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP, EntryPoint) == 0x000000, "Member 'GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP, K2Node_Event_IsDesignTime) == 0x000004, "Member 'GamepadWidgetBP_C_ExecuteUbergraph_GamepadWidgetBP::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function GamepadWidgetBP.GamepadWidgetBP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GamepadWidgetBP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadWidgetBP_C_PreConstruct) == 0x000001, "Wrong alignment on GamepadWidgetBP_C_PreConstruct");
static_assert(sizeof(GamepadWidgetBP_C_PreConstruct) == 0x000001, "Wrong size on GamepadWidgetBP_C_PreConstruct");
static_assert(offsetof(GamepadWidgetBP_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GamepadWidgetBP_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GamepadWidgetBP.GamepadWidgetBP_C.SetupGamepadKeys
// 0x0030 (0x0030 - 0x0000)
struct GamepadWidgetBP_C_SetupGamepadKeys final
{
public:
	int32                                         ___int_Variable;                                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKey_C*                          K2Node_DynamicCast_AsGamepad_Key;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadWidgetBP_C_SetupGamepadKeys) == 0x000008, "Wrong alignment on GamepadWidgetBP_C_SetupGamepadKeys");
static_assert(sizeof(GamepadWidgetBP_C_SetupGamepadKeys) == 0x000030, "Wrong size on GamepadWidgetBP_C_SetupGamepadKeys");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, ___int_Variable) == 0x000000, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::___int_Variable' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, K2Node_DynamicCast_AsGamepad_Key) == 0x000018, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::K2Node_DynamicCast_AsGamepad_Key' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, CallFunc_Array_Add_ReturnValue) == 0x000024, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetupGamepadKeys, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GamepadWidgetBP_C_SetupGamepadKeys::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function GamepadWidgetBP.GamepadWidgetBP_C.SetGlobalSettings
// 0x0120 (0x0120 - 0x0000)
struct GamepadWidgetBP_C_SetGlobalSettings final
{
public:
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor;                // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor;      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor;    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor;              // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor;      // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor;    // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_1;              // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_1;         // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_1;    // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_1;    // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_1;  // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_1;            // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_1;            // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_1;    // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_1;  // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadWidgetBP_C_SetGlobalSettings) == 0x000004, "Wrong alignment on GamepadWidgetBP_C_SetGlobalSettings");
static_assert(sizeof(GamepadWidgetBP_C_SetGlobalSettings) == 0x000120, "Wrong size on GamepadWidgetBP_C_SetGlobalSettings");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x000000, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x000010, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x000020, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x000030, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x000040, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x000050, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x000060, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x000070, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x000080, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_1) == 0x000090, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_1) == 0x0000A0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_1) == 0x0000B0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_1) == 0x0000C0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_1) == 0x0000D0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_1) == 0x0000E0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_1) == 0x0000F0, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_1) == 0x000100, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_1' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_1) == 0x000110, "Member 'GamepadWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_1' has a wrong offset!");

// Function GamepadWidgetBP.GamepadWidgetBP_C.SetGamepadBindingText
// 0x0068 (0x0068 - 0x0000)
struct GamepadWidgetBP_C_SetGamepadBindingText final
{
public:
	class FText                                   InBindingName;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                   InSelectedKey;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                   InLastSelectedKey;                                 // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGamepadKey_C*                          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadWidgetBP_C_SetGamepadBindingText) == 0x000008, "Wrong alignment on GamepadWidgetBP_C_SetGamepadBindingText");
static_assert(sizeof(GamepadWidgetBP_C_SetGamepadBindingText) == 0x000068, "Wrong size on GamepadWidgetBP_C_SetGamepadBindingText");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, InBindingName) == 0x000000, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::InBindingName' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, InSelectedKey) == 0x000018, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::InSelectedKey' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, InLastSelectedKey) == 0x000030, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::InLastSelectedKey' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, ___int_Array_Index_Variable) == 0x000048, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, ___int_Loop_Counter_Variable) == 0x00004C, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_Array_Get_Item) == 0x000058, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000061, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_SetGamepadBindingText, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000062, "Member 'GamepadWidgetBP_C_SetGamepadBindingText::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");

// Function GamepadWidgetBP.GamepadWidgetBP_C.ResetGamepadVisualization
// 0x0020 (0x0020 - 0x0000)
struct GamepadWidgetBP_C_ResetGamepadVisualization final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGamepadKey_C*                          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadWidgetBP_C_ResetGamepadVisualization) == 0x000008, "Wrong alignment on GamepadWidgetBP_C_ResetGamepadVisualization");
static_assert(sizeof(GamepadWidgetBP_C_ResetGamepadVisualization) == 0x000020, "Wrong size on GamepadWidgetBP_C_ResetGamepadVisualization");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, ___int_Array_Index_Variable) == 0x000000, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, ___int_Loop_Counter_Variable) == 0x000004, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, CallFunc_Array_Get_Item) == 0x000010, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GamepadWidgetBP_C_ResetGamepadVisualization, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'GamepadWidgetBP_C_ResetGamepadVisualization::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

