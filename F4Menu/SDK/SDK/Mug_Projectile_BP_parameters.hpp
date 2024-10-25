#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mug_Projectile_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.ExecuteUbergraph_Mug_Projectile_BP
// 0x0260 (0x0260 - 0x0000)
struct Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent_1;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse_1;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit_1;                  // 0x002C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ABP_ALTF4_Pawn_C*                       K2Node_DynamicCast_AsBP_ALTF4_Pawn;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable_1;                 // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB[0x5];                                       // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00F0(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x01A4(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          ___bool_IsClosed_Variable_1;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Chick_Pawn_C*                 K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_C*                       K2Node_DynamicCast_AsBP_ALTF4_Pawn_1;              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStaticMeshActor*                       K2Node_CustomEvent_set_target;                     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP) == 0x000008, "Wrong alignment on Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP");
static_assert(sizeof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP) == 0x000260, "Wrong size on Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, EntryPoint) == 0x000000, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_HitComponent_1) == 0x000008, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000010, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000018, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_NormalImpulse_1) == 0x000020, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_NormalImpulse_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_Hit_1) == 0x00002C, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_Hit_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn) == 0x0000B8, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_Event_DeltaSeconds) == 0x0000C4, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, ___bool_IsClosed_Variable) == 0x0000C8, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, ___bool_Has_Been_Initd_Variable) == 0x0000C9, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, ___bool_Has_Been_Initd_Variable_1) == 0x0000CA, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::___bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000D0, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000D8, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000E0, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000E8, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000EC, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x0000F0, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_HitComponent) == 0x000180, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000188, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000190, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000198, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_ComponentBoundEvent_Hit) == 0x0001A4, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, ___bool_IsClosed_Variable_1) == 0x000230, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::___bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn) == 0x000238, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_bSuccess_1) == 0x000240, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn_1) == 0x000248, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn_1' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_DynamicCast_bSuccess_2) == 0x000250, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP, K2Node_CustomEvent_set_target) == 0x000258, "Member 'Mug_Projectile_BP_C_ExecuteUbergraph_Mug_Projectile_BP::K2Node_CustomEvent_set_target' has a wrong offset!");

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'Mug_Projectile_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Mug_Projectile_BP_C_BndEvt__r_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Mug_Projectile_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mug_Projectile_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on Mug_Projectile_BP_C_ReceiveTick");
static_assert(sizeof(Mug_Projectile_BP_C_ReceiveTick) == 0x000004, "Wrong size on Mug_Projectile_BP_C_ReceiveTick");
static_assert(offsetof(Mug_Projectile_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Mug_Projectile_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'Mug_Projectile_BP_C_BndEvt__Barrel_K2Node_ComponentBoundEvent_40_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function Mug_Projectile_BP.Mug_Projectile_BP_C.homing
// 0x0008 (0x0008 - 0x0000)
struct Mug_Projectile_BP_C_Homing final
{
public:
	class AStaticMeshActor*                       Set_target;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mug_Projectile_BP_C_Homing) == 0x000008, "Wrong alignment on Mug_Projectile_BP_C_Homing");
static_assert(sizeof(Mug_Projectile_BP_C_Homing) == 0x000008, "Wrong size on Mug_Projectile_BP_C_Homing");
static_assert(offsetof(Mug_Projectile_BP_C_Homing, Set_target) == 0x000000, "Member 'Mug_Projectile_BP_C_Homing::Set_target' has a wrong offset!");

}

