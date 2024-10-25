#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_Point

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Save_Point.Save_Point_C
// 0x0098 (0x02B8 - 0x0220)
class ASave_Point_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        ____L1_Cue;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Four____1_L___L_Cue;                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       BallonHitCollison;                                 // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          SavePointDeleteCollision;                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Save_Box;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SAVE_Text1;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SaveSign;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SAVE_Text;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Balloon;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Up_Force;                                          // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          BalloonDestroy_;                                   // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SaveAreaLocation;                                  // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ALTF4_Pawn_C*                       As_BP_ALTF4_Pawn;                                  // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USteamMulti_GameInstance_C*             ALTF4_GI;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                SaveDeleteLocation;                                // 0x02A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Save_Point(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__BallonHitCollison_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SavePointDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SaveAreaOverlap();
	void BndEvt__Save_Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Balloon_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void OnSuccess_3774068A4FAD579103AF2D86CB50B5FA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnFailure_3774068A4FAD579103AF2D86CB50B5FA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnSuccess_A677D172426561078BFA8F95FA1E96B0();
	void OnFailure_A677D172426561078BFA8F95FA1E96B0();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Save_Point_C">();
	}
	static class ASave_Point_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASave_Point_C>();
	}
};
static_assert(alignof(ASave_Point_C) == 0x000008, "Wrong alignment on ASave_Point_C");
static_assert(sizeof(ASave_Point_C) == 0x0002B8, "Wrong size on ASave_Point_C");
static_assert(offsetof(ASave_Point_C, UberGraphFrame) == 0x000220, "Member 'ASave_Point_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, ____L1_Cue) == 0x000228, "Member 'ASave_Point_C::____L1_Cue' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, Four____1_L___L_Cue) == 0x000230, "Member 'ASave_Point_C::Four____1_L___L_Cue' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, BallonHitCollison) == 0x000238, "Member 'ASave_Point_C::BallonHitCollison' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SavePointDeleteCollision) == 0x000240, "Member 'ASave_Point_C::SavePointDeleteCollision' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, Save_Box) == 0x000248, "Member 'ASave_Point_C::Save_Box' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SAVE_Text1) == 0x000250, "Member 'ASave_Point_C::SAVE_Text1' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SM_SaveSign) == 0x000258, "Member 'ASave_Point_C::SM_SaveSign' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SAVE_Text) == 0x000260, "Member 'ASave_Point_C::SAVE_Text' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, Cable) == 0x000268, "Member 'ASave_Point_C::Cable' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, Balloon) == 0x000270, "Member 'ASave_Point_C::Balloon' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, DefaultSceneRoot) == 0x000278, "Member 'ASave_Point_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, Up_Force) == 0x000280, "Member 'ASave_Point_C::Up_Force' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, BalloonDestroy_) == 0x000284, "Member 'ASave_Point_C::BalloonDestroy_' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SaveAreaLocation) == 0x000288, "Member 'ASave_Point_C::SaveAreaLocation' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, As_BP_ALTF4_Pawn) == 0x000298, "Member 'ASave_Point_C::As_BP_ALTF4_Pawn' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, ALTF4_GI) == 0x0002A0, "Member 'ASave_Point_C::ALTF4_GI' has a wrong offset!");
static_assert(offsetof(ASave_Point_C, SaveDeleteLocation) == 0x0002A8, "Member 'ASave_Point_C::SaveDeleteLocation' has a wrong offset!");

}

