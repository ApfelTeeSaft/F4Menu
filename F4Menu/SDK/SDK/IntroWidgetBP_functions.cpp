#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IntroWidgetBP

#include "Basic.hpp"

#include "IntroWidgetBP_classes.hpp"
#include "IntroWidgetBP_parameters.hpp"


namespace SDK
{

// Function IntroWidgetBP.IntroWidgetBP_C.ExecuteUbergraph_IntroWidgetBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntroWidgetBP_C::ExecuteUbergraph_IntroWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "ExecuteUbergraph_IntroWidgetBP");

	Params::IntroWidgetBP_C_ExecuteUbergraph_IntroWidgetBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IntroWidgetBP.IntroWidgetBP_C.GameLogoEnd
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::GameLogoEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "GameLogoEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.CompanyLogoEnd
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::CompanyLogoEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "CompanyLogoEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnFadeMenuSceneEnd
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnFadeMenuSceneEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnFadeMenuSceneEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnFadeMenuSceneBegin
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnFadeMenuSceneBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnFadeMenuSceneBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnGameLogoBegin
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnGameLogoBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnGameLogoBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnGameLogoEnd
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnGameLogoEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnGameLogoEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnCompanyLogoEnd
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnCompanyLogoEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnCompanyLogoEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnCompanyLogoBegin
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnCompanyLogoBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnCompanyLogoBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnPressedAnyKey
// (BlueprintCallable, BlueprintEvent)

void UIntroWidgetBP_C::OnPressedAnyKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnPressedAnyKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.JumpToNextPart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAtEnd                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIntroWidgetBP_C::JumpToNextPart(bool* bIsAtEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "JumpToNextPart");

	Params::IntroWidgetBP_C_JumpToNextPart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAtEnd != nullptr)
		*bIsAtEnd = Parms.bIsAtEnd;
}


// Function IntroWidgetBP.IntroWidgetBP_C.PlayIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LoopAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIntroWidgetBP_C::PlayIntroAnimation(class UWidgetAnimation* InAnimation, bool LoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "PlayIntroAnimation");

	Params::IntroWidgetBP_C_PlayIntroAnimation Parms{};

	Parms.InAnimation = InAnimation;
	Parms.LoopAnimation = LoopAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IntroWidgetBP.IntroWidgetBP_C.StopIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntroWidgetBP_C::StopIntroAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "StopIntroAnimation");

	Params::IntroWidgetBP_C_StopIntroAnimation Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IntroWidgetBP.IntroWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIntroWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bIsGamepadBeingUsed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIntroWidgetBP_C::OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnNavigationEnter");

	Params::IntroWidgetBP_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.Param_bIsGamepadBeingUsed = Param_bIsGamepadBeingUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IntroWidgetBP.IntroWidgetBP_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateToMenu                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntroWidgetBP_C::OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntroWidgetBP_C", "OnNavigationExit");

	Params::IntroWidgetBP_C_OnNavigationExit Parms{};

	Parms.NavigateToMenu = NavigateToMenu;
	Parms.NavigateFromMenu = NavigateFromMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}
