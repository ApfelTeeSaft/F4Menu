#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChickEggFire_BP

#include "Basic.hpp"

#include "ChickEggFire_BP_classes.hpp"
#include "ChickEggFire_BP_parameters.hpp"


namespace SDK
{

// Function ChickEggFire_BP.ChickEggFire_BP_C.ExecuteUbergraph_ChickEggFire_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChickEggFire_BP_C::ExecuteUbergraph_ChickEggFire_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChickEggFire_BP_C", "ExecuteUbergraph_ChickEggFire_BP");

	Params::ChickEggFire_BP_C_ExecuteUbergraph_ChickEggFire_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChickEggFire_BP.ChickEggFire_BP_C.BndEvt__ChickEggFire_BP_SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AChickEggFire_BP_C::BndEvt__ChickEggFire_BP_SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChickEggFire_BP_C", "BndEvt__ChickEggFire_BP_SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::ChickEggFire_BP_C_BndEvt__ChickEggFire_BP_SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChickEggFire_BP.ChickEggFire_BP_C.Fire_Stop
// (BlueprintCallable, BlueprintEvent)

void AChickEggFire_BP_C::Fire_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChickEggFire_BP_C", "Fire_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChickEggFire_BP.ChickEggFire_BP_C.Fire_Loop
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AChickEggFire_BP_C::Fire_Loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChickEggFire_BP_C", "Fire_Loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChickEggFire_BP.ChickEggFire_BP_C.Fire
// (BlueprintCallable, BlueprintEvent)

void AChickEggFire_BP_C::Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChickEggFire_BP_C", "Fire");

	UObject::ProcessEvent(Func, nullptr);
}

}
