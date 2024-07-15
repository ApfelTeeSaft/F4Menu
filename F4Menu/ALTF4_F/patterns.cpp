#include "patterns.h"
#include <psapi.h>

uintptr_t FindPattern(const char* pattern, const char* mask) {
    MODULEINFO moduleInfo = { 0 };
    GetModuleInformation(GetCurrentProcess(), GetModuleHandle(NULL), &moduleInfo, sizeof(MODULEINFO));

    uintptr_t baseAddress = (uintptr_t)moduleInfo.lpBaseOfDll;
    uintptr_t moduleSize = (uintptr_t)moduleInfo.SizeOfImage;

    for (uintptr_t i = baseAddress; i < baseAddress + moduleSize; i++) {
        bool found = true;
        for (size_t j = 0; pattern[j]; j++) {
            if (mask[j] != '?' && pattern[j] != *(char*)(i + j)) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return 0;
}