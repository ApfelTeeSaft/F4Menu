#pragma once

#include "ThirdParty/MinHook/include/MinHook.h"
#include "SDK/SDK/Basic.hpp"

void SetupHooks();
void RemoveHooks();
void hkProcessEvent(void* Object, void* Function, void* Params);

extern void (*oProcessEvent)(void* Object, void* Function, void* Params);