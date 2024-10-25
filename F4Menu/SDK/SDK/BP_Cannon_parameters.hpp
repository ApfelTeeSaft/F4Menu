#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cannon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Cannon_C_ExecuteUbergraph_BP_Cannon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CannonProjectile_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue_1;       // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0170(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CannonProjectile_C*                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon) == 0x000010, "Wrong alignment on BP_Cannon_C_ExecuteUbergraph_BP_Cannon");
static_assert(sizeof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon) == 0x0001B0, "Wrong size on BP_Cannon_C_ExecuteUbergraph_BP_Cannon");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, EntryPoint) == 0x000000, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_GetForwardVector_ReturnValue) == 0x000010, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00001C, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_Add_VectorVector_ReturnValue) == 0x000084, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000090, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D0, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_GetForwardVector_ReturnValue_1) == 0x0000D8, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E8, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x0000F0, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000100, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Location_1) == 0x000130, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Rotation_1) == 0x00013C, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BreakTransform_Scale_1) == 0x000148, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000154, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_K2_GetComponentScale_ReturnValue_1) == 0x000160, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_K2_GetComponentScale_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_MakeTransform_ReturnValue_1) == 0x000170, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001A0, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_ExecuteUbergraph_BP_Cannon, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001A8, "Member 'BP_Cannon_C_ExecuteUbergraph_BP_Cannon::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

// Function BP_Cannon.BP_Cannon_C.CannonMatOverride
// 0x0010 (0x0010 - 0x0000)
struct BP_Cannon_C_CannonMatOverride final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Cannon_C_CannonMatOverride) == 0x000008, "Wrong alignment on BP_Cannon_C_CannonMatOverride");
static_assert(sizeof(BP_Cannon_C_CannonMatOverride) == 0x000010, "Wrong size on BP_Cannon_C_CannonMatOverride");
static_assert(offsetof(BP_Cannon_C_CannonMatOverride, Material) == 0x000000, "Member 'BP_Cannon_C_CannonMatOverride::Material' has a wrong offset!");
static_assert(offsetof(BP_Cannon_C_CannonMatOverride, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_Cannon_C_CannonMatOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

