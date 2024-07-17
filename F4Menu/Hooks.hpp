#pragma once

#include "ThirdParty/MinHook/include/MinHook.h"

void SetupHooks();
void RemoveHooks();
void hkProcessEvent(void* Object, void* Function, void* Params);

extern void (*oProcessEvent)(void* Object, void* Function, void* Params);