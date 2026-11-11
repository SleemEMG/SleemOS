<img width="300" alt="Logo (4)" src="https://github.com/user-attachments/assets/a8c3e7ef-c88a-4c7a-8d6c-3ff36cd6a040" />

# SleemOS STM
> SleemOS STM is an OS written in C++ for ARMv6-M!

## Support

A board with the `STM32G0 Series MCU` is required or `Renode` can be used instead.

## Building

Install the following packages :-
* arm-none-eabi-gcc
* arm-none-eabi-binutils
* make

And then run the following :-
```BASH
make all
```
> The above produces SleemOS.bin which is the built binary

## Features
SleemOS has a filesystem, a programming interpreter and commands like: `help, neofetch, clear, uptime, echo, write (SleemFS), touch (SleemFS), cat (SleemFS), ls (SleemFS), rm (SleemFS), edit (SleemFS), panik, reboot, run (SleemInt STM), printmcuid, hexdump (SleemFS) and badapple`

## Credits
* **wagiminator/Stefan Wagner** - For their original board that I based my board off of.
* **Trao-X** - For improving the clarity of the README.
* **zalanwastaken** - For writing the README.

## Licenses used: 
* MIT (SleemOS, embedded artistry's strcmp)
* CC-BY-SA 3.0 (wagiminators/Stefan Wagner's board)

**WARNING**: The board is in development and the firmware has not been tested on **real hardware**, only in Renode.
