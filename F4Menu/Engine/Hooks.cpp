#include <Windows.h>
#include <iostream>
#include "MinHook.h"
#include "Hooks.hpp"
#include "SDK/SDK/Basic.hpp" // Include the SDK's Basic.hpp
#include "Helper.hpp" // Include the MinHook helper file

// Typedef for ProcessEvent
typedef void(*tProcessEvent)(void* Object, void* Function, void* Params);
tProcessEvent oProcessEvent = nullptr;

// Hooked ProcessEvent function
void hkProcessEvent(void* Object, void* Function, void* Params) {
    // Capture debug statements or other logic
    std::cout << "ProcessEvent Hooked" << std::endl;
    oProcessEvent(Object, Function, Params);
}

// Function to set up the hook
void SetupHooks() {
    std::cout << "Initializing MinHook" << std::endl;
    if (MH_Initialize() != MH_OK) {
        std::cerr << "Failed to initialize MinHook" << std::endl;
        return;
    }

    // Use the ProcessEvent offset from the SDK's Basic.hpp
    uintptr_t processEventAddress = SDK::Offsets::ProcessEvent;
    std::cout << "ProcessEvent address: " << std::hex << processEventAddress << std::endl;

    // Attempt to change memory protection for a larger range
    DWORD oldProtect;
    if (!VirtualProtect((LPVOID)processEventAddress, 0x1000, PAGE_EXECUTE_READWRITE, &oldProtect)) {
        std::cerr << "Failed to change memory protection" << std::endl;
        std::cerr << "Error code: " << GetLastError() << std::endl;
        return;
    }

    MH_STATUS status = MH_CreateHook((LPVOID)processEventAddress, &hkProcessEvent, reinterpret_cast<LPVOID*>(&oProcessEvent));
    if (status != MH_OK) {
        std::cerr << "Failed to create hook: " << MyMH_StatusToString(status) << std::endl;
        VirtualProtect((LPVOID)processEventAddress, 0x1000, oldProtect, &oldProtect); // Restore old protection
        return;
    }

    status = MH_EnableHook((LPVOID)processEventAddress);
    if (status != MH_OK) {
        std::cerr << "Failed to enable hook: " << MyMH_StatusToString(status) << std::endl;
        VirtualProtect((LPVOID)processEventAddress, 0x1000, oldProtect, &oldProtect); // Restore old protection
        return;
    }

    // Restore old protection after hook creation
    VirtualProtect((LPVOID)processEventAddress, 0x1000, oldProtect, &oldProtect);

    std::cout << "Hook successfully enabled" << std::endl;
}

void RemoveHooks() {
    std::cout << "Disabling hook" << std::endl;
    MH_DisableHook((LPVOID)SDK::Offsets::ProcessEvent);
    MH_Uninitialize();
    std::cout << "Hook successfully disabled and MinHook uninitialized" << std::endl;
}