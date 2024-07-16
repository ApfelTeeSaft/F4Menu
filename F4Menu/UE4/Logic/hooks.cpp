// hooks.cpp
#include <Windows.h>
#include <iostream>
#include "MinHook.h"
#include "Offsets.hpp"
#include "../UE4/UE4.hpp"

typedef void (*tAppendString)(const char* str);
typedef void (*tProcessEvent)(void* object, void* function, void* params);

tAppendString oAppendString = nullptr;
tProcessEvent oProcessEvent = nullptr;

void hkAppendString(const char* str)
{
    std::cout << "AppendString called with: " << str << std::endl;
    oAppendString(str);
}

void hkProcessEvent(void* object, void* function, void* params)
{
    std::cout << "ProcessEvent called" << std::endl;
    oProcessEvent(object, function, params);
}

void InitializeConsole()
{
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    freopen("CONIN$", "r", stdin);
    std::cout << "Debug console initialized." << std::endl;
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    InitializeConsole();
    UE4::InitAll();

    if (MH_Initialize() != MH_OK)
    {
        std::cerr << "MH_Initialize failed" << std::endl;
        return 1;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(Offsets::AppendString), &hkAppendString, reinterpret_cast<LPVOID*>(&oAppendString)) != MH_OK)
    {
        std::cerr << "MH_CreateHook for AppendString failed" << std::endl;
        return 1;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(Offsets::ProcessEvent), &hkProcessEvent, reinterpret_cast<LPVOID*>(&oProcessEvent)) != MH_OK)
    {
        std::cerr << "MH_CreateHook for ProcessEvent failed" << std::endl;
        return 1;
    }

    if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK)
    {
        std::cerr << "MH_EnableHook failed" << std::endl;
        return 1;
    }

    std::cout << "Hooks installed successfully" << std::endl;

    return 0;
}