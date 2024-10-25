#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IngameMenuContainerWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IngameMenuContainerWidgetBP.IngameMenuContainerWidgetBP_C
// 0x0020 (0x0660 - 0x0640)
class UIngameMenuContainerWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_IngameMenuContainerWidgetBP_C;      // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UIngameMenuOverviewWidgetBP_C*          IngameMenuOverviewWidgetBP;                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuContainerWidgetBP_C*        OptionsMenuWidgetBP;                               // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IngameMenuContainerWidgetBP(int32 EntryPoint);
	void ResumeGame();
	void Construct();
	void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
	void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IngameMenuContainerWidgetBP_C">();
	}
	static class UIngameMenuContainerWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIngameMenuContainerWidgetBP_C>();
	}
};
static_assert(alignof(UIngameMenuContainerWidgetBP_C) == 0x000008, "Wrong alignment on UIngameMenuContainerWidgetBP_C");
static_assert(sizeof(UIngameMenuContainerWidgetBP_C) == 0x000660, "Wrong size on UIngameMenuContainerWidgetBP_C");
static_assert(offsetof(UIngameMenuContainerWidgetBP_C, UberGraphFrame_IngameMenuContainerWidgetBP_C) == 0x000640, "Member 'UIngameMenuContainerWidgetBP_C::UberGraphFrame_IngameMenuContainerWidgetBP_C' has a wrong offset!");
static_assert(offsetof(UIngameMenuContainerWidgetBP_C, IngameMenuOverviewWidgetBP) == 0x000648, "Member 'UIngameMenuContainerWidgetBP_C::IngameMenuOverviewWidgetBP' has a wrong offset!");
static_assert(offsetof(UIngameMenuContainerWidgetBP_C, MenuCanvasPanel) == 0x000650, "Member 'UIngameMenuContainerWidgetBP_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UIngameMenuContainerWidgetBP_C, OptionsMenuWidgetBP) == 0x000658, "Member 'UIngameMenuContainerWidgetBP_C::OptionsMenuWidgetBP' has a wrong offset!");

}

