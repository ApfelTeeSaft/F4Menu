#pragma once
#include "globals.h"
#include "framework.h"

void (*oProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters);
void hkProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
{
    string FunctionName = Function->GetName();

    // mockup for now
    if (FunctionName == "OnUnrealConsoleInput");
    {
        std::cout << "Unreal Console Event Logged!" << std::endl;
        if (PlayerCharacter && PlayerCharacter->CharacterMovement)
        {
            // Set movement mode to flying
            PlayerCharacter->CharacterMovement->SetMovementMode(MOVE_Flying);  // dunno if this is correct but whatever
        }
    }

    return oProcessEvent(Object, Function, Parameters);
}

void Initialize()
{
    MH_CreateHook((void*)(Memory::GetAddress(SDK::Offsets::ProcessEvent)), hkProcessEvent, (void**)&oProcessEvent);
    MH_EnableHook((void*)(Memory::GetAddress(SDK::Offsets::ProcessEvent)));
}