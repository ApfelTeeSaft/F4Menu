#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadKey_Move

#include "Basic.hpp"

#include "GamepadKey_Move_classes.hpp"
#include "GamepadKey_Move_parameters.hpp"


namespace SDK
{

// Function GamepadKey_Move.GamepadKey_Move_C.ExecuteUbergraph_GamepadKey_Move
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKey_Move_C::ExecuteUbergraph_GamepadKey_Move(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "ExecuteUbergraph_GamepadKey_Move");

	Params::GamepadKey_Move_C_ExecuteUbergraph_GamepadKey_Move Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKey_Move.GamepadKey_Move_C.OnGlobalSettingsApply
// (BlueprintCallable, BlueprintEvent)

void UGamepadKey_Move_C::OnGlobalSettingsApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "OnGlobalSettingsApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadKey_Move.GamepadKey_Move_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKey_Move_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "PreConstruct");

	Params::GamepadKey_Move_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKey_Move.GamepadKey_Move_C.SetGlobalSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGamepadKey_Move_C::SetGlobalSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "SetGlobalSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadKey_Move.GamepadKey_Move_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadKey_Move_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "SetText");

	Params::GamepadKey_Move_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKey_Move.GamepadKey_Move_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKey_Move_C::SetTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "SetTexture");

	Params::GamepadKey_Move_C_SetTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKey_Move.GamepadKey_Move_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHighlight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKey_Move_C::Highlight(bool bHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKey_Move_C", "Highlight");

	Params::GamepadKey_Move_C_Highlight Parms{};

	Parms.bHighlight = bHighlight;

	UObject::ProcessEvent(Func, &Parms);
}

}

