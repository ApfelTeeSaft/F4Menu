#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadKey_Move

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GlobalInteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadKey_Move.GamepadKey_Move_C
// 0x0060 (0x0658 - 0x05F8)
class UGamepadKey_Move_C final : public UGlobalInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GamepadKey_Move_C;                  // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                GamepadButton;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamepadButtonImage;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GamepadButtonText;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             KeyTexture;                                        // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   KeyGamepad;                                        // 0x0620(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                           GamepadButtonBgColor;                              // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GamepadButtonHighlightColor;                       // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GamepadKey_Move(int32 EntryPoint);
	void OnGlobalSettingsApply();
	void PreConstruct(bool IsDesignTime);
	void SetGlobalSettings();
	void SetText(const class FText& InText);
	void SetTexture(class UTexture2D* Texture);
	void Highlight(bool bHighlight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadKey_Move_C">();
	}
	static class UGamepadKey_Move_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadKey_Move_C>();
	}
};
static_assert(alignof(UGamepadKey_Move_C) == 0x000008, "Wrong alignment on UGamepadKey_Move_C");
static_assert(sizeof(UGamepadKey_Move_C) == 0x000658, "Wrong size on UGamepadKey_Move_C");
static_assert(offsetof(UGamepadKey_Move_C, UberGraphFrame_GamepadKey_Move_C) == 0x0005F8, "Member 'UGamepadKey_Move_C::UberGraphFrame_GamepadKey_Move_C' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, GamepadButton) == 0x000600, "Member 'UGamepadKey_Move_C::GamepadButton' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, GamepadButtonImage) == 0x000608, "Member 'UGamepadKey_Move_C::GamepadButtonImage' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, GamepadButtonText) == 0x000610, "Member 'UGamepadKey_Move_C::GamepadButtonText' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, KeyTexture) == 0x000618, "Member 'UGamepadKey_Move_C::KeyTexture' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, KeyGamepad) == 0x000620, "Member 'UGamepadKey_Move_C::KeyGamepad' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, GamepadButtonBgColor) == 0x000638, "Member 'UGamepadKey_Move_C::GamepadButtonBgColor' has a wrong offset!");
static_assert(offsetof(UGamepadKey_Move_C, GamepadButtonHighlightColor) == 0x000648, "Member 'UGamepadKey_Move_C::GamepadButtonHighlightColor' has a wrong offset!");

}

