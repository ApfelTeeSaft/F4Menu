#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplaySettingsWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DisplaySettingsWidgetBP.DisplaySettingsWidgetBP_C
// 0x00E0 (0x0720 - 0x0640)
class UDisplaySettingsWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_DisplaySettingsWidgetBP_C;          // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavigationKeyButton_C*                 ApplyButton;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationKeyButton_C*                 BackButton;                                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsSlider_C*                       BrightnessOptionsSlider;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDecisionDialogWidgetBP_C*              DecisionDialogWidgetBP;                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsPicker_C*                       DisplayResolutionOptionsPicker;                    // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsSlider_C*                       FOVOptionsSlider;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftBorder;                                        // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftSeparatorBorder;                               // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftTitleBorder;                                   // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsPicker_C*                       LockFPSOptionsPicker;                              // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuScrollBox_C*                       MenuScrollBox;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MenuTitleText;                                     // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationKeyButton_C*                 ResetButton;                                       // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightBorder;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightTitleBorder;                                  // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionDescription;                         // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionName;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsPicker_C*                       VSyncOptionsPicker;                                // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsPicker_C*                       WindowModeOptionsPicker;                           // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedBack;                                     // 0x06E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOptionsOverviewWidgetBP_C*             OptionsOverviewWidget;                             // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDirty;                                          // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701[0x3];                                      // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoadedWindowMode;                                  // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoadedScreenResolution;                            // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoadedFrameRateLimit;                              // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadedVSyncEnabled;                                // 0x0710(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711[0x3];                                      // 0x0711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LoadedResolutionScale;                             // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoadedBrightness;                                  // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoadedFieldOfView;                                 // 0x071C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickedBack__DelegateSignature();
	void ExecuteUbergraph_DisplaySettingsWidgetBP(int32 EntryPoint);
	void BndEvt__FOVOptionsSlider_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature();
	void BndEvt__FOVOptionsSlider_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature();
	void OnPressedSelect();
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_17_DecisionDecline__DelegateSignature();
	void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_5_DecisionAccept__DelegateSignature();
	void OnGlobalSettingsApply();
	void BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_16_OnFocussed__DelegateSignature();
	void BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_6_OnFocussed__DelegateSignature();
	void BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_4_OnFocussed__DelegateSignature();
	void BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_3_OnFocussed__DelegateSignature();
	void BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_1_OnFocussed__DelegateSignature();
	void BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature();
	void BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
	void ApplyDisplaySettings();
	void SplitResolution(const class FText& Resolution, int32* X, int32* Y);
	void LoadDisplaySettings();
	void SetupDisplayResolutions();
	void MarkSettingsAsDirty();
	void ResetDisplaySettings();
	void SetGammaCorrection(float InGammaValue);
	void ShowDecisionDialog();
	void UpdateDescription(class UInteractableUserWidget_C* InWidget);
	void SetGlobalSettings();
	void SetFrameRatePicker(float InFrameRate);
	void DirtyCheck(bool* bIsReallyDirty);
	void GetSavedDisplaySettings();
	void GetFrameRateIndex(float InFrameRate, int32* OutIndex);
	void SetFieldOfView(float InValue);
	void OnPressedReset();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
	void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed);
	void OnPressedBack();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisplaySettingsWidgetBP_C">();
	}
	static class UDisplaySettingsWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisplaySettingsWidgetBP_C>();
	}
};
static_assert(alignof(UDisplaySettingsWidgetBP_C) == 0x000008, "Wrong alignment on UDisplaySettingsWidgetBP_C");
static_assert(sizeof(UDisplaySettingsWidgetBP_C) == 0x000720, "Wrong size on UDisplaySettingsWidgetBP_C");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, UberGraphFrame_DisplaySettingsWidgetBP_C) == 0x000640, "Member 'UDisplaySettingsWidgetBP_C::UberGraphFrame_DisplaySettingsWidgetBP_C' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, ApplyButton) == 0x000648, "Member 'UDisplaySettingsWidgetBP_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, BackButton) == 0x000650, "Member 'UDisplaySettingsWidgetBP_C::BackButton' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, BrightnessOptionsSlider) == 0x000658, "Member 'UDisplaySettingsWidgetBP_C::BrightnessOptionsSlider' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, DecisionDialogWidgetBP) == 0x000660, "Member 'UDisplaySettingsWidgetBP_C::DecisionDialogWidgetBP' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, DisplayResolutionOptionsPicker) == 0x000668, "Member 'UDisplaySettingsWidgetBP_C::DisplayResolutionOptionsPicker' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, FOVOptionsSlider) == 0x000670, "Member 'UDisplaySettingsWidgetBP_C::FOVOptionsSlider' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LeftBorder) == 0x000678, "Member 'UDisplaySettingsWidgetBP_C::LeftBorder' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LeftSeparatorBorder) == 0x000680, "Member 'UDisplaySettingsWidgetBP_C::LeftSeparatorBorder' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LeftTitleBorder) == 0x000688, "Member 'UDisplaySettingsWidgetBP_C::LeftTitleBorder' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LockFPSOptionsPicker) == 0x000690, "Member 'UDisplaySettingsWidgetBP_C::LockFPSOptionsPicker' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, MenuCanvasPanel) == 0x000698, "Member 'UDisplaySettingsWidgetBP_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, MenuScrollBox) == 0x0006A0, "Member 'UDisplaySettingsWidgetBP_C::MenuScrollBox' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, MenuTitleText) == 0x0006A8, "Member 'UDisplaySettingsWidgetBP_C::MenuTitleText' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, ResetButton) == 0x0006B0, "Member 'UDisplaySettingsWidgetBP_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, RightBorder) == 0x0006B8, "Member 'UDisplaySettingsWidgetBP_C::RightBorder' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, RightTitleBorder) == 0x0006C0, "Member 'UDisplaySettingsWidgetBP_C::RightTitleBorder' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, SelectedOptionDescription) == 0x0006C8, "Member 'UDisplaySettingsWidgetBP_C::SelectedOptionDescription' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, SelectedOptionName) == 0x0006D0, "Member 'UDisplaySettingsWidgetBP_C::SelectedOptionName' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, VSyncOptionsPicker) == 0x0006D8, "Member 'UDisplaySettingsWidgetBP_C::VSyncOptionsPicker' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, WindowModeOptionsPicker) == 0x0006E0, "Member 'UDisplaySettingsWidgetBP_C::WindowModeOptionsPicker' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, OnClickedBack) == 0x0006E8, "Member 'UDisplaySettingsWidgetBP_C::OnClickedBack' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, OptionsOverviewWidget) == 0x0006F8, "Member 'UDisplaySettingsWidgetBP_C::OptionsOverviewWidget' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, bIsDirty) == 0x000700, "Member 'UDisplaySettingsWidgetBP_C::bIsDirty' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedWindowMode) == 0x000704, "Member 'UDisplaySettingsWidgetBP_C::LoadedWindowMode' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedScreenResolution) == 0x000708, "Member 'UDisplaySettingsWidgetBP_C::LoadedScreenResolution' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedFrameRateLimit) == 0x00070C, "Member 'UDisplaySettingsWidgetBP_C::LoadedFrameRateLimit' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedVSyncEnabled) == 0x000710, "Member 'UDisplaySettingsWidgetBP_C::LoadedVSyncEnabled' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedResolutionScale) == 0x000714, "Member 'UDisplaySettingsWidgetBP_C::LoadedResolutionScale' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedBrightness) == 0x000718, "Member 'UDisplaySettingsWidgetBP_C::LoadedBrightness' has a wrong offset!");
static_assert(offsetof(UDisplaySettingsWidgetBP_C, LoadedFieldOfView) == 0x00071C, "Member 'UDisplaySettingsWidgetBP_C::LoadedFieldOfView' has a wrong offset!");

}
