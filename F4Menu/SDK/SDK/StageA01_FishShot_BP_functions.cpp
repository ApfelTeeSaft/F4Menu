#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StageA01_FishShot_BP

#include "Basic.hpp"

#include "StageA01_FishShot_BP_classes.hpp"
#include "StageA01_FishShot_BP_parameters.hpp"


namespace SDK
{

// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.ExecuteUbergraph_StageA01_FishShot_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStageA01_FishShot_BP_C::ExecuteUbergraph_StageA01_FishShot_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "ExecuteUbergraph_StageA01_FishShot_BP");

	Params::StageA01_FishShot_BP_C_ExecuteUbergraph_StageA01_FishShot_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AStageA01_FishShot_BP_C::BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::StageA01_FishShot_BP_C_BndEvt__fish_shot_BP1_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AStageA01_FishShot_BP_C::BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	Params::StageA01_FishShot_BP_C_BndEvt__Fish_OverlapCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStageA01_FishShot_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             WrittenAchievementName                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WrittenProgress                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WrittenUserTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStageA01_FishShot_BP_C::OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF");

	Params::StageA01_FishShot_BP_C_OnSuccess_FF86D0DB4D8E7379D9F7FE9E76A214AF Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             WrittenAchievementName                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WrittenProgress                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WrittenUserTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStageA01_FishShot_BP_C::OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF");

	Params::StageA01_FishShot_BP_C_OnFailure_FF86D0DB4D8E7379D9F7FE9E76A214AF Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnSuccess_963398A54D6699DCCAD309B4BCCA0AD9
// (BlueprintCallable, BlueprintEvent)

void AStageA01_FishShot_BP_C::OnSuccess_963398A54D6699DCCAD309B4BCCA0AD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "OnSuccess_963398A54D6699DCCAD309B4BCCA0AD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.OnFailure_963398A54D6699DCCAD309B4BCCA0AD9
// (BlueprintCallable, BlueprintEvent)

void AStageA01_FishShot_BP_C::OnFailure_963398A54D6699DCCAD309B4BCCA0AD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "OnFailure_963398A54D6699DCCAD309B4BCCA0AD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StageA01_FishShot_BP.StageA01_FishShot_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStageA01_FishShot_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StageA01_FishShot_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

