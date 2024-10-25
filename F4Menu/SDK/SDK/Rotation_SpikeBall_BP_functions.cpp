#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rotation_SpikeBall_BP

#include "Basic.hpp"

#include "Rotation_SpikeBall_BP_classes.hpp"
#include "Rotation_SpikeBall_BP_parameters.hpp"


namespace SDK
{

// Function Rotation_SpikeBall_BP.Rotation_SpikeBall_BP_C.ExecuteUbergraph_Rotation_SpikeBall_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotation_SpikeBall_BP_C::ExecuteUbergraph_Rotation_SpikeBall_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rotation_SpikeBall_BP_C", "ExecuteUbergraph_Rotation_SpikeBall_BP");

	Params::Rotation_SpikeBall_BP_C_ExecuteUbergraph_Rotation_SpikeBall_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Rotation_SpikeBall_BP.Rotation_SpikeBall_BP_C.Stop
// (BlueprintCallable, BlueprintEvent)

void ARotation_SpikeBall_BP_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rotation_SpikeBall_BP_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rotation_SpikeBall_BP.Rotation_SpikeBall_BP_C.Active
// (BlueprintCallable, BlueprintEvent)

void ARotation_SpikeBall_BP_C::Active()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rotation_SpikeBall_BP_C", "Active");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rotation_SpikeBall_BP.Rotation_SpikeBall_BP_C.BndEvt__Rotation_SpikeBall_BP_SM_Spike_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ARotation_SpikeBall_BP_C::BndEvt__Rotation_SpikeBall_BP_SM_Spike_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rotation_SpikeBall_BP_C", "BndEvt__Rotation_SpikeBall_BP_SM_Spike_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Rotation_SpikeBall_BP_C_BndEvt__Rotation_SpikeBall_BP_SM_Spike_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}

