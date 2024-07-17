#include <Windows.h>
#include <iostream>
#include "./Hooks.hpp"

// Function to allocate console for debug output
void AllocateConsole() {
    if (AllocConsole()) {
        FILE* fp;
        freopen_s(&fp, "CONOUT$", "w", stdout);
        freopen_s(&fp, "CONOUT$", "w", stderr);
        std::cout << "Console allocated" << std::endl;
    }
    else {
        std::cerr << "Failed to allocate console" << std::endl;
    }
}

// DLL entry point
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        AllocateConsole();
        std::cout << "DLL_PROCESS_ATTACH called" << std::endl;
        SetupHooks();
        std::cout << "SetupHooks called" << std::endl;
        break;
    case DLL_PROCESS_DETACH:
        RemoveHooks();
        std::cout << "RemoveHooks called" << std::endl;
        break;
    }
    return TRUE;
}