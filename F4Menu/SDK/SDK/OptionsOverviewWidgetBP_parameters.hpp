#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsOverviewWidgetBP

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionsOverviewWidgetBP.OptionsOverviewWidgetBP_C.ExecuteUbergraph_OptionsOverviewWidgetBP
// 0x0058 (0x0058 - 0x0000)
struct OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu_1;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsGamepadBeingUsed;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateToMenu;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenuContainerWidgetBP_C*           K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenuContainerWidgetBP_C*           K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP_1; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UIngameMenuContainerWidgetBP_C*         K2Node_DynamicCast_AsIngame_Menu_Container_Widget_BP; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP) == 0x000008, "Wrong alignment on OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP");
static_assert(sizeof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP) == 0x000058, "Wrong size on OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, EntryPoint) == 0x000000, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, ___bool_IsClosed_Variable) == 0x000004, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_Event_NavigateFromMenu_1) == 0x000008, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_Event_NavigateFromMenu_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_Event_bIsGamepadBeingUsed) == 0x000010, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_Event_bIsGamepadBeingUsed' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_Event_NavigateToMenu) == 0x000018, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_Event_NavigateToMenu' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_Event_NavigateFromMenu) == 0x000020, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_Event_NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP) == 0x000028, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP_1) == 0x000038, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_AsMain_Menu_Container_Widget_BP_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, ___bool_Has_Been_Initd_Variable) == 0x000041, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_AsIngame_Menu_Container_Widget_BP) == 0x000048, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_AsIngame_Menu_Container_Widget_BP' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP, K2Node_Event_IsDesignTime) == 0x000051, "Member 'OptionsOverviewWidgetBP_C_ExecuteUbergraph_OptionsOverviewWidgetBP::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function OptionsOverviewWidgetBP.OptionsOverviewWidgetBP_C.SetGlobalSettings
// 0x02E0 (0x02E0 - 0x0000)
struct OptionsOverviewWidgetBP_C_SetGlobalSettings final
{
public:
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont;                  // 0x0000(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont;            // 0x0058(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont;           // 0x00B0(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont;            // 0x0108(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont;                 // 0x0160(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor;                // 0x01BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor;           // 0x01CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor;      // 0x01DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor;      // 0x01EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor;    // 0x01FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor;              // 0x020C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor;              // 0x021C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor;      // 0x022C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor;    // 0x023C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_1;              // 0x024C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_1;         // 0x025C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_1;    // 0x026C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_1;    // 0x027C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_1;  // 0x028C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_1;            // 0x029C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_1;            // 0x02AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_1;    // 0x02BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_1;  // 0x02CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsOverviewWidgetBP_C_SetGlobalSettings) == 0x000008, "Wrong alignment on OptionsOverviewWidgetBP_C_SetGlobalSettings");
static_assert(sizeof(OptionsOverviewWidgetBP_C_SetGlobalSettings) == 0x0002E0, "Wrong size on OptionsOverviewWidgetBP_C_SetGlobalSettings");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont) == 0x000000, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont) == 0x000058, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont) == 0x0000B0, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont) == 0x000108, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont) == 0x000160, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase) == 0x0001B8, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x0001BC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x0001CC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x0001DC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x0001EC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x0001FC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x00020C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x00021C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x00022C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x00023C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_1) == 0x00024C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_1) == 0x00025C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_1) == 0x00026C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_1) == 0x00027C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_1) == 0x00028C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_1) == 0x00029C, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_1) == 0x0002AC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_1) == 0x0002BC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_1' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_1) == 0x0002CC, "Member 'OptionsOverviewWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_1' has a wrong offset!");

// Function OptionsOverviewWidgetBP.OptionsOverviewWidgetBP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OptionsOverviewWidgetBP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsOverviewWidgetBP_C_PreConstruct) == 0x000001, "Wrong alignment on OptionsOverviewWidgetBP_C_PreConstruct");
static_assert(sizeof(OptionsOverviewWidgetBP_C_PreConstruct) == 0x000001, "Wrong size on OptionsOverviewWidgetBP_C_PreConstruct");
static_assert(offsetof(OptionsOverviewWidgetBP_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OptionsOverviewWidgetBP_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OptionsOverviewWidgetBP.OptionsOverviewWidgetBP_C.OnNavigationExit
// 0x0010 (0x0010 - 0x0000)
struct OptionsOverviewWidgetBP_C_OnNavigationExit final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateToMenu;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsOverviewWidgetBP_C_OnNavigationExit) == 0x000008, "Wrong alignment on OptionsOverviewWidgetBP_C_OnNavigationExit");
static_assert(sizeof(OptionsOverviewWidgetBP_C_OnNavigationExit) == 0x000010, "Wrong size on OptionsOverviewWidgetBP_C_OnNavigationExit");
static_assert(offsetof(OptionsOverviewWidgetBP_C_OnNavigationExit, NavigateToMenu) == 0x000000, "Member 'OptionsOverviewWidgetBP_C_OnNavigationExit::NavigateToMenu' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_OnNavigationExit, NavigateFromMenu) == 0x000008, "Member 'OptionsOverviewWidgetBP_C_OnNavigationExit::NavigateFromMenu' has a wrong offset!");

// Function OptionsOverviewWidgetBP.OptionsOverviewWidgetBP_C.OnNavigationEnter
// 0x0010 (0x0010 - 0x0000)
struct OptionsOverviewWidgetBP_C_OnNavigationEnter final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsGamepadBeingUsed_0;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsOverviewWidgetBP_C_OnNavigationEnter) == 0x000008, "Wrong alignment on OptionsOverviewWidgetBP_C_OnNavigationEnter");
static_assert(sizeof(OptionsOverviewWidgetBP_C_OnNavigationEnter) == 0x000010, "Wrong size on OptionsOverviewWidgetBP_C_OnNavigationEnter");
static_assert(offsetof(OptionsOverviewWidgetBP_C_OnNavigationEnter, NavigateFromMenu) == 0x000000, "Member 'OptionsOverviewWidgetBP_C_OnNavigationEnter::NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(OptionsOverviewWidgetBP_C_OnNavigationEnter, bIsGamepadBeingUsed_0) == 0x000008, "Member 'OptionsOverviewWidgetBP_C_OnNavigationEnter::bIsGamepadBeingUsed_0' has a wrong offset!");

}

