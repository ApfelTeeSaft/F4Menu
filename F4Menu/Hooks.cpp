#include <Windows.h>
#include <iostream>
#include <iomanip> // Include iomanip for setw and setfill
#include "Hooks.hpp"
#include "SDK/SDK/Basic.hpp"
#include "Engine/Helper.hpp"
#include "ThirdParty/MinHook/include/MinHook.h"

// Typedef for ProcessEvent
typedef void(*tProcessEvent)(void* Object, void* Function, void* Params);
tProcessEvent oProcessEvent = nullptr;

// Hooked ProcessEvent function
void hkProcessEvent(void* Object, void* Function, void* Params) {
    static thread_local bool isInsideProcessEvent = false; // Recursion prevention flag

    // Capture debug statements or other logic
    std::cout << "hkProcessEvent called" << std::endl;

    // Prevent recursion
    if (isInsideProcessEvent) {
        std::cerr << "Recursion detected! Exiting." << std::endl;
        return;
    }

    isInsideProcessEvent = true;

    // Temporarily disable the hook to call the original ProcessEvent
    if (oProcessEvent) {
        std::cout << "Disabling hook to call original ProcessEvent" << std::endl;
        if (MH_DisableHook(reinterpret_cast<void*>(SDK::Offsets::ProcessEvent)) == MH_OK) {
            oProcessEvent(Object, Function, Params);
            MH_EnableHook(reinterpret_cast<void*>(SDK::Offsets::ProcessEvent));
        }
        else {
            std::cerr << "Failed to disable hook" << std::endl;
        }
    }
    else {
        std::cerr << "Error: Original ProcessEvent function pointer is null" << std::endl;
    }

    isInsideProcessEvent = false;
}

// Function to dump memory
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
        // Use the ProcessEvent offset from the SDK's Basic.hpp
        uintptr_t baseAddress = SDK::InSDKUtils::GetImageBase();
        uintptr_t processEventAddress = baseAddress + SDK::Offsets::ProcessEvent;
        std::cout << "ProcessEvent address: " << std::hex << processEventAddress << std::endl;

        // Dump at least 256 bytes of memory at the ProcessEvent address
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