#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SwingSickle_Trap_BP

#include "Basic.hpp"

#include "SwingSickle_Trap_BP_classes.hpp"
#include "SwingSickle_Trap_BP_parameters.hpp"


namespace SDK
{

// Function SwingSickle_Trap_BP.SwingSickle_Trap_BP_C.ExecuteUbergraph_SwingSickle_Trap_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwingSickle_Trap_BP_C::ExecuteUbergraph_SwingSickle_Trap_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwingSickle_Trap_BP_C", "ExecuteUbergraph_SwingSickle_Trap_BP");

	Params::SwingSickle_Trap_BP_C_ExecuteUbergraph_SwingSickle_Trap_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SwingSickle_Trap_BP.SwingSickle_Trap_BP_C.Stop
// (BlueprintCallable, BlueprintEvent)

void ASwingSickle_Trap_BP_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwingSickle_Trap_BP_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SwingSickle_Trap_BP.SwingSickle_Trap_BP_C.Active
// (BlueprintCallable, BlueprintEvent)

void ASwingSickle_Trap_BP_C::Active()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwingSickle_Trap_BP_C", "Active");

	UObject::ProcessEvent(Func, nullptr);
}

}
