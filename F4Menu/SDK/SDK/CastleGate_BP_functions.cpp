#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CastleGate_BP

#include "Basic.hpp"

#include "CastleGate_BP_classes.hpp"
#include "CastleGate_BP_parameters.hpp"


namespace SDK
{

// Function CastleGate_BP.CastleGate_BP_C.ExecuteUbergraph_CastleGate_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACastleGate_BP_C::ExecuteUbergraph_CastleGate_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CastleGate_BP_C", "ExecuteUbergraph_CastleGate_BP");

	Params::CastleGate_BP_C_ExecuteUbergraph_CastleGate_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CastleGate_BP.CastleGate_BP_C.DoorOpen
// (BlueprintCallable, BlueprintEvent)

void ACastleGate_BP_C::DoorOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CastleGate_BP_C", "DoorOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CastleGate_BP.CastleGate_BP_C.Door_Open__UpdateFunc
// (BlueprintEvent)

void ACastleGate_BP_C::Door_Open__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CastleGate_BP_C", "Door_Open__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CastleGate_BP.CastleGate_BP_C.Door_Open__FinishedFunc
// (BlueprintEvent)

void ACastleGate_BP_C::Door_Open__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CastleGate_BP_C", "Door_Open__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
