#pragma once
#include "globals.h"
#include "framework.h"

void (*oProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters);
void hkProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
{
    string FunctionName = Function->GetName();

    if (FunctionName == "Tick");
    {
        std::cout << "Tick Logged!" << std::endl;
    }

    return oProcessEvent(Object, Function, Parameters);
}

void Initialize()
{
    MH_CreateHook((void*)(Memory::GetAddress(SDK::Offsets::ProcessEvent)), hkProcessEvent, (void**)&oProcessEvent);
    MH_EnableHook((void*)(Memory::GetAddress(SDK::Offsets::ProcessEvent)));
}