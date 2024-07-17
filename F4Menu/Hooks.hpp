#pragma once

#include "ThirdParty/MinHook/include/MinHook.h"
#include "SDK/SDK/Basic.hpp"
#include "SDK/SDK/CoreUObject_classes.hpp"

void SetupHooks();
void RemoveHooks();
void hkProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Params);

extern void (*oProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Params);