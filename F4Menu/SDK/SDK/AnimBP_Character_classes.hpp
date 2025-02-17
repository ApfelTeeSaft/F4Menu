#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Character

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "WeaponTypeEnum_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_Character.AnimBP_Character_C
// 0x13F0 (0x16B0 - 0x02C0)
class UAnimBP_Character_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03E8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0410(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0490(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x04C0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0540(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0570(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x05F0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0620(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x06A0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x06D0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07B8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x07E8(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0898(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x09A0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x09C0(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x09E0(0x0048)()
	uint8                                         Pad_A28[0x8];                                      // 0x0A28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0A30(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x0C10(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0DF0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0EF8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1000(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1108(0x0108)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1210(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x12D0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1318(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1470(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1498(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x14C0(0x0108)()
	bool                                          IsInAir_;                                          // 0x15C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C9[0x3];                                     // 0x15C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Speed;                                             // 0x15CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToClimb_;                                          // 0x15D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D1[0x7];                                     // 0x15D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Pawn_C*                             Pawn;                                              // 0x15D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HeadRotation;                                      // 0x15E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          JumpWall_;                                         // 0x15EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RotateToVel_;                                      // 0x15ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RotateToController_;                               // 0x15EE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EF[0x1];                                     // 0x15EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ControllerRotation;                                // 0x15F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                CLimbFirst;                                        // 0x15FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CLimbFinish;                                       // 0x1608(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Seconds;                                           // 0x1614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstStep_;                                        // 0x1618(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1619[0x3];                                     // 0x1619(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                JointTargetLeft;                                   // 0x161C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                JointTargetRight;                                  // 0x1628(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RightFootRot;                                      // 0x1634(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               LeftFootRot;                                       // 0x1640(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ActorScale;                                        // 0x164C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IKDistance;                                        // 0x1650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RelativeHeight;                                    // 0x1654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropHeight;                                        // 0x1658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LeftFootSocket;                                    // 0x165C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightFootSocket;                                   // 0x1664(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IKoffsetRightFoot;                                 // 0x166C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IKInterpSpeed;                                     // 0x1670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IKoffsetLeftFoot;                                  // 0x1674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BonesHeight;                                       // 0x1678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_167C[0x4];                                     // 0x167C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           MontageStanding;                                   // 0x1680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StandingProcess_;                                  // 0x1688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1689[0x3];                                     // 0x1689(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AlphaWeights;                                      // 0x168C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Throwing__;                                        // 0x1690(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Sliding__;                                         // 0x1691(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EWeaponTypeEnum                               NewVar_0;                                          // 0x1692(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1693[0x5];                                     // 0x1693(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Case;                                              // 0x1698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AnimBP_Character(int32 EntryPoint);
	void AnimNotify_ClimbFinish();
	void AnimNotify_Transform();
	void AnimNotify_Standing();
	void ResetJumpImpulse();
	void AnimNotify_EndWallJump();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_TransitionResult_92A40DBD479441866CEB3097B7910703();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_ModifyBone_F6E157244BC1FD7262182EB86AF7EF3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_TwoBoneIK_AE441F05496A6BBEAF397584BFC3C67A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_TwoBoneIK_8065506E44B93F7839614789D0DDD16D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_ModifyBone_E075A3B94D9B032461CE03A7E5474D61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_ModifyBone_F3CB47554C922130E5A3508B23159867();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character_AnimGraphNode_ModifyBone_2724C44A41A7370FB59DF0AE0CA2CFDE();
	void F_RotateToVelocityVector();
	void F_SetHeadRotation();
	void F_RotateToController();
	void F_ComputeAlphaSeconds();
	void F_IkFootTrace(float TraceDistance, class FName Socket, const struct FVector& PlayerPosition, float* Offset, bool* Hit_, float* Distance, struct FRotator* HitRot);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_Character_C">();
	}
	static class UAnimBP_Character_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_Character_C>();
	}
};
static_assert(alignof(UAnimBP_Character_C) == 0x000010, "Wrong alignment on UAnimBP_Character_C");
static_assert(sizeof(UAnimBP_Character_C) == 0x0016B0, "Wrong size on UAnimBP_Character_C");
static_assert(offsetof(UAnimBP_Character_C, UberGraphFrame) == 0x0002C0, "Member 'UAnimBP_Character_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UAnimBP_Character_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_6) == 0x0002F8, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_5) == 0x000320, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_4) == 0x000348, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_3) == 0x000370, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_2) == 0x000398, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult_1) == 0x0003C0, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TransitionResult) == 0x0003E8, "Member 'UAnimBP_Character_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_SequencePlayer_3) == 0x000410, "Member 'UAnimBP_Character_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateResult_4) == 0x000490, "Member 'UAnimBP_Character_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_SequencePlayer_2) == 0x0004C0, "Member 'UAnimBP_Character_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateResult_3) == 0x000540, "Member 'UAnimBP_Character_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_SequencePlayer_1) == 0x000570, "Member 'UAnimBP_Character_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateResult_2) == 0x0005F0, "Member 'UAnimBP_Character_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_SequencePlayer) == 0x000620, "Member 'UAnimBP_Character_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateResult_1) == 0x0006A0, "Member 'UAnimBP_Character_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_BlendSpacePlayer) == 0x0006D0, "Member 'UAnimBP_Character_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateResult) == 0x0007B8, "Member 'UAnimBP_Character_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_StateMachine) == 0x0007E8, "Member 'UAnimBP_Character_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone_5) == 0x000898, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_LocalToComponentSpace) == 0x0009A0, "Member 'UAnimBP_Character_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ComponentToLocalSpace) == 0x0009C0, "Member 'UAnimBP_Character_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_Slot_1) == 0x0009E0, "Member 'UAnimBP_Character_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TwoBoneIK_1) == 0x000A30, "Member 'UAnimBP_Character_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_TwoBoneIK) == 0x000C10, "Member 'UAnimBP_Character_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone_4) == 0x000DF0, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone_3) == 0x000EF8, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone_2) == 0x001000, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone_1) == 0x001108, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_LayeredBoneBlend) == 0x001210, "Member 'UAnimBP_Character_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_Slot) == 0x0012D0, "Member 'UAnimBP_Character_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_SaveCachedPose) == 0x001318, "Member 'UAnimBP_Character_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_UseCachedPose_1) == 0x001470, "Member 'UAnimBP_Character_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_UseCachedPose) == 0x001498, "Member 'UAnimBP_Character_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AnimGraphNode_ModifyBone) == 0x0014C0, "Member 'UAnimBP_Character_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, IsInAir_) == 0x0015C8, "Member 'UAnimBP_Character_C::IsInAir_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Speed) == 0x0015CC, "Member 'UAnimBP_Character_C::Speed' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, ToClimb_) == 0x0015D0, "Member 'UAnimBP_Character_C::ToClimb_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Pawn) == 0x0015D8, "Member 'UAnimBP_Character_C::Pawn' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, HeadRotation) == 0x0015E0, "Member 'UAnimBP_Character_C::HeadRotation' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, JumpWall_) == 0x0015EC, "Member 'UAnimBP_Character_C::JumpWall_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, RotateToVel_) == 0x0015ED, "Member 'UAnimBP_Character_C::RotateToVel_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, RotateToController_) == 0x0015EE, "Member 'UAnimBP_Character_C::RotateToController_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, ControllerRotation) == 0x0015F0, "Member 'UAnimBP_Character_C::ControllerRotation' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, CLimbFirst) == 0x0015FC, "Member 'UAnimBP_Character_C::CLimbFirst' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, CLimbFinish) == 0x001608, "Member 'UAnimBP_Character_C::CLimbFinish' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Seconds) == 0x001614, "Member 'UAnimBP_Character_C::Seconds' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, FirstStep_) == 0x001618, "Member 'UAnimBP_Character_C::FirstStep_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, JointTargetLeft) == 0x00161C, "Member 'UAnimBP_Character_C::JointTargetLeft' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, JointTargetRight) == 0x001628, "Member 'UAnimBP_Character_C::JointTargetRight' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, RightFootRot) == 0x001634, "Member 'UAnimBP_Character_C::RightFootRot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, LeftFootRot) == 0x001640, "Member 'UAnimBP_Character_C::LeftFootRot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, ActorScale) == 0x00164C, "Member 'UAnimBP_Character_C::ActorScale' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, IKDistance) == 0x001650, "Member 'UAnimBP_Character_C::IKDistance' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, RelativeHeight) == 0x001654, "Member 'UAnimBP_Character_C::RelativeHeight' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, DropHeight) == 0x001658, "Member 'UAnimBP_Character_C::DropHeight' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, LeftFootSocket) == 0x00165C, "Member 'UAnimBP_Character_C::LeftFootSocket' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, RightFootSocket) == 0x001664, "Member 'UAnimBP_Character_C::RightFootSocket' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, IKoffsetRightFoot) == 0x00166C, "Member 'UAnimBP_Character_C::IKoffsetRightFoot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, IKInterpSpeed) == 0x001670, "Member 'UAnimBP_Character_C::IKInterpSpeed' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, IKoffsetLeftFoot) == 0x001674, "Member 'UAnimBP_Character_C::IKoffsetLeftFoot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, BonesHeight) == 0x001678, "Member 'UAnimBP_Character_C::BonesHeight' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, MontageStanding) == 0x001680, "Member 'UAnimBP_Character_C::MontageStanding' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, StandingProcess_) == 0x001688, "Member 'UAnimBP_Character_C::StandingProcess_' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, AlphaWeights) == 0x00168C, "Member 'UAnimBP_Character_C::AlphaWeights' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Throwing__) == 0x001690, "Member 'UAnimBP_Character_C::Throwing__' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Sliding__) == 0x001691, "Member 'UAnimBP_Character_C::Sliding__' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, NewVar_0) == 0x001692, "Member 'UAnimBP_Character_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UAnimBP_Character_C, Case) == 0x001698, "Member 'UAnimBP_Character_C::Case' has a wrong offset!");

}

