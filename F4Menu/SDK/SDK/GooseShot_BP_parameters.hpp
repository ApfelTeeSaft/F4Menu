#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooseShot_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GooseShot_BP.GooseShot_BP_C.ExecuteUbergraph_GooseShot_BP
// 0x0118 (0x0118 - 0x0000)
struct GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AStaticMeshActor*                       K2Node_CustomEvent_set_target;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0064(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ABP_ALTF4_Pawn_C*                       K2Node_DynamicCast_AsBP_ALTF4_Pawn;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamMulti_GameInstance_C*             K2Node_DynamicCast_AsSteam_Multi_Game_Instance;    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP) == 0x000008, "Wrong alignment on GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP");
static_assert(sizeof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP) == 0x000118, "Wrong size on GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, EntryPoint) == 0x000000, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, ___bool_IsClosed_Variable) == 0x000004, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_CustomEvent_set_target) == 0x000008, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_CustomEvent_set_target' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000038, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_ComponentBoundEvent_HitComponent) == 0x000040, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000048, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000050, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000058, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_ComponentBoundEvent_Hit) == 0x000064, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn) == 0x0000F0, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, ___bool_Has_Been_Initd_Variable) == 0x0000F9, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, CallFunc_GetGameInstance_ReturnValue) == 0x000100, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_DynamicCast_AsSteam_Multi_Game_Instance) == 0x000108, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_DynamicCast_AsSteam_Multi_Game_Instance' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function GooseShot_BP.GooseShot_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function GooseShot_BP.GooseShot_BP_C.homing
// 0x0008 (0x0008 - 0x0000)
struct GooseShot_BP_C_Homing final
{
public:
	class AStaticMeshActor*                       Set_target;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GooseShot_BP_C_Homing) == 0x000008, "Wrong alignment on GooseShot_BP_C_Homing");
static_assert(sizeof(GooseShot_BP_C_Homing) == 0x000008, "Wrong size on GooseShot_BP_C_Homing");
static_assert(offsetof(GooseShot_BP_C_Homing, Set_target) == 0x000000, "Member 'GooseShot_BP_C_Homing::Set_target' has a wrong offset!");

}

