#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuContainerWidgetBP

#include "Basic.hpp"

#include "MainMenuContainerWidgetBP_classes.hpp"
#include "MainMenuContainerWidgetBP_parameters.hpp"


namespace SDK
{

// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.ExecuteUbergraph_MainMenuContainerWidgetBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuContainerWidgetBP_C::ExecuteUbergraph_MainMenuContainerWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "ExecuteUbergraph_MainMenuContainerWidgetBP");

	Params::MainMenuContainerWidgetBP_C_ExecuteUbergraph_MainMenuContainerWidgetBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionDecline__DelegateSignature
// (BlueprintEvent)

void UMainMenuContainerWidgetBP_C::BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionDecline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionDecline__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature
// (BlueprintEvent)

void UMainMenuContainerWidgetBP_C::BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.RunBenchmark
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenuContainerWidgetBP_C::RunBenchmark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "RunBenchmark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.PlayBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenuContainerWidgetBP_C::PlayBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "PlayBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.ShowLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Integer_MapImage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuContainerWidgetBP_C::ShowLoadingScreen(bool bIsVisible, int32 Integer_MapImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "ShowLoadingScreen");

	Params::MainMenuContainerWidgetBP_C_ShowLoadingScreen Parms{};

	Parms.bIsVisible = bIsVisible;
	Parms.Integer_MapImage = Integer_MapImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenuContainerWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateToMenu                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuContainerWidgetBP_C::OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "OnNavigationExit");

	Params::MainMenuContainerWidgetBP_C_OnNavigationExit Parms{};

	Parms.NavigateToMenu = NavigateToMenu;
	Parms.NavigateFromMenu = NavigateFromMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainMenuContainerWidgetBP.MainMenuContainerWidgetBP_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bIsGamepadBeingUsed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuContainerWidgetBP_C::OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuContainerWidgetBP_C", "OnNavigationEnter");

	Params::MainMenuContainerWidgetBP_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.Param_bIsGamepadBeingUsed = Param_bIsGamepadBeingUsed;

	UObject::ProcessEvent(Func, &Parms);
}

}
