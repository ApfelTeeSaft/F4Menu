#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorLight_BP

#include "Basic.hpp"

#include "DoorLight_BP_classes.hpp"
#include "DoorLight_BP_parameters.hpp"


namespace SDK
{

// Function DoorLight_BP.DoorLight_BP_C.ExecuteUbergraph_DoorLight_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorLight_BP_C::ExecuteUbergraph_DoorLight_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorLight_BP_C", "ExecuteUbergraph_DoorLight_BP");

	Params::DoorLight_BP_C_ExecuteUbergraph_DoorLight_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorLight_BP.DoorLight_BP_C.On_DoorLight
// (BlueprintCallable, BlueprintEvent)

void ADoorLight_BP_C::On_DoorLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorLight_BP_C", "On_DoorLight");

	UObject::ProcessEvent(Func, nullptr);
}

}
