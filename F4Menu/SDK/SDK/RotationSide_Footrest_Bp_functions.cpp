#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotationSide_Footrest_Bp

#include "Basic.hpp"

#include "RotationSide_Footrest_Bp_classes.hpp"
#include "RotationSide_Footrest_Bp_parameters.hpp"


namespace SDK
{

// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.ExecuteUbergraph_RotationSide_Footrest_Bp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotationSide_Footrest_Bp_C::ExecuteUbergraph_RotationSide_Footrest_Bp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "ExecuteUbergraph_RotationSide_Footrest_Bp");

	Params::RotationSide_Footrest_Bp_C_ExecuteUbergraph_RotationSide_Footrest_Bp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Stop
// (BlueprintCallable, BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Active
// (BlueprintCallable, BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Active()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Active");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARotationSide_Footrest_Bp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Move__SoundEvent_01__EventFunc
// (BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Move__SoundEvent_01__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Move__SoundEvent_01__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Move__SoundEvent_02__EventFunc
// (BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Move__SoundEvent_02__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Move__SoundEvent_02__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Move__UpdateFunc
// (BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Move__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Move__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotationSide_Footrest_Bp.RotationSide_Footrest_Bp_C.Move__FinishedFunc
// (BlueprintEvent)

void ARotationSide_Footrest_Bp_C::Move__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotationSide_Footrest_Bp_C", "Move__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

