#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Area_02_TrapTrigger_BP

#include "Basic.hpp"

#include "Area_02_TrapTrigger_BP_classes.hpp"
#include "Area_02_TrapTrigger_BP_parameters.hpp"


namespace SDK
{

// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.ExecuteUbergraph_Area_02_TrapTrigger_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArea_02_TrapTrigger_BP_C::ExecuteUbergraph_Area_02_TrapTrigger_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "ExecuteUbergraph_Area_02_TrapTrigger_BP");

	Params::Area_02_TrapTrigger_BP_C_ExecuteUbergraph_Area_02_TrapTrigger_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.TrapSignal_Reset
// (BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::TrapSignal_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "TrapSignal_Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.CheckPlayer
// (BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::CheckPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "CheckPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.TrapOFF_Signal
// (BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::TrapOFF_Signal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "TrapOFF_Signal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.TrapON_Signal
// (BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::TrapON_Signal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "TrapON_Signal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.BndEvt__EasyRotationTrapTrigger_BP_Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArea_02_TrapTrigger_BP_C::BndEvt__EasyRotationTrapTrigger_BP_Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "BndEvt__EasyRotationTrapTrigger_BP_Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::Area_02_TrapTrigger_BP_C_BndEvt__EasyRotationTrapTrigger_BP_Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.BndEvt__CannonFireTrigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AArea_02_TrapTrigger_BP_C::BndEvt__CannonFireTrigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "BndEvt__CannonFireTrigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Area_02_TrapTrigger_BP_C_BndEvt__CannonFireTrigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.TrapOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::TrapOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "TrapOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Area_02_TrapTrigger_BP.Area_02_TrapTrigger_BP_C.TrapOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AArea_02_TrapTrigger_BP_C::TrapOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Area_02_TrapTrigger_BP_C", "TrapOff");

	UObject::ProcessEvent(Func, nullptr);
}

}

