#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: YouDie_UI

#include "Basic.hpp"

#include "YouDie_UI_classes.hpp"
#include "YouDie_UI_parameters.hpp"


namespace SDK
{

// Function YouDie_UI.YouDie_UI_C.ExecuteUbergraph_YouDie_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UYouDie_UI_C::ExecuteUbergraph_YouDie_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("YouDie_UI_C", "ExecuteUbergraph_YouDie_UI");

	Params::YouDie_UI_C_ExecuteUbergraph_YouDie_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function YouDie_UI.YouDie_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UYouDie_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("YouDie_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
