#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooseShot_BP

#include "Basic.hpp"

#include "GooseShot_BP_classes.hpp"
#include "GooseShot_BP_parameters.hpp"


namespace SDK
{

// Function GooseShot_BP.GooseShot_BP_C.ExecuteUbergraph_GooseShot_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGooseShot_BP_C::ExecuteUbergraph_GooseShot_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GooseShot_BP_C", "ExecuteUbergraph_GooseShot_BP");

	Params::GooseShot_BP_C_ExecuteUbergraph_GooseShot_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GooseShot_BP.GooseShot_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGooseShot_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GooseShot_BP_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

	Params::GooseShot_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GooseShot_BP.GooseShot_BP_C.homing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*                 Set_target                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGooseShot_BP_C::Homing(class AStaticMeshActor* Set_target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GooseShot_BP_C", "homing");

	Params::GooseShot_BP_C_Homing Parms{};

	Parms.Set_target = Set_target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GooseShot_BP.GooseShot_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGooseShot_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GooseShot_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
