#include <Windows.h>
#include <iostream>
#include <iomanip> // Include iomanip for setw and setfill
#include "Hooks.hpp"
#include "SDK/SDK/Basic.hpp"
#include "SDK/SDK/CoreUObject_classes.hpp"
#include "Engine/Helper.hpp"
#include "ThirdParty/MinHook/include/MinHook.h"

// Typedef for ProcessEvent
typedef void(*tProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Params);
tProcessEvent oProcessEvent = nullptr;

// Hooked ProcessEvent function
void hkProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Params) {
    static thread_local bool isInsideProcessEvent = false;

    // Prevent recursion
    if (isInsideProcessEvent) {
        oProcessEvent(Object, Function, Params);
        return;
    }

    isInsideProcessEvent = true;

    std::string FunctionFullName = Function->GetFullName();
    std::string FunctionName = Function->GetName();
    std::string ObjectFullName = Object->GetFullName();

    if (oProcessEvent) {
        oProcessEvent(Object, Function, Params);
    }

    isInsideProcessEvent = false;
}

// used for debugging purposes, can be removed if too annoying
void DumpMemory(uintptr_t address, size_t size) {
    unsigned char* mem = reinterpret_cast<unsigned char*>(address);
    std::cout << "Memory dump at address: " << std::hex << address << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << std::setw(2) << std::setfill('0') << std::hex << (int)mem[i] << " ";
        if ((i + 1) % 16 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Function to set up the hook
void SetupHooks() {
    std::cout << "Initializing MinHook" << std::endl;

    if (MH_Initialize() != MH_OK) {
        std::cerr << "Failed to initialize MinHook" << std::endl;
        return;
    }

    try {
        uintptr_t baseAddress = SDK::InSDKUtils::GetImageBase();
        uintptr_t processEventAddress = baseAddress + SDK::Offsets::ProcessEvent;
        std::cout << "ProcessEvent address: " << std::hex << processEventAddress << std::endl;

        DumpMemory(processEventAddress, 256);

        if (MH_CreateHook(reinterpret_cast<void*>(processEventAddress), &hkProcessEvent, reinterpret_cast<void**>(&oProcessEvent)) != MH_OK) {
            std::cerr << "Failed to create hook" << std::endl;
            return;
        }

        if (MH_EnableHook(reinterpret_cast<void*>(processEventAddress)) != MH_OK) {
            std::cerr << "Failed to enable hook" << std::endl;
            return;
        }

        std::cout << "Hook successfully enabled" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception during hook setup: " << e.what() << std::endl;
    }
}

void RemoveHooks() {
    std::cout << "Removing hook" << std::endl;
    uintptr_t baseAddress = SDK::InSDKUtils::GetImageBase();
    uintptr_t processEventAddress = baseAddress + SDK::Offsets::ProcessEvent;

    if (MH_DisableHook(reinterpret_cast<void*>(processEventAddress)) != MH_OK) {
        std::cerr << "Failed to disable hook" << std::endl;
        return;
    }

    if (MH_Uninitialize() != MH_OK) {
        std::cerr << "Failed to uninitialize MinHook" << std::endl;
        return;
    }

    std::cout << "Hook successfully removed and MinHook uninitialized" << std::endl;
}