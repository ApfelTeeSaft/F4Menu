#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevilRoute_BarrelSpawner_BP

#include "Basic.hpp"

#include "DevilRoute_BarrelSpawner_BP_classes.hpp"
#include "DevilRoute_BarrelSpawner_BP_parameters.hpp"


namespace SDK
{

// Function DevilRoute_BarrelSpawner_BP.DevilRoute_BarrelSpawner_BP_C.ExecuteUbergraph_DevilRoute_BarrelSpawner_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevilRoute_BarrelSpawner_BP_C::ExecuteUbergraph_DevilRoute_BarrelSpawner_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevilRoute_BarrelSpawner_BP_C", "ExecuteUbergraph_DevilRoute_BarrelSpawner_BP");

	Params::DevilRoute_BarrelSpawner_BP_C_ExecuteUbergraph_DevilRoute_BarrelSpawner_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DevilRoute_BarrelSpawner_BP.DevilRoute_BarrelSpawner_BP_C.SpawnStop
// (BlueprintCallable, BlueprintEvent)

void ADevilRoute_BarrelSpawner_BP_C::SpawnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevilRoute_BarrelSpawner_BP_C", "SpawnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DevilRoute_BarrelSpawner_BP.DevilRoute_BarrelSpawner_BP_C.SpawnLoop
// (BlueprintCallable, BlueprintEvent)

void ADevilRoute_BarrelSpawner_BP_C::SpawnLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevilRoute_BarrelSpawner_BP_C", "SpawnLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DevilRoute_BarrelSpawner_BP.DevilRoute_BarrelSpawner_BP_C.BarrelSpawn
// (BlueprintCallable, BlueprintEvent)

void ADevilRoute_BarrelSpawner_BP_C::BarrelSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevilRoute_BarrelSpawner_BP_C", "BarrelSpawn");

	UObject::ProcessEvent(Func, nullptr);
}

}

