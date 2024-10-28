// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"

void AllocateConsole() {
    if (AllocConsole()) {
        FILE* fp;
        freopen_s(&fp, "CONOUT$", "w", stdout);
        freopen_s(&fp, "CONOUT$", "w", stderr);
        std::cout << "Console allocated!" << std::endl;
        std::cout << "F4Menu made with <3 by ApfelTeeSaft!" << std::endl;
        std::cout << "Press F8 to open Console ingame!" << std::endl;

    }
    else {
        std::cerr << "Failed to allocate console" << std::endl;
    }
}

void Welcome()
{
    AllocateConsole();
    ShowConsole();
    Initialize();
    InitializeGlobals();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Welcome();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

