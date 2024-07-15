#include "hooks.h"
#include "MinHook.h"
#include "patterns.h"
#include "imgui.h"
#include "string"

// Include UE Code
#include "../Engine/4.26/Core/Public/CoreMinimal.h"
#include "../Engine/4.26/CoreUObject/Public/UObject/UObject.h"
#include "../Engine/4.26/CoreUObject/Public/UObject/Class.h"
#include "../Engine/4.26/Engine/Engine/Public/Engine.h"
#include "../Engine/4.26/Engine/Engine/Classes/GameFramework/Actor.h"
#include "../Engine/4.26/Engine/Engine/Classes/GameFramework/PlayerController.h"
#include "../Engine/4.26/Engine/Engine/Classes/Engine/World.h"

// Include the dumped SDK headers
#include "../SDK/SDK.hpp"

// Function prototypes
typedef void(__fastcall* tOriginalProcessEvent)(UObject* Object, UFunction* Function, void* Params);
tOriginalProcessEvent oProcessEvent = nullptr;

// Global fly mode variable
bool g_flyMode = false;
float flySpeed = 10.0f;

// Hooked function
void __fastcall hkProcessEvent(UObject* Object, UFunction* Function, void* Params) {
    // Check if the function is related to movement
    if (g_flyMode && Function->GetName().find("Tick") != std::string::npos) {
        // Assuming Params contains the player's position as FVector
        FVector* position = reinterpret_cast<FVector*>(Params);
        position->Z += flySpeed; // Adjust Z coordinate for upward movement
    }
    // Call the original ProcessEvent function
    oProcessEvent(Object, Function, Params);
}

// GUI rendering function
void RenderGUI() {
    ImGui::Begin("Fly Mode Modifier");
    ImGui::Checkbox("Fly Mode", &g_flyMode);
    ImGui::SliderFloat("Fly Speed", &flySpeed, 0.0f, 100.0f);
    ImGui::End();
}

bool InitializeHook() {
    // Initialize MinHook
    if (MH_Initialize() != MH_OK) {
        return false;
    }

    // Use the offset to find the ProcessEvent function address
    uintptr_t processEventAddr = 17894704; // OFFSET_PROCESSEVENT from OffsetsInfo.json

    // Create a hook for the ProcessEvent function
    if (MH_CreateHook(reinterpret_cast<LPVOID>(processEventAddr),
        &hkProcessEvent,
        reinterpret_cast<LPVOID*>(&oProcessEvent)) != MH_OK) {
        return false;
        
    }

    // Enable the hook
    if (MH_EnableHook(reinterpret_cast<LPVOID>(processEventAddr)) != MH_OK) {
        return false;
    }

    return true;
}