#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Play_DeathAndItem_UI

#include "Basic.hpp"

#include "Play_DeathAndItem_UI_classes.hpp"
#include "Play_DeathAndItem_UI_parameters.hpp"


namespace SDK
{

// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.ExecuteUbergraph_Play_DeathAndItem_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlay_DeathAndItem_UI_C::ExecuteUbergraph_Play_DeathAndItem_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "ExecuteUbergraph_Play_DeathAndItem_UI");

	Params::Play_DeathAndItem_UI_C_ExecuteUbergraph_Play_DeathAndItem_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.ItemRootEvent
// (BlueprintCallable, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::ItemRootEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "ItemRootEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.UseItemEvent
// (BlueprintCallable, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::UseItemEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "UseItemEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.Item_02_Blank
// (BlueprintCallable, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::Item_02_Blank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "Item_02_Blank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.Item_01_Blank
// (BlueprintCallable, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::Item_01_Blank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "Item_01_Blank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.WaitItemRoot
// (BlueprintCallable, BlueprintEvent)

void UPlay_DeathAndItem_UI_C::WaitItemRoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "WaitItemRoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Play_DeathAndItem_UI.Play_DeathAndItem_UI_C.DeathCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UPlay_DeathAndItem_UI_C::DeathCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Play_DeathAndItem_UI_C", "DeathCount");

	Params::Play_DeathAndItem_UI_C_DeathCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
