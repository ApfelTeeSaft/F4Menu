#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_02

#include "Basic.hpp"

#include "MainMenu_02_classes.hpp"
#include "MainMenu_02_parameters.hpp"


namespace SDK
{

// Function MainMenu_02.MainMenu_02_C.ExecuteUbergraph_MainMenu_02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_02_C::ExecuteUbergraph_MainMenu_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_02_C", "ExecuteUbergraph_MainMenu_02");

	Params::MainMenu_02_C_ExecuteUbergraph_MainMenu_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainMenu_02.MainMenu_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMainMenu_02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_02_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
