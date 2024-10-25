#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_BarNpc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DynamicNode_structs.hpp"
#include "DynamicNode_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_BarNpc.AnimBP_BarNpc_C
// 0x03F0 (0x19B0 - 0x15C0)
class UAnimBP_BarNpc_C final : public UAnimMultiNodeInstance_DN
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CPPDynamic                   AnimGraphNode_CPPDynamic;                          // 0x15C8(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x15F0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1620(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x16A0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x16D0(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1780(0x00C0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1840(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x18C0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x18F0(0x00B0)()
	float                                         ThrowFlot;                                         // 0x19A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AnimBP_BarNpc(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_BarNpc_C">();
	}
	static class UAnimBP_BarNpc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_BarNpc_C>();
	}
};
static_assert(alignof(UAnimBP_BarNpc_C) == 0x000010, "Wrong alignment on UAnimBP_BarNpc_C");
static_assert(sizeof(UAnimBP_BarNpc_C) == 0x0019B0, "Wrong size on UAnimBP_BarNpc_C");
static_assert(offsetof(UAnimBP_BarNpc_C, UberGraphFrame) == 0x0015C0, "Member 'UAnimBP_BarNpc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_CPPDynamic) == 0x0015C8, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_CPPDynamic' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_Root) == 0x0015F0, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_SequencePlayer_1) == 0x001620, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_StateResult_1) == 0x0016A0, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_StateMachine_1) == 0x0016D0, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_LayeredBoneBlend) == 0x001780, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_SequencePlayer) == 0x001840, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_StateResult) == 0x0018C0, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, AnimGraphNode_StateMachine) == 0x0018F0, "Member 'UAnimBP_BarNpc_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_BarNpc_C, ThrowFlot) == 0x0019A0, "Member 'UAnimBP_BarNpc_C::ThrowFlot' has a wrong offset!");

}

