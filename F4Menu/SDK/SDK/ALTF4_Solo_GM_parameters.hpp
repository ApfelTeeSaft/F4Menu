#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF4_Solo_GM

#include "Basic.hpp"


namespace SDK::Params
{

// Function ALTF4_Solo_GM.ALTF4_Solo_GM_C.ExecuteUbergraph_ALTF4_Solo_GM
// 0x0060 (0x0060 - 0x0000)
struct ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Gameinstance_C>   K2Node_DynamicCast_AsBPI_Gameinstance;             // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USteamMulti_GameInstance_C*             CallFunc_ALTF4GameInstanceRef_ALTF4_GI;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ALTF4_Pawn_SoloPlay_C*              K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM) == 0x000008, "Wrong alignment on ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM");
static_assert(sizeof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM) == 0x000060, "Wrong size on ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, EntryPoint) == 0x000000, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::EntryPoint' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00000C, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, K2Node_DynamicCast_AsBPI_Gameinstance) == 0x000020, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::K2Node_DynamicCast_AsBPI_Gameinstance' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_ALTF4GameInstanceRef_ALTF4_GI) == 0x000038, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_ALTF4GameInstanceRef_ALTF4_GI' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_Add_IntInt_ReturnValue_2) == 0x000040, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play) == 0x000050, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::K2Node_DynamicCast_AsBP_ALTF4_Pawn_Solo_Play' has a wrong offset!");
static_assert(offsetof(ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'ALTF4_Solo_GM_C_ExecuteUbergraph_ALTF4_Solo_GM::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function ALTF4_Solo_GM.ALTF4_Solo_GM_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct ALTF4_Solo_GM_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF4_Solo_GM_C_ReceiveTick) == 0x000004, "Wrong alignment on ALTF4_Solo_GM_C_ReceiveTick");
static_assert(sizeof(ALTF4_Solo_GM_C_ReceiveTick) == 0x000004, "Wrong size on ALTF4_Solo_GM_C_ReceiveTick");
static_assert(offsetof(ALTF4_Solo_GM_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'ALTF4_Solo_GM_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

