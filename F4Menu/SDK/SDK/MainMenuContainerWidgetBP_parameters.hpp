#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuContainerWidgetBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.ExecuteUbergraph_MainMenuContainerWidgetBP
// 0x0038 (0x0038 - 0x0000)
struct MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu_1;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsGamepadBeingUsed;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateToMenu;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            K2Node_Event_NavigateFromMenu;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed_1; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGlobalGeneralData_bPlayFadeAnimations; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGlobalGeneralData_PlayFadeAnimationLength; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalGeneralData_bIntroLogosSkippable; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGlobalGeneralData_bIntroEnabled;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP) == 0x000008, "Wrong alignment on MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP");
static_assert(sizeof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP) == 0x000038, "Wrong size on MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, EntryPoint) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, K2Node_Event_NavigateFromMenu_1) == 0x000008, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::K2Node_Event_NavigateFromMenu_1' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, K2Node_Event_bIsGamepadBeingUsed) == 0x000010, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::K2Node_Event_bIsGamepadBeingUsed' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, K2Node_Event_NavigateToMenu) == 0x000018, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::K2Node_Event_NavigateToMenu' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, K2Node_Event_NavigateFromMenu) == 0x000020, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::K2Node_Event_NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed) == 0x000028, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed_1) == 0x000029, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetIsGamepadBeingUsed_bIsGamepadBeingUsed_1' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetGlobalGeneralData_bPlayFadeAnimations) == 0x00002A, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetGlobalGeneralData_bPlayFadeAnimations' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetGlobalGeneralData_PlayFadeAnimationLength) == 0x00002C, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetGlobalGeneralData_PlayFadeAnimationLength' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetGlobalGeneralData_bIntroLogosSkippable) == 0x000030, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetGlobalGeneralData_bIntroLogosSkippable' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP, CallFunc_GetGlobalGeneralData_bIntroEnabled) == 0x000031, "Member 'MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP::CallFunc_GetGlobalGeneralData_bIntroEnabled' has a wrong offset!");

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.RunBenchmark
// 0x0010 (0x0010 - 0x0000)
struct MainMenuContainerWidgetBP_C_RunBenchmark final
{
public:
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIfBenchmarkAlreadyRan_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_RunBenchmark) == 0x000008, "Wrong alignment on MainMenuContainerWidgetBP_C_RunBenchmark");
static_assert(sizeof(MainMenuContainerWidgetBP_C_RunBenchmark) == 0x000010, "Wrong size on MainMenuContainerWidgetBP_C_RunBenchmark");
static_assert(offsetof(MainMenuContainerWidgetBP_C_RunBenchmark, CallFunc_GetGameUserSettings_ReturnValue) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_RunBenchmark::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_RunBenchmark, CallFunc_CheckIfBenchmarkAlreadyRan_ReturnValue) == 0x000008, "Member 'MainMenuContainerWidgetBP_C_RunBenchmark::CallFunc_CheckIfBenchmarkAlreadyRan_ReturnValue' has a wrong offset!");

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.PlayBGM
// 0x0048 (0x0048 - 0x0000)
struct MainMenuContainerWidgetBP_C_PlayBGM final
{
public:
	class USoundCue*                              NewLocalVar_0;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_SelectSound;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_BackSound;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_HoverSound;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_ChangeSound;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_SliderSound;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_BackgroundMusic;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              CallFunc_GetGlobalSounds_CreditsMusic;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_PlayBGM) == 0x000008, "Wrong alignment on MainMenuContainerWidgetBP_C_PlayBGM");
static_assert(sizeof(MainMenuContainerWidgetBP_C_PlayBGM) == 0x000048, "Wrong size on MainMenuContainerWidgetBP_C_PlayBGM");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, NewLocalVar_0) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_SelectSound) == 0x000008, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_SelectSound' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_BackSound) == 0x000010, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_BackSound' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_HoverSound) == 0x000018, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_HoverSound' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_ChangeSound) == 0x000020, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_ChangeSound' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_SliderSound) == 0x000028, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_SliderSound' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_BackgroundMusic) == 0x000030, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_BackgroundMusic' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_GetGlobalSounds_CreditsMusic) == 0x000038, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_GetGlobalSounds_CreditsMusic' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_PlayBGM, CallFunc_SpawnSound2D_ReturnValue) == 0x000040, "Member 'MainMenuContainerWidgetBP_C_PlayBGM::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.ShowLoadingScreen
// 0x0008 (0x0008 - 0x0000)
struct MainMenuContainerWidgetBP_C_ShowLoadingScreen final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Integer_MapImage;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_ShowLoadingScreen) == 0x000004, "Wrong alignment on MainMenuContainerWidgetBP_C_ShowLoadingScreen");
static_assert(sizeof(MainMenuContainerWidgetBP_C_ShowLoadingScreen) == 0x000008, "Wrong size on MainMenuContainerWidgetBP_C_ShowLoadingScreen");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ShowLoadingScreen, bIsVisible) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_ShowLoadingScreen::bIsVisible' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_ShowLoadingScreen, Integer_MapImage) == 0x000004, "Member 'MainMenuContainerWidgetBP_C_ShowLoadingScreen::Integer_MapImage' has a wrong offset!");

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.OnNavigationExit
// 0x0010 (0x0010 - 0x0000)
struct MainMenuContainerWidgetBP_C_OnNavigationExit final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateToMenu;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_OnNavigationExit) == 0x000008, "Wrong alignment on MainMenuContainerWidgetBP_C_OnNavigationExit");
static_assert(sizeof(MainMenuContainerWidgetBP_C_OnNavigationExit) == 0x000010, "Wrong size on MainMenuContainerWidgetBP_C_OnNavigationExit");
static_assert(offsetof(MainMenuContainerWidgetBP_C_OnNavigationExit, NavigateToMenu) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_OnNavigationExit::NavigateToMenu' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_OnNavigationExit, NavigateFromMenu) == 0x000008, "Member 'MainMenuContainerWidgetBP_C_OnNavigationExit::NavigateFromMenu' has a wrong offset!");

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.OnNavigationEnter
// 0x0010 (0x0010 - 0x0000)
struct MainMenuContainerWidgetBP_C_OnNavigationEnter final
{
public:
	class UInteractableMenuWidgetBP_C*            NavigateFromMenu;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bIsGamepadBeingUsed;                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuContainerWidgetBP_C_OnNavigationEnter) == 0x000008, "Wrong alignment on MainMenuContainerWidgetBP_C_OnNavigationEnter");
static_assert(sizeof(MainMenuContainerWidgetBP_C_OnNavigationEnter) == 0x000010, "Wrong size on MainMenuContainerWidgetBP_C_OnNavigationEnter");
static_assert(offsetof(MainMenuContainerWidgetBP_C_OnNavigationEnter, NavigateFromMenu) == 0x000000, "Member 'MainMenuContainerWidgetBP_C_OnNavigationEnter::NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(MainMenuContainerWidgetBP_C_OnNavigationEnter, Param_bIsGamepadBeingUsed) == 0x000008, "Member 'MainMenuContainerWidgetBP_C_OnNavigationEnter::Param_bIsGamepadBeingUsed' has a wrong offset!");

}
