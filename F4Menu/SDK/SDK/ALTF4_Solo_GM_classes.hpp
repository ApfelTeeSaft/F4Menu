#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF4_Solo_GM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ALTF4_Solo_GM.ALTF4_Solo_GM_C
// 0x0048 (0x0308 - 0x02C0)
class AALTF4_Solo_GM_C final : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          GamemodeFinish;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TimeSeconds;                                       // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeMinutes;                                       // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeHours;                                         // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Username;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class USteamMulti_GameInstance_C*             ALTF4_GI;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemArrayInteger;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseItemInteger;                                    // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaitItemInteger;                                   // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChickGO_LeftoverItems_;                            // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NinStageStart;                                     // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NinStage_FirstOpen;                                // 0x0306(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ALTF4_Solo_GM(int32 EntryPoint);
	void Finish_NinStage();
	void NinStage_Start();
	void ReceiveBeginPlay();
	void FinishRecord();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALTF4_Solo_GM_C">();
	}
	static class AALTF4_Solo_GM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AALTF4_Solo_GM_C>();
	}
};
static_assert(alignof(AALTF4_Solo_GM_C) == 0x000008, "Wrong alignment on AALTF4_Solo_GM_C");
static_assert(sizeof(AALTF4_Solo_GM_C) == 0x000308, "Wrong size on AALTF4_Solo_GM_C");
static_assert(offsetof(AALTF4_Solo_GM_C, UberGraphFrame) == 0x0002C0, "Member 'AALTF4_Solo_GM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, DefaultSceneRoot) == 0x0002C8, "Member 'AALTF4_Solo_GM_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, GamemodeFinish) == 0x0002D0, "Member 'AALTF4_Solo_GM_C::GamemodeFinish' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, TimeSeconds) == 0x0002D4, "Member 'AALTF4_Solo_GM_C::TimeSeconds' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, TimeMinutes) == 0x0002D8, "Member 'AALTF4_Solo_GM_C::TimeMinutes' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, TimeHours) == 0x0002DC, "Member 'AALTF4_Solo_GM_C::TimeHours' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, Username) == 0x0002E0, "Member 'AALTF4_Solo_GM_C::Username' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, ALTF4_GI) == 0x0002F0, "Member 'AALTF4_Solo_GM_C::ALTF4_GI' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, ItemArrayInteger) == 0x0002F8, "Member 'AALTF4_Solo_GM_C::ItemArrayInteger' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, UseItemInteger) == 0x0002FC, "Member 'AALTF4_Solo_GM_C::UseItemInteger' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, WaitItemInteger) == 0x000300, "Member 'AALTF4_Solo_GM_C::WaitItemInteger' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, ChickGO_LeftoverItems_) == 0x000304, "Member 'AALTF4_Solo_GM_C::ChickGO_LeftoverItems_' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, NinStageStart) == 0x000305, "Member 'AALTF4_Solo_GM_C::NinStageStart' has a wrong offset!");
static_assert(offsetof(AALTF4_Solo_GM_C, NinStage_FirstOpen) == 0x000306, "Member 'AALTF4_Solo_GM_C::NinStage_FirstOpen' has a wrong offset!");

}
