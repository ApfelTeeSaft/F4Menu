#pragma once

// Function declarations
void SetupHooks();
void RemoveHooks();
void hkProcessEvent(void* Object, void* Function, void* Params);

// External variable declaration
extern void (*oProcessEvent)(void* Object, void* Function, void* Params);