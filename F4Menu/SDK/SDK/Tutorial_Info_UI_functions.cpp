#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_Info_UI

#include "Basic.hpp"

#include "Tutorial_Info_UI_classes.hpp"
#include "Tutorial_Info_UI_parameters.hpp"


namespace SDK
{

// Function Tutorial_Info_UI.Tutorial_Info_UI_C.ExecuteUbergraph_Tutorial_Info_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorial_Info_UI_C::ExecuteUbergraph_Tutorial_Info_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tutorial_Info_UI_C", "ExecuteUbergraph_Tutorial_Info_UI");

	Params::Tutorial_Info_UI_C_ExecuteUbergraph_Tutorial_Info_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tutorial_Info_UI.Tutorial_Info_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorial_Info_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tutorial_Info_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
