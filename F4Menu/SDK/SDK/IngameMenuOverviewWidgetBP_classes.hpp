#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IngameMenuOverviewWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IngameMenuOverviewWidgetBP.IngameMenuOverviewWidgetBP_C
// 0x00B8 (0x06F8 - 0x0640)
class UIngameMenuOverviewWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_IngameMenuOverviewWidgetBP_C;       // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UDecisionDialogWidgetBP_C*              DecisionDialogWidgetBP;                            // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBackGround;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          LoadButton;                                        // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          MainMenuButton;                                    // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          OptionsButton;                                     // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PauseBorder;                                       // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PauseTitleText;                                    // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          QuitButton;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          ReStartButton;                                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          ResumeButton;                                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainButton_C*                          SaveButton;                                        // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SeparatorBorder;                                   // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SeparatorBorder_1;                                 // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsPicker_IngameVer_C*             TipUI_OnOff_Button;                                // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TutoImage;                                         // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   MainMenuLevel;                                     // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngameMenuContainerWidgetBP_C*         IngameMenuWidget;                                  // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamMulti_GameInstance_C*             ALTF4_GI;                                          // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         SelectTutoImage;                                   // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E4[0x4];                                      // 0x06E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     TutoImageArray;                                    // 0x06E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_IngameMenuOverviewWidgetBP(int32 EntryPoint);
	void BndEvt__IngameMenuOverviewWidgetBP_OptionsPicker_IngameVer_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void RandomTutoImage();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__IngameMenuOverviewWidgetBP_ReStartButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_6_DecisionDecline__DelegateSignature();
	void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature();
	void OnGlobalSettingsApply();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__LoadButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void SetGlobalSettings();
	void ShowDecisionDialog();
	void OnPressedBack();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
	void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IngameMenuOverviewWidgetBP_C">();
	}
	static class UIngameMenuOverviewWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIngameMenuOverviewWidgetBP_C>();
	}
};
static_assert(alignof(UIngameMenuOverviewWidgetBP_C) == 0x000008, "Wrong alignment on UIngameMenuOverviewWidgetBP_C");
static_assert(sizeof(UIngameMenuOverviewWidgetBP_C) == 0x0006F8, "Wrong size on UIngameMenuOverviewWidgetBP_C");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, UberGraphFrame_IngameMenuOverviewWidgetBP_C) == 0x000640, "Member 'UIngameMenuOverviewWidgetBP_C::UberGraphFrame_IngameMenuOverviewWidgetBP_C' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, DecisionDialogWidgetBP) == 0x000648, "Member 'UIngameMenuOverviewWidgetBP_C::DecisionDialogWidgetBP' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, ImageBackGround) == 0x000650, "Member 'UIngameMenuOverviewWidgetBP_C::ImageBackGround' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, LoadButton) == 0x000658, "Member 'UIngameMenuOverviewWidgetBP_C::LoadButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, MainMenuButton) == 0x000660, "Member 'UIngameMenuOverviewWidgetBP_C::MainMenuButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, MenuCanvasPanel) == 0x000668, "Member 'UIngameMenuOverviewWidgetBP_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, OptionsButton) == 0x000670, "Member 'UIngameMenuOverviewWidgetBP_C::OptionsButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, PauseBorder) == 0x000678, "Member 'UIngameMenuOverviewWidgetBP_C::PauseBorder' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, PauseTitleText) == 0x000680, "Member 'UIngameMenuOverviewWidgetBP_C::PauseTitleText' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, QuitButton) == 0x000688, "Member 'UIngameMenuOverviewWidgetBP_C::QuitButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, ReStartButton) == 0x000690, "Member 'UIngameMenuOverviewWidgetBP_C::ReStartButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, ResumeButton) == 0x000698, "Member 'UIngameMenuOverviewWidgetBP_C::ResumeButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, SaveButton) == 0x0006A0, "Member 'UIngameMenuOverviewWidgetBP_C::SaveButton' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, SeparatorBorder) == 0x0006A8, "Member 'UIngameMenuOverviewWidgetBP_C::SeparatorBorder' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, SeparatorBorder_1) == 0x0006B0, "Member 'UIngameMenuOverviewWidgetBP_C::SeparatorBorder_1' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, TipUI_OnOff_Button) == 0x0006B8, "Member 'UIngameMenuOverviewWidgetBP_C::TipUI_OnOff_Button' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, TutoImage) == 0x0006C0, "Member 'UIngameMenuOverviewWidgetBP_C::TutoImage' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, MainMenuLevel) == 0x0006C8, "Member 'UIngameMenuOverviewWidgetBP_C::MainMenuLevel' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, IngameMenuWidget) == 0x0006D0, "Member 'UIngameMenuOverviewWidgetBP_C::IngameMenuWidget' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, ALTF4_GI) == 0x0006D8, "Member 'UIngameMenuOverviewWidgetBP_C::ALTF4_GI' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, SelectTutoImage) == 0x0006E0, "Member 'UIngameMenuOverviewWidgetBP_C::SelectTutoImage' has a wrong offset!");
static_assert(offsetof(UIngameMenuOverviewWidgetBP_C, TutoImageArray) == 0x0006E8, "Member 'UIngameMenuOverviewWidgetBP_C::TutoImageArray' has a wrong offset!");

}

