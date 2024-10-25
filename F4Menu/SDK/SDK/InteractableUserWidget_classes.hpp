#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractableUserWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GlobalInteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractableUserWidget.InteractableUserWidget_C
// 0x00B0 (0x06A8 - 0x05F8)
class UInteractableUserWidget_C : public UGlobalInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_InteractableUserWidget_C;           // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   OptionName;                                        // 0x0620(0x0018)(Edit, BlueprintVisible)
	class FText                                   OptionDescription;                                 // 0x0638(0x0018)(Edit, BlueprintVisible)
	int32                                         SelfIndex;                                         // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_654[0x4];                                      // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableUserWidget_C*              PreviousInteractableWidget;                        // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableUserWidget_C*              NextInteractableWidget;                            // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableUserWidget_C*              FirstInteractableWidget;                           // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableUserWidget_C*              LastInteractableWidget;                            // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowFocusLost;                                   // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bVerticalNavigation;                               // 0x0679(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A[0x6];                                      // 0x067A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFocussed;                                        // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInteractableMenuWidgetBP_C*            ParentMenuWidget;                                  // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             OptionImage;                                       // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWidgetEnabled;                                  // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bPlaySelectSound;                                  // 0x06A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
	void OnFocussed__DelegateSignature();
	void ExecuteUbergraph_InteractableUserWidget(int32 EntryPoint);
	void OnPressedExtra();
	void OnPressedReset();
	void OnWidgetEnabled();
	void OnSetupNavigation();
	void Construct();
	void OnChangeInputDevice(bool bIsGamepadBeingUsed_0);
	void OnPressedLeft();
	void OnPressedRight();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void OnPressedBack();
	void OnPressedSelect();
	void OnPressedDown();
	void OnPressedUp();
	void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
	void SetupNavigation();
	void UnhoverAllAndHoverSelf(bool bPlaySound);
	void SetAllNavigation(bool bAllowNavigation_0, bool bIgnoreParentMenu);
	void FocusWidget(class UInteractableUserWidget_C* InWidget);
	void FindFirstAndLastWidget();
	void PlayHoverSound(bool bIsHovered, bool PlaySound_0);
	void PlaySelectSound();
	void PlayChangeSound();
	void PlaySliderSound(bool bPlaySound);
	void CreateChangeInputDeviceUIEvent();
	void SetSelfAsLastSelectedWidget();
	void EnableWidget(bool bIsWidgetEnabled_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractableUserWidget_C">();
	}
	static class UInteractableUserWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractableUserWidget_C>();
	}
};
static_assert(alignof(UInteractableUserWidget_C) == 0x000008, "Wrong alignment on UInteractableUserWidget_C");
static_assert(sizeof(UInteractableUserWidget_C) == 0x0006A8, "Wrong size on UInteractableUserWidget_C");
static_assert(offsetof(UInteractableUserWidget_C, UberGraphFrame_InteractableUserWidget_C) == 0x0005F8, "Member 'UInteractableUserWidget_C::UberGraphFrame_InteractableUserWidget_C' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OnHovered) == 0x000600, "Member 'UInteractableUserWidget_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OnClicked) == 0x000610, "Member 'UInteractableUserWidget_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OptionName) == 0x000620, "Member 'UInteractableUserWidget_C::OptionName' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OptionDescription) == 0x000638, "Member 'UInteractableUserWidget_C::OptionDescription' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, SelfIndex) == 0x000650, "Member 'UInteractableUserWidget_C::SelfIndex' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, PreviousInteractableWidget) == 0x000658, "Member 'UInteractableUserWidget_C::PreviousInteractableWidget' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, NextInteractableWidget) == 0x000660, "Member 'UInteractableUserWidget_C::NextInteractableWidget' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, FirstInteractableWidget) == 0x000668, "Member 'UInteractableUserWidget_C::FirstInteractableWidget' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, LastInteractableWidget) == 0x000670, "Member 'UInteractableUserWidget_C::LastInteractableWidget' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, bAllowFocusLost) == 0x000678, "Member 'UInteractableUserWidget_C::bAllowFocusLost' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, bVerticalNavigation) == 0x000679, "Member 'UInteractableUserWidget_C::bVerticalNavigation' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OnFocussed) == 0x000680, "Member 'UInteractableUserWidget_C::OnFocussed' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, ParentMenuWidget) == 0x000690, "Member 'UInteractableUserWidget_C::ParentMenuWidget' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, OptionImage) == 0x000698, "Member 'UInteractableUserWidget_C::OptionImage' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, bIsWidgetEnabled) == 0x0006A0, "Member 'UInteractableUserWidget_C::bIsWidgetEnabled' has a wrong offset!");
static_assert(offsetof(UInteractableUserWidget_C, bPlaySelectSound) == 0x0006A1, "Member 'UInteractableUserWidget_C::bPlaySelectSound' has a wrong offset!");

}

