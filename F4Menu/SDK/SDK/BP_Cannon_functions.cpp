#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cannon

#include "Basic.hpp"

#include "BP_Cannon_classes.hpp"
#include "BP_Cannon_parameters.hpp"


namespace SDK
{

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cannon_C::ExecuteUbergraph_BP_Cannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "ExecuteUbergraph_BP_Cannon");

	Params::BP_Cannon_C_ExecuteUbergraph_BP_Cannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cannon.BP_Cannon_C.Trigger_Fire
// (BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::Trigger_Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "Trigger_Fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.Trigger_FireStop
// (BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::Trigger_FireStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "Trigger_FireStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.fire_once
// (BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::Fire_once()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "fire_once");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.FireProjectile
// (BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::FireProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "FireProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Cannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.Toggle on or Off
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::Toggle_on_or_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "Toggle on or Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cannon.BP_Cannon_C.CannonMatOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cannon_C::CannonMatOverride(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cannon_C", "CannonMatOverride");

	Params::BP_Cannon_C_CannonMatOverride Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}

}
