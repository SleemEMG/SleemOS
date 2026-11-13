<img width="300" alt="logo" src="https://github.com/user-attachments/assets/8f879bed-c4a8-4658-81e2-2c67ca223106" />


# SleemInt

SleemInt (Sleem Interpreter) is a programming interpreter for SleemOS. It currently features semicolon support and the ability to execute SleemOS commands. It can also output to USART/UART in normal or loop mode.

Functions:

SleemInt has three functions as of right now.

**output(uart)** - Outputs text to USART/UART. 
<br>
Example, in file `hello.si`:
<br>
`output(uart) hi`
<br>
This outputs `hi` into USART/UART.

**output(uart, loop)** - Outputs text to USART/UART in a breakable loop.
<br>
Example, in file `hello.si`:
<br>
`output(uart, loop) hi`
<br>
This outputs `hi` every time you press enter, until you type exit and press enter into USART/UART.

**execute(commands)** - Executes SleemOS commands
<br>
Example, in file `echo.si`:
<br>
`execute(commands) echo hi`
<br>
This executes `echo hi`, outputting `hi`.

**sleep(seconds/minutes)** - Waits for a given amount of seconds/minutes.
<br>
Example, in file `timer.si`:
<br>
`sleep(seconds) 60`
<br>
This sets a 60 second timer.
> [!WARNING]
> In the minute timer, if you type anything the timer will immediately abort.

That is all of the functions.

As mentioned before, SleemInt supports semicolons.
<br>
Example, in file `echo.si`:
<br>
`execute(commands) echo hi;output(uart) bye`
<br>
This executes `echo hi`, outputting `hi` and also outputs `bye` to USART/UART.

> [!NOTE] 
> The quirk where you couldn't use a space after a semicolon has been fixed.
