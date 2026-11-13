// SleemOS STM Startup Code
// credits: v3x, osdev (credits for software used outside this file in other files)


#include <stdint.h>
#include "../include/kernel.h"
#include "../include/sleemfs.h"
#define zero1 0
#define zero2 zero1, 0
#define zero3 zero2, 0
#define zero4 zero3, 0
#define zero5 zero4, 0
#define zero6 zero5, 0
#define zero7 zero6, 0
#define zero8 zero7, 0
#define zero9 zero8, 0
#define zero10 zero9, 0
#define zero11 zero10, 0
#define zero12 zero11, 0
#define zero13 zero12, 0
#define zero14 zero13, 0


// thx zalan for the idea of using macros instead of spamming zeroes!

extern "C" void systrickcounter();
extern volatile uint32_t *usart2_rdr; // recieve data register
extern uint32_t _data_start, _data_end, _data_flash_start;
extern uint32_t _bss_start, _bss_end;
extern uint32_t _endoflestack; // i agree
extern "C" void sleemmf(); // we love the byteos kernel yes we
int returnvalueinstartup;

extern volatile char storag[64];
extern volatile int writeindia;
extern volatile int readindia;
volatile uint32_t *somethingicr = (volatile uint32_t *)0x40004420;


extern "C" void handelr() {
    uint32_t localusartthing = *usart2_isr;
    if(localusartthing & (1 << 3)) {
        *somethingicr = 1 << 3;
    }
    if(localusartthing & (1 << 5)) {
    storag[writeindia] = *usart2_rdr;
        uint32_t localwriteindia = (writeindia + 1) & 63; 
    if(localwriteindia != readindia) {
        writeindia = localwriteindia;
    }
    }

}

extern "C" void plshandletheresetsalrthx() { // reset handler probably maybe
    uint32_t* src = &_data_flash_start; // the source is data flash start i suppose?
uint32_t* dst = &_data_start; // start of data yupp
while (dst < &_data_end) {
    *dst = *src; // source is destination
    dst++; // destination + 1
    src++; // source + 1
}



uint32_t* benis = &_bss_start;
while (benis < &_bss_end) {
    *benis = 0;
    benis++;
}
sleemmf(); // yup yup
while (1) { }
}

extern "C" void nonmaskable() {
    while(1);
}
extern "C" __attribute__((naked)) void hardfault() {
    __asm volatile (
    "mrs r0, msp\n"
    "b hardfault_shit\n"
    );
}

extern "C" void hardfault_shit(uint32_t *stack) {
            uint32_t personalcomputer = stack[6];
            uint32_t elr = stack[5];
            uartcharacterplacement("\r\n");         
            uartcharacterplacement("Critical error: SleemOS STM hardfault!");         
            uartcharacterplacement("\r\n");
            uartcharacterplacement("PC: ");
            uartcharacterplacement("0x");
            uint32tohex(personalcomputer);
            uartcharacterplacement("\r\n");
            uartcharacterplacement("LR: ");
            uartcharacterplacement("0x");
            uint32tohex(elr);
            uartcharacterplacement("\r\n");
            uartcharacterplacement("Restarting in ~10-30 seconds...");
            uartcharacterplacement("\r\n");
        for(volatile uint32_t tiksstartup = 0; tiksstartup < 60000000; tiksstartup++) {
        }
        *aircr = (0x5FAu << 16) | (1u << 2);
        __asm volatile ("dsb");
        while(1);
}



// this is the first part of cpp i meaningfuly struggled on, fun!

__attribute__((section(".vectors"), used))
void* vector_table[] = {

    (void*)&_endoflestack,
    (void*)plshandletheresetsalrthx,
    (void*)nonmaskable,
    (void*)hardfault,
    zero11,
    (void*)systrickcounter, // gd reference
    zero10,
    zero10,
    zero8,
    (void*)handelr,
};
