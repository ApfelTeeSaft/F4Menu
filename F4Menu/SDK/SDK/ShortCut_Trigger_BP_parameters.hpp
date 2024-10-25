#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShortCut_Trigger_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ShortCut_Trigger_BP.ShortCut_Trigger_BP_C.ExecuteUbergraph_ShortCut_Trigger_BP
// 0x0190 (0x0190 - 0x0000)
struct ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable_1;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_SoloPlay_C*              K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Chick_Pawn_C*                 K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_SoloPlay_C*              K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play_1;    // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Chick_Pawn_C*                 K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn_1;        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Gameinstance_C>   K2Node_DynamicCast_AsBPI_Gameinstance;             // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USteamMulti_GameInstance_C*             CallFunc_ALTF4GameInstanceRef_ALTF4_GI;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ALTF4_Pawn_SoloPlay_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x0140(0x0010)(ReferenceParm)
	TArray<class ABP_ALTF4_Chick_Pawn_C*>         CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0150(0x0010)(ReferenceParm)
	bool                                          ___bool_IsClosed_Variable_1;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerControllerID_ReturnValue;        // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_SoloPlay_C*              CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ALTF4_Chick_Pawn_C*                 CallFunc_Array_Get_Item_1;                         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverlappingActor_ReturnValue;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOverlappingActor_ReturnValue_1;         // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP) == 0x000008, "Wrong alignment on ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP");
static_assert(sizeof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP) == 0x000190, "Wrong size on ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, EntryPoint) == 0x000000, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, ___bool_Has_Been_Initd_Variable) == 0x000004, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, ___bool_IsClosed_Variable) == 0x000005, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, ___bool_Has_Been_Initd_Variable_1) == 0x000006, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::___bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B8, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x0000C0, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C8, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000D0, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play) == 0x0000D8, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn) == 0x0000E8, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play_1) == 0x0000F8, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_bSuccess_2) == 0x000100, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn_1) == 0x000108, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_AsBP_ALTF4_Chick_Pawn_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_bSuccess_3) == 0x000110, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_GetGameInstance_ReturnValue) == 0x000118, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_AsBPI_Gameinstance) == 0x000120, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_AsBPI_Gameinstance' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, K2Node_DynamicCast_bSuccess_4) == 0x000130, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_ALTF4GameInstanceRef_ALTF4_GI) == 0x000138, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_ALTF4GameInstanceRef_ALTF4_GI' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_GetAllActorsOfClass_OutActors) == 0x000140, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000150, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, ___bool_IsClosed_Variable_1) == 0x000160, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::___bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_GetPlayerController_ReturnValue) == 0x000168, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_GetPlayerControllerID_ReturnValue) == 0x000170, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_GetPlayerControllerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_Array_Get_Item) == 0x000178, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_IsOverlappingActor_ReturnValue) == 0x000188, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_IsOverlappingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP, CallFunc_IsOverlappingActor_ReturnValue_1) == 0x000189, "Member 'ShortCut_Trigger_BP_C_ExecuteUbergraph_ShortCut_Trigger_BP::CallFunc_IsOverlappingActor_ReturnValue_1' has a wrong offset!");

// Function ShortCut_Trigger_BP.ShortCut_Trigger_BP_C.BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function ShortCut_Trigger_BP.ShortCut_Trigger_BP_C.BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'ShortCut_Trigger_BP_C_BndEvt__ShortCut_Trigger_BP_Overlap_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function ShortCut_Trigger_BP.ShortCut_Trigger_BP_C.TrapOff
// 0x0028 (0x0028 - 0x0000)
struct ShortCut_Trigger_BP_C_TrapOff final
{
public:
	int32                                         ___int_Variable;                                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMoveVane_BP_C*>                 CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x0008(0x0010)(ReferenceParm)
	class AMoveVane_BP_C*                         CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortCut_Trigger_BP_C_TrapOff) == 0x000008, "Wrong alignment on ShortCut_Trigger_BP_C_TrapOff");
static_assert(sizeof(ShortCut_Trigger_BP_C_TrapOff) == 0x000028, "Wrong size on ShortCut_Trigger_BP_C_TrapOff");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, ___int_Variable) == 0x000000, "Member 'ShortCut_Trigger_BP_C_TrapOff::___int_Variable' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'ShortCut_Trigger_BP_C_TrapOff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, CallFunc_GetAllActorsOfClassWithTag_OutActors) == 0x000008, "Member 'ShortCut_Trigger_BP_C_TrapOff::CallFunc_GetAllActorsOfClassWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShortCut_Trigger_BP_C_TrapOff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ShortCut_Trigger_BP_C_TrapOff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortCut_Trigger_BP_C_TrapOff, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'ShortCut_Trigger_BP_C_TrapOff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

