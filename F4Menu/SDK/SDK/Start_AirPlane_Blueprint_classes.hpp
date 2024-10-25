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
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Start_AirPlane_Blueprint.Start_AirPlane_Blueprint_C
// 0x0088 (0x02A8 - 0x0220)
class AStart_AirPlane_Blueprint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        StartArrow;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        EndArrow;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        D_0P__Cue;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       StartSpot;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       BoomRoot;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  RadialForce;                                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HouseRoof05;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HouseRoof04;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CannonBoom_Cue;                                    // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AirPlane_ALTF4;                                    // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AirPlaneGO_Alpha_22E7C6A4437A192F4DCAB7800C28DB4B; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            AirPlaneGO__Direction_22E7C6A4437A192F4DCAB7800C28DB4B; // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AirPlaneGO;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLocation;                                       // 0x029C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Start_AirPlane_Blueprint(int32 EntryPoint);
	void Booooooom______________();
	void Airplane_Stop();
	void ReceiveBeginPlay();
	void AirPlaneGO__UpdateFunc();
	void AirPlaneGO__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Start_AirPlane_Blueprint_C">();
	}
	static class AStart_AirPlane_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStart_AirPlane_Blueprint_C>();
	}
};
static_assert(alignof(AStart_AirPlane_Blueprint_C) == 0x000008, "Wrong alignment on AStart_AirPlane_Blueprint_C");
static_assert(sizeof(AStart_AirPlane_Blueprint_C) == 0x0002A8, "Wrong size on AStart_AirPlane_Blueprint_C");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, UberGraphFrame) == 0x000220, "Member 'AStart_AirPlane_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, StartArrow) == 0x000228, "Member 'AStart_AirPlane_Blueprint_C::StartArrow' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, EndArrow) == 0x000230, "Member 'AStart_AirPlane_Blueprint_C::EndArrow' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, D_0P__Cue) == 0x000238, "Member 'AStart_AirPlane_Blueprint_C::D_0P__Cue' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, StartSpot) == 0x000240, "Member 'AStart_AirPlane_Blueprint_C::StartSpot' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, BoomRoot) == 0x000248, "Member 'AStart_AirPlane_Blueprint_C::BoomRoot' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, RadialForce) == 0x000250, "Member 'AStart_AirPlane_Blueprint_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, SM_HouseRoof05) == 0x000258, "Member 'AStart_AirPlane_Blueprint_C::SM_HouseRoof05' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, SM_HouseRoof04) == 0x000260, "Member 'AStart_AirPlane_Blueprint_C::SM_HouseRoof04' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, CannonBoom_Cue) == 0x000268, "Member 'AStart_AirPlane_Blueprint_C::CannonBoom_Cue' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, AirPlane_ALTF4) == 0x000270, "Member 'AStart_AirPlane_Blueprint_C::AirPlane_ALTF4' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, Sphere) == 0x000278, "Member 'AStart_AirPlane_Blueprint_C::Sphere' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, AirPlaneGO_Alpha_22E7C6A4437A192F4DCAB7800C28DB4B) == 0x000280, "Member 'AStart_AirPlane_Blueprint_C::AirPlaneGO_Alpha_22E7C6A4437A192F4DCAB7800C28DB4B' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, AirPlaneGO__Direction_22E7C6A4437A192F4DCAB7800C28DB4B) == 0x000284, "Member 'AStart_AirPlane_Blueprint_C::AirPlaneGO__Direction_22E7C6A4437A192F4DCAB7800C28DB4B' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, AirPlaneGO) == 0x000288, "Member 'AStart_AirPlane_Blueprint_C::AirPlaneGO' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, StartLocation) == 0x000290, "Member 'AStart_AirPlane_Blueprint_C::StartLocation' has a wrong offset!");
static_assert(offsetof(AStart_AirPlane_Blueprint_C, EndLocation) == 0x00029C, "Member 'AStart_AirPlane_Blueprint_C::EndLocation' has a wrong offset!");

}

