#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRecordMenuWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemRecordMenuWidgetBP.ItemRecordMenuWidgetBP_C
// 0x0070 (0x06B0 - 0x0640)
class UItemRecordMenuWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemRecordMenuWidgetBP_C;           // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavigationKeyButton_C*                 BackButton;                                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDecisionDialogWidgetBP_C*              DecisionDialogWidgetBP;                            // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDemoWidget_Item_Mainmenu_C*            DemoWidget_Item_Mainmenu;                          // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingScreenWidgetBP_C*               LoadingScreenWidgetBP;                             // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MapSelectBorder;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MapSelectPanel;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MenuTitleText;                                     // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCenterButton_C*                        ShowTop50_Button;                                  // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedBack;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMainMenuContainerWidgetBP_C*           MainMenuWidget;                                    // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamMulti_GameInstance_C*             ALTF4_GI;                                          // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void OnClickedBack__DelegateSignature();
	void ExecuteUbergraph_ItemRecordMenuWidgetBP(int32 EntryPoint);
	void BndEvt__ItemRecordMenuWidgetBP_CenterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnGlobalSettingsApply();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void SetGlobalSettings();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
	void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed);
	void OnPressedBack();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRecordMenuWidgetBP_C">();
	}
	static class UItemRecordMenuWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRecordMenuWidgetBP_C>();
	}
};
static_assert(alignof(UItemRecordMenuWidgetBP_C) == 0x000008, "Wrong alignment on UItemRecordMenuWidgetBP_C");
static_assert(sizeof(UItemRecordMenuWidgetBP_C) == 0x0006B0, "Wrong size on UItemRecordMenuWidgetBP_C");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, UberGraphFrame_ItemRecordMenuWidgetBP_C) == 0x000640, "Member 'UItemRecordMenuWidgetBP_C::UberGraphFrame_ItemRecordMenuWidgetBP_C' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, BackButton) == 0x000648, "Member 'UItemRecordMenuWidgetBP_C::BackButton' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, DecisionDialogWidgetBP) == 0x000650, "Member 'UItemRecordMenuWidgetBP_C::DecisionDialogWidgetBP' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, DemoWidget_Item_Mainmenu) == 0x000658, "Member 'UItemRecordMenuWidgetBP_C::DemoWidget_Item_Mainmenu' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, LoadingScreenWidgetBP) == 0x000660, "Member 'UItemRecordMenuWidgetBP_C::LoadingScreenWidgetBP' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, MapSelectBorder) == 0x000668, "Member 'UItemRecordMenuWidgetBP_C::MapSelectBorder' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, MapSelectPanel) == 0x000670, "Member 'UItemRecordMenuWidgetBP_C::MapSelectPanel' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, MenuCanvasPanel) == 0x000678, "Member 'UItemRecordMenuWidgetBP_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, MenuTitleText) == 0x000680, "Member 'UItemRecordMenuWidgetBP_C::MenuTitleText' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, ShowTop50_Button) == 0x000688, "Member 'UItemRecordMenuWidgetBP_C::ShowTop50_Button' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, OnClickedBack) == 0x000690, "Member 'UItemRecordMenuWidgetBP_C::OnClickedBack' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, MainMenuWidget) == 0x0006A0, "Member 'UItemRecordMenuWidgetBP_C::MainMenuWidget' has a wrong offset!");
static_assert(offsetof(UItemRecordMenuWidgetBP_C, ALTF4_GI) == 0x0006A8, "Member 'UItemRecordMenuWidgetBP_C::ALTF4_GI' has a wrong offset!");

}
