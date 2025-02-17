#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: YouDie_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass YouDie_UI.YouDie_UI_C
// 0x0050 (0x02B0 - 0x0260)
class UYouDie_UI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Text_FadeIN;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BG_FadeIN;                                         // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DeathImage;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Die_UI_01;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Die_UI_02;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_109;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Array_DeathImage;                                  // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DieUI_RandomValue;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_YouDie_UI(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"YouDie_UI_C">();
	}
	static class UYouDie_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UYouDie_UI_C>();
	}
};
static_assert(alignof(UYouDie_UI_C) == 0x000008, "Wrong alignment on UYouDie_UI_C");
static_assert(sizeof(UYouDie_UI_C) == 0x0002B0, "Wrong size on UYouDie_UI_C");
static_assert(offsetof(UYouDie_UI_C, UberGraphFrame) == 0x000260, "Member 'UYouDie_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, Text_FadeIN) == 0x000268, "Member 'UYouDie_UI_C::Text_FadeIN' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, BG_FadeIN) == 0x000270, "Member 'UYouDie_UI_C::BG_FadeIN' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, DeathImage) == 0x000278, "Member 'UYouDie_UI_C::DeathImage' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, Die_UI_01) == 0x000280, "Member 'UYouDie_UI_C::Die_UI_01' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, Die_UI_02) == 0x000288, "Member 'UYouDie_UI_C::Die_UI_02' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, Image_109) == 0x000290, "Member 'UYouDie_UI_C::Image_109' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, Array_DeathImage) == 0x000298, "Member 'UYouDie_UI_C::Array_DeathImage' has a wrong offset!");
static_assert(offsetof(UYouDie_UI_C, DieUI_RandomValue) == 0x0002A8, "Member 'UYouDie_UI_C::DieUI_RandomValue' has a wrong offset!");

}

