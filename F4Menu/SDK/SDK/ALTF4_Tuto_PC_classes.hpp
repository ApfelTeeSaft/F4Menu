#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF4_Tuto_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ALTF4_Tuto_PC.ALTF4_Tuto_PC_C
// 0x0010 (0x0580 - 0x0570)
class AALTF4_Tuto_PC_C final : public APlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMenuControllerComponent_C*             MenuControllerComponent;                           // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ALTF4_Tuto_PC(int32 EntryPoint);
	void ReceiveBeginPlay();
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALTF4_Tuto_PC_C">();
	}
	static class AALTF4_Tuto_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AALTF4_Tuto_PC_C>();
	}
};
static_assert(alignof(AALTF4_Tuto_PC_C) == 0x000008, "Wrong alignment on AALTF4_Tuto_PC_C");
static_assert(sizeof(AALTF4_Tuto_PC_C) == 0x000580, "Wrong size on AALTF4_Tuto_PC_C");
static_assert(offsetof(AALTF4_Tuto_PC_C, UberGraphFrame) == 0x000570, "Member 'AALTF4_Tuto_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AALTF4_Tuto_PC_C, MenuControllerComponent) == 0x000578, "Member 'AALTF4_Tuto_PC_C::MenuControllerComponent' has a wrong offset!");

}

