<img width="300" alt="logo" src="https://github.com/user-attachments/assets/9b15c624-e511-433c-a799-9323c64acd26" />

# SleemOS STM
> SleemOS STM is an OS written in C++ for ARMv6-M with a shell, a flash filesystem and a programming interpreter language!

## Support

A board with the `STM32G0/C0 Series MCU` is required or `Renode` can be used instead.
> [!WARNING]
> Currently, I do not know whether SleemOS uses G0 or C0, this is my mistake, AFAIK the board uses C0 and it's only G0 in the .repl because there was no C0 model.


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

## Testing locally

Download sleemos.resc (https://raw.githubusercontent.com/SleemEMG/SleemOS/main/sleemos.resc), or clone the repo.

Install the following software :-
* Renode
* Tibbo (only needed for SleemFSDK, not necessary, see below.)

And then open Renode and type in, for example:

```
i @C:/Users/<name>/Downloads/sleemos.resc
```

You do not need to download any other files.


> The above opens the USART monitor of SleemOS.

<img width="686" height="418" alt="SleemOS shell running in Renode" src="https://github.com/user-attachments/assets/2d323414-06e0-4337-9376-feebb3d94806" />

> [!WARNING]
> Invalid filesystem, writing SleemFS... is NOT an error, it happens every time the machine is closed (eg. closing Renode, doing Clear, etc.), this should NOT happen when you use the `reboot` command.

> [!NOTE]
> The .resc script requires internet as it downloads the firmware and the .repl from this repo.


## Features
SleemOS has a filesystem, a programming interpreter and commands like: `help, neofetch, clear, uptime, echo, write (SleemFS), touch (SleemFS), cat (SleemFS), ls (SleemFS), rm (SleemFS), edit (SleemFS), panik, reboot, run (SleemInt STM), printmcuid, hexdump (SleemFS) and badapple`

## SleemInt

SleemInt (or Sleem (Programming) Interpreter) is SleemOS's programming interpreter. It features 3 functions as of right now, which are:
<br>
1. `output(uart)` Outputs anything after it to USART. (should be renamed output(USART) but whatever.)
2. `output(uart, loop)` Outputs anything after it to USART. Same idea as before but loops every time you press a space until you type exit.
3. `execute(commands)` Executes any command after it.
It supports semicolons.
> [!NOTE]
> After a semicolon, you can now use a space. The bug where you couldn't was fixed in 2.3.
That is all of the summary about SleemInt. For more check out SleemInt.md.


## SleemFS

SleemFS (or Sleem File System) is SleemOS's filesystem. It can create files, edit them, check their contents, list them and remove them. 
It is stored in the flash of the microcontroller, meaning it is a FlashFS that stays, not a temporary RAMFS
It features SleemFSDK compatibility. See SleemFSDK.

## SleemFSDK

SleemFSDK (or Sleem File System (Software) Development Kit) is SleemOS's Windows-only file system and command execution tool. It can send files using the `sendfile` command to SleemOS, it can also send commands using the `send` command.

To use SleemFSDK you must:

1. Install Tibbo's VSP Manager (part of the Tibbo Device Server Toolkit).
2. In VSP Manager, add a port and set:
   * VSP name: `COM10`
   * Transport protocol: `TCP/IP`
   * Destination: specify by IP address, `127.0.0.1` port `12345`
3. Start Renode and run `sleemos.resc`. (see above.)
4. And finally, download SleemFSDK from releases.

If you want to send a file you must run:

`.\sleemfsdk.exe sendfile COM10 file`

And if you want to send commands:

`.\sleemfsdk.exe send COM10 command`

> [!TIP]
> Successful SleemOS-Windows file sending process. <br>
<img width="1031" height="201" alt="Successful file sending process between Windows and SleemOS." src="https://github.com/user-attachments/assets/923c9d82-443e-45db-be5b-43ac57e19e8e" />


## Showcases
> [!TIP]
> SleemOS running Bad Apple. Use the `badapple` command to try it yourself. <br>
<img width="1920" height="1080" alt="SleemApple" src="https://github.com/user-attachments/assets/956a7dfd-e67c-47bf-8161-554b0bdc043b" />


## Credits
* **wagiminator/Stefan Wagner** - For their original board that I based my board off of.
* **Trao-X** - For improving the clarity of the README.
* **zalanwastaken** - For writing the README.

## Licenses used: 
* MIT (SleemOS, embedded artistry's strcmp)
* CC-BY-SA 3.0 (wagiminators/Stefan Wagner's board)

> [!WARNING]
> The board is in development and the firmware has not been tested on **real hardware**, only in Renode.
