#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Start_AirPlane_Blueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Start_AirPlane_Blueprint.Start_AirPlane_Blueprint_C.ExecuteUbergraph_Start_AirPlane_Blueprint
// 0x01D0 (0x01D0 - 0x0000)
struct Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ALTF4_Pawn_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	class ABP_ALTF4_Pawn_C*                       CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0xC];                                       // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_TLerp_ReturnValue;                        // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0xC];                                      // 0x0104(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0140(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint) == 0x000010, "Wrong alignment on Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint");
static_assert(sizeof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint) == 0x0001D0, "Wrong size on Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, EntryPoint) == 0x000000, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, ___int_Variable) == 0x000004, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::___int_Variable' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000018, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_Array_Get_Item) == 0x000030, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_RandomFloatInRange_ReturnValue) == 0x000040, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000050, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000080, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_TLerp_ReturnValue) == 0x0000B0, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_TLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_BreakTransform_Location) == 0x0000E0, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_BreakTransform_Rotation) == 0x0000EC, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_BreakTransform_Scale) == 0x0000F8, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_MakeTransform_ReturnValue) == 0x000110, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000140, "Member 'Start_AirPlane_Blueprint_C_ExecuteUbergraph_Start_AirPlane_Blueprint::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

}

