#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Knight_PortalGo_Trigger_BP

#include "Basic.hpp"

#include "Knight_PortalGo_Trigger_BP_classes.hpp"
#include "Knight_PortalGo_Trigger_BP_parameters.hpp"


namespace SDK
{

// Function Knight_PortalGo_Trigger_BP.Knight_PortalGo_Trigger_BP_C.ExecuteUbergraph_Knight_PortalGo_Trigger_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKnight_PortalGo_Trigger_BP_C::ExecuteUbergraph_Knight_PortalGo_Trigger_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Knight_PortalGo_Trigger_BP_C", "ExecuteUbergraph_Knight_PortalGo_Trigger_BP");

	Params::Knight_PortalGo_Trigger_BP_C_ExecuteUbergraph_Knight_PortalGo_Trigger_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Knight_PortalGo_Trigger_BP.Knight_PortalGo_Trigger_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AKnight_PortalGo_Trigger_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Knight_PortalGo_Trigger_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Knight_PortalGo_Trigger_BP.Knight_PortalGo_Trigger_BP_C.NextLevelGO!
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Integer_MapImage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKnight_PortalGo_Trigger_BP_C::NextLevelGO_(int32 Integer_MapImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Knight_PortalGo_Trigger_BP_C", "NextLevelGO!");

	Params::Knight_PortalGo_Trigger_BP_C_NextLevelGO_ Parms{};

	Parms.Integer_MapImage = Integer_MapImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Knight_PortalGo_Trigger_BP.Knight_PortalGo_Trigger_BP_C.BndEvt__Knight_PortalGo_Trigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AKnight_PortalGo_Trigger_BP_C::BndEvt__Knight_PortalGo_Trigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Knight_PortalGo_Trigger_BP_C", "BndEvt__Knight_PortalGo_Trigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Knight_PortalGo_Trigger_BP_C_BndEvt__Knight_PortalGo_Trigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Knight_PortalGo_Trigger_BP.Knight_PortalGo_Trigger_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AKnight_PortalGo_Trigger_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Knight_PortalGo_Trigger_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

