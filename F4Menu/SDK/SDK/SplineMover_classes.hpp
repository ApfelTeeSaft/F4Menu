#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplineMover

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SplineMover.SplineMover_C
// 0x00D8 (0x02F8 - 0x0220)
class ASplineMover_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        SoundLoop;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MovingMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        MovableRoot;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Automotion;                                        // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PointIndex;                                        // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TravelDuration;                                    // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopDuration;                                      // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloseSpline_;                                      // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CustomStartEndStop_;                               // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_262[0x2];                                      // 0x0262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartEndStopDuration;                              // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Plus;                                              // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Plus_2;                                            // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sync;                                              // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ease_;                                             // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Blueprint;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDeathObject_;                                    // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound;                                             // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SpinSpeed;                                         // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShouldSpin_;                                       // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             MoveSound;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSplineRotation;                                 // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x02BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         StoredStopDuration;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale;                                             // 0x02CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PointIndexDebug;                                   // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DA[0x6];                                      // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 BlueprintActor;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Move_Location;                                     // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecifiedMovePoint;                                // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SplineMover(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BlueprintConstruct();
	void MoveEvent();
	void ReceiveTick(float DeltaSeconds);
	void PlayMovementSound();
	void AutoMove();
	void MoveObject();
	void Active();
	void Stop();
	void Cycle();
	void SpecifiedMoveEvent();
	void CycleForward();
	void CycleBack();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SplineMover_C">();
	}
	static class ASplineMover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASplineMover_C>();
	}
};
static_assert(alignof(ASplineMover_C) == 0x000008, "Wrong alignment on ASplineMover_C");
static_assert(sizeof(ASplineMover_C) == 0x0002F8, "Wrong size on ASplineMover_C");
static_assert(offsetof(ASplineMover_C, UberGraphFrame) == 0x000220, "Member 'ASplineMover_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, SoundLoop) == 0x000228, "Member 'ASplineMover_C::SoundLoop' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, MovingMesh) == 0x000230, "Member 'ASplineMover_C::MovingMesh' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, MovableRoot) == 0x000238, "Member 'ASplineMover_C::MovableRoot' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Spline) == 0x000240, "Member 'ASplineMover_C::Spline' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, DefaultSceneRoot) == 0x000248, "Member 'ASplineMover_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Automotion) == 0x000250, "Member 'ASplineMover_C::Automotion' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, PointIndex) == 0x000254, "Member 'ASplineMover_C::PointIndex' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, TravelDuration) == 0x000258, "Member 'ASplineMover_C::TravelDuration' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, StopDuration) == 0x00025C, "Member 'ASplineMover_C::StopDuration' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, CloseSpline_) == 0x000260, "Member 'ASplineMover_C::CloseSpline_' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, CustomStartEndStop_) == 0x000261, "Member 'ASplineMover_C::CustomStartEndStop_' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, StartEndStopDuration) == 0x000264, "Member 'ASplineMover_C::StartEndStopDuration' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Plus) == 0x000268, "Member 'ASplineMover_C::Plus' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Mesh) == 0x000270, "Member 'ASplineMover_C::Mesh' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Plus_2) == 0x000278, "Member 'ASplineMover_C::Plus_2' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Sync) == 0x00027C, "Member 'ASplineMover_C::Sync' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Ease_) == 0x000280, "Member 'ASplineMover_C::Ease_' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Blueprint) == 0x000288, "Member 'ASplineMover_C::Blueprint' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, IsDeathObject_) == 0x000290, "Member 'ASplineMover_C::IsDeathObject_' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Sound) == 0x000298, "Member 'ASplineMover_C::Sound' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, SpinSpeed) == 0x0002A0, "Member 'ASplineMover_C::SpinSpeed' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, ShouldSpin_) == 0x0002AC, "Member 'ASplineMover_C::ShouldSpin_' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, MoveSound) == 0x0002B0, "Member 'ASplineMover_C::MoveSound' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, UseSplineRotation) == 0x0002B8, "Member 'ASplineMover_C::UseSplineRotation' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Rotation) == 0x0002BC, "Member 'ASplineMover_C::Rotation' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, StoredStopDuration) == 0x0002C8, "Member 'ASplineMover_C::StoredStopDuration' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Scale) == 0x0002CC, "Member 'ASplineMover_C::Scale' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, IsMoving) == 0x0002D8, "Member 'ASplineMover_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, PointIndexDebug) == 0x0002D9, "Member 'ASplineMover_C::PointIndexDebug' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, BlueprintActor) == 0x0002E0, "Member 'ASplineMover_C::BlueprintActor' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, Move_Location) == 0x0002E8, "Member 'ASplineMover_C::Move_Location' has a wrong offset!");
static_assert(offsetof(ASplineMover_C, SpecifiedMovePoint) == 0x0002F4, "Member 'ASplineMover_C::SpecifiedMovePoint' has a wrong offset!");

}
