# AltF4 Cheat Menu

This repository contains a cheat menu for the game AltF4, designed to be compiled with Visual Studio 2022. It uses Minhook for hooking, ImGui for the GUI, and the Unreal Engine 4.26 source. SDK dumping is handled by Dumper-7.

## Features

- **Compilable with Visual Studio 2022**
- **Hooking using Minhook**
- **GUI using ImGui**
- **SDK dumping with Dumper-7**

## Used Resources

- **Minhook**: A hooking library for x86/x64 binaries. More information [here](https://github.com/TsudaKageyu/minhook)
- **ImGui**: A bloat-free graphical user interface library for C++. More information [here](https://github.com/ocornut/imgui)

## Requirements

- **Visual Studio 2022**: Download and install from [here](https://visualstudio.microsoft.com/vs/)
- **Knowledge on how to use a Computer**
- **Unreal Engine Unlocker**: Required for attaching the DLL. More information [here](https://github.com/UE4SS/UE4SS)

## Building the Project

1. **Open Visual Studio 2022**: Open the solution file (`.sln`) in Visual Studio 2022.

2. **Configure Project Settings**: Ensure that the include directories for Minhook, ImGui, and Unreal Engine 4.26 are correctly set up in your project settings.

3. **Build the Project**: Build the project by pressing `Ctrl + Shift + B`.

## Usage

1. **Inject the DLL**: Use an appropriate DLL injector to inject the compiled cheat menu DLL into the AltF4 game process, like the above mentioned UUU.

2. **Activate the Menu**: Use the key "F4" to open the cheat menu GUI within the game.

## Credits

- **Epic Games**: For the Unreal Engine 4.26 source. [GitHub](https://github.com/epicgames)
- **Tsuda Kageyu**: For the Minhook library. [GitHub](https://github.com/TsudaKageyu/minhook)
- **Omar Cornut**: For the ImGui library. [GitHub](https://github.com/ocornut/imgui)
- **Dumper-7**: For the SDK dumping tool. [GitHub](https://github.com/dumper-7/dumper-7)

## License

This project is licensed under the GPLv3 License. See the [LICENSE](https://github.com/ApfelTeeSaft/F4Menu/blob/main/LICENSE) file for details.
