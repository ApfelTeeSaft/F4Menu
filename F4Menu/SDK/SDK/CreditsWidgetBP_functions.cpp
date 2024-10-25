#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditsWidgetBP

#include "Basic.hpp"

#include "CreditsWidgetBP_classes.hpp"
#include "CreditsWidgetBP_parameters.hpp"


namespace SDK
{

// Function CreditsWidgetBP.CreditsWidgetBP_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.ExecuteUbergraph_CreditsWidgetBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsWidgetBP_C::ExecuteUbergraph_CreditsWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "ExecuteUbergraph_CreditsWidgetBP");

	Params::CreditsWidgetBP_C_ExecuteUbergraph_CreditsWidgetBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnGlobalSettingsApply
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnGlobalSettingsApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnGlobalSettingsApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnStartCredits
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnStartCredits()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnStartCredits");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnCreditsEnd
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnCreditsEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnCreditsEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnPressedAnyKey
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnPressedAnyKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnPressedAnyKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.SetGlobalSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::SetGlobalSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "SetGlobalSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnPressedBack
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidgetBP_C::OnPressedBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnPressedBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsGamepadBeingUsed_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreditsWidgetBP_C::OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnNavigationEnter");

	Params::CreditsWidgetBP_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.bIsGamepadBeingUsed_0 = bIsGamepadBeingUsed_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreditsWidgetBP.CreditsWidgetBP_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateToMenu                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsWidgetBP_C::OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreditsWidgetBP_C", "OnNavigationExit");

	Params::CreditsWidgetBP_C_OnNavigationExit Parms{};

	Parms.NavigateToMenu = NavigateToMenu;
	Parms.NavigateFromMenu = NavigateFromMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

