#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecisionDialogWidgetBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.ExecuteUbergraph_DecisionDialogWidgetBP
// 0x0038 (0x0038 - 0x0000)
struct DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu_1;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsGamepadBeingUsed;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateToMenu;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP) == 0x000008, "Wrong alignment on DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP");
static_assert(sizeof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP) == 0x000038, "Wrong size on DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, EntryPoint) == 0x000000, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, K2Node_Event_NavigateFromMenu_1) == 0x000008, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::K2Node_Event_NavigateFromMenu_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, K2Node_Event_bIsGamepadBeingUsed) == 0x000010, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::K2Node_Event_bIsGamepadBeingUsed' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, K2Node_Event_NavigateToMenu) == 0x000018, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::K2Node_Event_NavigateToMenu' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, K2Node_Event_NavigateFromMenu) == 0x000020, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::K2Node_Event_NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, K2Node_Event_IsDesignTime) == 0x000028, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.SetGlobalSettings
// 0x05C0 (0x05C0 - 0x0000)
struct DecisionDialogWidgetBP_C_SetGlobalSettings final
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
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont;                  // 0x0120(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont;            // 0x0178(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont;           // 0x01D0(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont;            // 0x0228(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont;                 // 0x0280(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase;             // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_2;              // 0x02DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_2;         // 0x02EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_2;    // 0x02FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_2;    // 0x030C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_2;  // 0x031C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_2;            // 0x032C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_2;            // 0x033C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_2;    // 0x034C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_2;  // 0x035C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont_1;                // 0x0370(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont_1;          // 0x03C8(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont_1;         // 0x0420(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont_1;          // 0x0478(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont_1;               // 0x04D0(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase_1;           // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529[0x3];                                      // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_3;              // 0x052C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_3;         // 0x053C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_3;    // 0x054C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_3;    // 0x055C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_3;  // 0x056C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_3;            // 0x057C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_3;            // 0x058C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_3;    // 0x059C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_3;  // 0x05AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionDialogWidgetBP_C_SetGlobalSettings) == 0x000008, "Wrong alignment on DecisionDialogWidgetBP_C_SetGlobalSettings");
static_assert(sizeof(DecisionDialogWidgetBP_C_SetGlobalSettings) == 0x0005C0, "Wrong size on DecisionDialogWidgetBP_C_SetGlobalSettings");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x000000, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x000010, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x000020, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x000030, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x000040, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x000050, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x000060, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x000070, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x000080, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_1) == 0x000090, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_1) == 0x0000A0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_1) == 0x0000B0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_1) == 0x0000C0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_1) == 0x0000D0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_1) == 0x0000E0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_1) == 0x0000F0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_1) == 0x000100, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_1) == 0x000110, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont) == 0x000120, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont) == 0x000178, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont) == 0x0001D0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont) == 0x000228, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont) == 0x000280, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase) == 0x0002D8, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_2) == 0x0002DC, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_2) == 0x0002EC, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_2) == 0x0002FC, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_2) == 0x00030C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_2) == 0x00031C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_2) == 0x00032C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_2) == 0x00033C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_2) == 0x00034C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_2) == 0x00035C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont_1) == 0x000370, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont_1) == 0x0003C8, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont_1) == 0x000420, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont_1) == 0x000478, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont_1) == 0x0004D0, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase_1) == 0x000528, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase_1' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_3) == 0x00052C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_3) == 0x00053C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_3) == 0x00054C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_3) == 0x00055C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_3) == 0x00056C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_3) == 0x00057C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_3) == 0x00058C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_3) == 0x00059C, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_3' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_3) == 0x0005AC, "Member 'DecisionDialogWidgetBP_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_3' has a wrong offset!");

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DecisionDialogWidgetBP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DecisionDialogWidgetBP_C_PreConstruct) == 0x000001, "Wrong alignment on DecisionDialogWidgetBP_C_PreConstruct");
static_assert(sizeof(DecisionDialogWidgetBP_C_PreConstruct) == 0x000001, "Wrong size on DecisionDialogWidgetBP_C_PreConstruct");
static_assert(offsetof(DecisionDialogWidgetBP_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DecisionDialogWidgetBP_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.OnNavigationExit
// 0x0010 (0x0010 - 0x0000)
struct DecisionDialogWidgetBP_C_OnNavigationExit final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateToMenu;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionDialogWidgetBP_C_OnNavigationExit) == 0x000008, "Wrong alignment on DecisionDialogWidgetBP_C_OnNavigationExit");
static_assert(sizeof(DecisionDialogWidgetBP_C_OnNavigationExit) == 0x000010, "Wrong size on DecisionDialogWidgetBP_C_OnNavigationExit");
static_assert(offsetof(DecisionDialogWidgetBP_C_OnNavigationExit, NavigateToMenu) == 0x000000, "Member 'DecisionDialogWidgetBP_C_OnNavigationExit::NavigateToMenu' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_OnNavigationExit, NavigateFromMenu) == 0x000008, "Member 'DecisionDialogWidgetBP_C_OnNavigationExit::NavigateFromMenu' has a wrong offset!");

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.OnNavigationEnter
// 0x0010 (0x0010 - 0x0000)
struct DecisionDialogWidgetBP_C_OnNavigationEnter final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsGamepadBeingUsed_0;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DecisionDialogWidgetBP_C_OnNavigationEnter) == 0x000008, "Wrong alignment on DecisionDialogWidgetBP_C_OnNavigationEnter");
static_assert(sizeof(DecisionDialogWidgetBP_C_OnNavigationEnter) == 0x000010, "Wrong size on DecisionDialogWidgetBP_C_OnNavigationEnter");
static_assert(offsetof(DecisionDialogWidgetBP_C_OnNavigationEnter, NavigateFromMenu) == 0x000000, "Member 'DecisionDialogWidgetBP_C_OnNavigationEnter::NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(DecisionDialogWidgetBP_C_OnNavigationEnter, bIsGamepadBeingUsed_0) == 0x000008, "Member 'DecisionDialogWidgetBP_C_OnNavigationEnter::bIsGamepadBeingUsed_0' has a wrong offset!");

}

