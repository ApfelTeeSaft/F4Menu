#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationKeyButton

#include "Basic.hpp"

#include "NavigationKeyButton_classes.hpp"
#include "NavigationKeyButton_parameters.hpp"


namespace SDK
{

// Function NavigationKeyButton.NavigationKeyButton_C.ExecuteUbergraph_NavigationKeyButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNavigationKeyButton_C::ExecuteUbergraph_NavigationKeyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "ExecuteUbergraph_NavigationKeyButton");

	Params::NavigationKeyButton_C_ExecuteUbergraph_NavigationKeyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NavigationKeyButton.NavigationKeyButton_C.OnGlobalSettingsApply
// (BlueprintCallable, BlueprintEvent)

void UNavigationKeyButton_C::OnGlobalSettingsApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "OnGlobalSettingsApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNavigationKeyButton_C::BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNavigationKeyButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.SetHoverEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::SetHoverEffect(bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "SetHoverEffect");

	Params::NavigationKeyButton_C_SetHoverEffect Parms{};

	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NavigationKeyButton.NavigationKeyButton_C.UpdateButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsGamepadBeingUsed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::UpdateButtonIcon(bool Param_bIsGamepadBeingUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "UpdateButtonIcon");

	Params::NavigationKeyButton_C_UpdateButtonIcon Parms{};

	Parms.Param_bIsGamepadBeingUsed = Param_bIsGamepadBeingUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NavigationKeyButton.NavigationKeyButton_C.SetButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsActive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::SetButtonActive(bool Param_bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "SetButtonActive");

	Params::NavigationKeyButton_C_SetButtonActive Parms{};

	Parms.Param_bIsActive = Param_bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NavigationKeyButton.NavigationKeyButton_C.SetupButtonText
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigationKeyButton_C::SetupButtonText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "SetupButtonText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.SetGlobalSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNavigationKeyButton_C::SetGlobalSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "SetGlobalSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.GetButtonActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsActive                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::GetButtonActive(bool* Param_bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "GetButtonActive");

	Params::NavigationKeyButton_C_GetButtonActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsActive != nullptr)
		*Param_bIsActive = Parms.Param_bIsActive;
}


// Function NavigationKeyButton.NavigationKeyButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "PreConstruct");

	Params::NavigationKeyButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NavigationKeyButton.NavigationKeyButton_C.OnPressedBack
// (BlueprintCallable, BlueprintEvent)

void UNavigationKeyButton_C::OnPressedBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "OnPressedBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.OnPressedSelect
// (BlueprintCallable, BlueprintEvent)

void UNavigationKeyButton_C::OnPressedSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "OnPressedSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NavigationKeyButton.NavigationKeyButton_C.OnSetHoverEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPlaySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNavigationKeyButton_C::OnSetHoverEffect(bool bIsHovered, bool bPlaySound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationKeyButton_C", "OnSetHoverEffect");

	Params::NavigationKeyButton_C_OnSetHoverEffect Parms{};

	Parms.bIsHovered = bIsHovered;
	Parms.bPlaySound = bPlaySound;

	UObject::ProcessEvent(Func, &Parms);
}

}
