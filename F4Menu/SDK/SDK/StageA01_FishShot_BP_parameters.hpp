#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StageA01_FishShot_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.ExecuteUbergraph_StageA01_FishShot_BP
// 0x0230 (0x0230 - 0x0000)
struct StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_WrittenAchievementName_1;       // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_WrittenProgress_1;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_WrittenUserTag_1;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_WrittenAchievementName;         // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_WrittenProgress;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_WrittenUserTag;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ___float_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ___name_Variable;                                  // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable_1;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable_1;                       // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B[0x1];                                       // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00A0(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_C*                       K2Node_DynamicCast_AsBP_ALTF4_Pawn;                // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x2];                                      // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAchievementQueryCallbackProxy*         CallFunc_CacheAchievements_ReturnValue;            // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAchievementWriteCallbackProxy*         CallFunc_WriteAchievementProgress_ReturnValue;     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16A[0x2];                                      // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x01A4(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP) == 0x000008, "Wrong alignment on StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP");
static_assert(sizeof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP) == 0x000230, "Wrong size on StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, EntryPoint) == 0x000000, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenAchievementName_1) == 0x000004, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenAchievementName_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenProgress_1) == 0x00000C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenProgress_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenUserTag_1) == 0x000010, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenUserTag_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenAchievementName) == 0x000024, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenAchievementName' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenProgress) == 0x00002C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenProgress' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CustomEvent_WrittenUserTag) == 0x000030, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CustomEvent_WrittenUserTag' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___int_Variable) == 0x000044, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___int_Variable' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___float_Variable) == 0x000048, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___float_Variable' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___name_Variable) == 0x00004C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___name_Variable' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___bool_Has_Been_Initd_Variable) == 0x000054, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_Conv_NameToString_ReturnValue) == 0x000058, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___bool_IsClosed_Variable) == 0x000068, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___bool_Has_Been_Initd_Variable_1) == 0x000069, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, ___bool_IsClosed_Variable_1) == 0x00006A, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::___bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00006C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000078, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000080, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000088, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000090, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000098, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x00009C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x0000A0, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn) == 0x000130, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000139, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CreateDelegate_OutputDelegate_2) == 0x00013C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_GetPlayerController_ReturnValue) == 0x000150, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_CacheAchievements_ReturnValue) == 0x000158, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_CacheAchievements_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_WriteAchievementProgress_ReturnValue) == 0x000160, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_WriteAchievementProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, CallFunc_IsValid_ReturnValue_1) == 0x000169, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_CreateDelegate_OutputDelegate_3) == 0x00016C, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_HitComponent) == 0x000180, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000188, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000190, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000198, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP, K2Node_ComponentBoundEvent_Hit) == 0x0001A4, "Member 'StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF
// 0x0010 (0x0010 - 0x0000)
struct StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF final
{
public:
	class FName                                   WrittenAchievementName;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WrittenProgress;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WrittenUserTag;                                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF) == 0x000004, "Wrong alignment on StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF");
static_assert(sizeof(StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF) == 0x000010, "Wrong size on StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF");
static_assert(offsetof(StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenAchievementName) == 0x000000, "Member 'StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenAchievementName' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenProgress) == 0x000008, "Member 'StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenProgress' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenUserTag) == 0x00000C, "Member 'StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenUserTag' has a wrong offset!");

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF
// 0x0010 (0x0010 - 0x0000)
struct StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF final
{
public:
	class FName                                   WrittenAchievementName;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WrittenProgress;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WrittenUserTag;                                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF) == 0x000004, "Wrong alignment on StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF");
static_assert(sizeof(StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF) == 0x000010, "Wrong size on StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF");
static_assert(offsetof(StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenAchievementName) == 0x000000, "Member 'StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenAchievementName' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenProgress) == 0x000008, "Member 'StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenProgress' has a wrong offset!");
static_assert(offsetof(StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF, WrittenUserTag) == 0x00000C, "Member 'StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF::WrittenUserTag' has a wrong offset!");

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.UserConstructionScript
// 0x0004 (0x0004 - 0x0000)
struct StageA01_FishShot_BP_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StageA01_FishShot_BP_C_UserConstructionScript) == 0x000004, "Wrong alignment on StageA01_FishShot_BP_C_UserConstructionScript");
static_assert(sizeof(StageA01_FishShot_BP_C_UserConstructionScript) == 0x000004, "Wrong size on StageA01_FishShot_BP_C_UserConstructionScript");
static_assert(offsetof(StageA01_FishShot_BP_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'StageA01_FishShot_BP_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

}

