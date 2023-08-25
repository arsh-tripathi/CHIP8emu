# How it works

Here I am going to write what I understand about Gameboy emulators and how the code that I have written here 
should be structured and how it should work.

## What I need to do 

Here are the major things that I need to tackle here

1. Memory Emulation
2. CPU Emulation
3. Graphics and Display Emulation
4. Audio Emulation
5. Input Emulation
6. Timing and Synchronization
7. ROM Loading and Cartridge Management
8. Save State and Load State
9. User Interface and Emulator Controls

## Memory Emulation

First thing we need to tackle is memory emulation. This can further be broken down into smaller problems

1. Memory Data Structure and Initialization
2. Read and Write Functions
3. Memory-Mapped Registers
4. Bank Switching Mechanisms
5. Memory Protection and Read Only regions
6. BIOS and Cartridge ROM Loading
7. Memory Mirroring and Aliasing

## CPU Emulation

This is the most important part that I have to tackle in this project.
I will further break this down into smaller problems that I can solve here.
The code for this is available in cpu.h and cpu.c.

1. Instruction Decoding
2. CPU Registers and Flags
3. Addressing Modes
4. Memory Acess
5. Arithmetic and Logic Instructions
6. Control Flow Instructions
7. Stack Operations and Interrupts
8. Timing and clock cycles
9. Opcode prefixes

