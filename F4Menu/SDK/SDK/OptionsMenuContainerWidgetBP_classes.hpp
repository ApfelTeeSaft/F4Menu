#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuContainerWidgetBP

#include "Basic.hpp"

#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuContainerWidgetBP.OptionsMenuContainerWidgetBP_C
// 0x0038 (0x0678 - 0x0640)
class UOptionsMenuContainerWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	class UAudioSettingsWidgetBP_C*               AudioSettingsWidgetBP;                             // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlsSettingsContainerWidgetBP_C*   ControlsSettingsWidgetBP;                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreditsWidgetBP_C*                     CreditsWidgetBP;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDisplaySettingsWidgetBP_C*             DisplaySettingsWidgetBP;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameSettingsWidgetBP_C*                GameSettingsWidgetBP;                              // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsSettingsWidgetBP_C*            GraphicsSettingsWidgetBP;                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsOverviewWidgetBP_C*             OptionsOverviewWidgetBP;                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuContainerWidgetBP_C">();
	}
	static class UOptionsMenuContainerWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuContainerWidgetBP_C>();
	}
};
static_assert(alignof(UOptionsMenuContainerWidgetBP_C) == 0x000008, "Wrong alignment on UOptionsMenuContainerWidgetBP_C");
static_assert(sizeof(UOptionsMenuContainerWidgetBP_C) == 0x000678, "Wrong size on UOptionsMenuContainerWidgetBP_C");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, AudioSettingsWidgetBP) == 0x000640, "Member 'UOptionsMenuContainerWidgetBP_C::AudioSettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, ControlsSettingsWidgetBP) == 0x000648, "Member 'UOptionsMenuContainerWidgetBP_C::ControlsSettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, CreditsWidgetBP) == 0x000650, "Member 'UOptionsMenuContainerWidgetBP_C::CreditsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, DisplaySettingsWidgetBP) == 0x000658, "Member 'UOptionsMenuContainerWidgetBP_C::DisplaySettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, GameSettingsWidgetBP) == 0x000660, "Member 'UOptionsMenuContainerWidgetBP_C::GameSettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, GraphicsSettingsWidgetBP) == 0x000668, "Member 'UOptionsMenuContainerWidgetBP_C::GraphicsSettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UOptionsMenuContainerWidgetBP_C, OptionsOverviewWidgetBP) == 0x000670, "Member 'UOptionsMenuContainerWidgetBP_C::OptionsOverviewWidgetBP' has a wrong offset!");

}

