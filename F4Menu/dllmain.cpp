// DLLMain.cpp
#include <Windows.h>
#include <iostream>
#include "MinHook.h"
#include "Offsets.hpp"
#include "../UE4/UE4.hpp"

// Typedefs for the functions we are hooking
typedef void (*tAppendString)(const char* str);
typedef void (*tProcessEvent)(void* object, void* function, void* params);

// Original function pointers
tAppendString oAppendString = nullptr;
tProcessEvent oProcessEvent = nullptr;

// Hooked functions
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

// Function to initialize the console for debug output
void InitializeConsole()
{
    AllocConsole();
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONIN$", "r", stdin);
    std::cout << "Debug console initialized." << std::endl;
}

// Function to initialize offsets
void InitOffsets()
{
    Offsets::GObjects = 0x0453DA28;
    Offsets::AppendString = 0x00F3AE20;
    Offsets::GWorld = 0x04676FA0;
    Offsets::ProcessEvent = 0x01110D30;
    Offsets::ProcessEventIdx = 0x00000043;

    std::cout << "Offsets initialized." << std::endl;
}

// Function to initialize hooks
void InitHooks()
{
    if (MH_Initialize() != MH_OK)
    {
        std::cerr << "MH_Initialize failed" << std::endl;
        return;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(Offsets::AppendString), &hkAppendString, reinterpret_cast<LPVOID*>(&oAppendString)) != MH_OK)
    {
        std::cerr << "MH_CreateHook for AppendString failed" << std::endl;
        return;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(Offsets::ProcessEvent), &hkProcessEvent, reinterpret_cast<LPVOID*>(&oProcessEvent)) != MH_OK)
    {
        std::cerr << "MH_CreateHook for ProcessEvent failed" << std::endl;
        return;
    }

    if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK)
    {
        std::cerr << "MH_EnableHook failed" << std::endl;
        return;
    }

    std::cout << "Hooks installed successfully" << std::endl;
}

// Entry point for the DLL
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        InitializeConsole();
        InitOffsets();
        InitHooks();
        break;
    case DLL_PROCESS_DETACH:
        MH_Uninitialize();
        break;
    }
    return TRUE;
}