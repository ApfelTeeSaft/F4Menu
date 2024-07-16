// finder.cpp
#include "../UE4/UE4.hpp"

namespace UE4
{
    void InitGObjects()
    {
        if (!Offsets::GObjects)
        {
            Offsets::GObjects = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL)) + 0x0453DA28;
            std::cout << "GObjects set to: " << std::hex << Offsets::GObjects << std::endl;
        }
    }

    void InitAppendString()
    {
        if (!Offsets::AppendString)
        {
            Offsets::AppendString = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL)) + 0x00F3AE20;
            std::cout << "AppendString set to: " << std::hex << Offsets::AppendString << std::endl;
        }
    }

    void InitProcessEvent()
    {
        if (!Offsets::ProcessEvent)
        {
            Offsets::ProcessEvent = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL)) + 0x01110D30;
            std::cout << "ProcessEvent set to: " << std::hex << Offsets::ProcessEvent << std::endl;
        }
    }

    void InitAll()
    {
        InitGObjects();
        InitAppendString();
        InitProcessEvent();
        Offsets::GWorld = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL)) + 0x04676FA0;
        Offsets::ProcessEventIdx = 0x00000043;
    }
}