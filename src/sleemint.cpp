// Sleem Programming Interpreter 3.0 (informally SleemInt) designed for SleemOS STM
// credits: v3x, osdev (credits for software used outside this file in other files)

#include "../include/kernel.h"
#include "../include/strcmp.h"
#include "../include/sleemfs.h"
#define newline uartcharacterplacement("\r\n")


void sleemintprint(const char* filenam) {
    int indexofshit = findshit(filenam);
int leng = 0;
while (filenam[leng] != '\0') {
leng++;
      }
if(leng > 3) {
}
     else {
                uartcharacterplacement("\r\n");
                uartcharacterplacement("File is not a SleemInt program or doesn't exist!");
                uartcharacterplacement("\r\n");
                return;
                
            }

        if (filenam[leng - 3] == '.') {
        }
     else {
                uartcharacterplacement("\r\n");
                uartcharacterplacement("File is not a SleemInt program or doesn't exist!");
                uartcharacterplacement("\r\n");
                return;
                
            }
        if (filenam[leng - 2] == 's') {
        }
                    else {
                uartcharacterplacement("\r\n");
                uartcharacterplacement("File is not a SleemInt program or doesn't exist!");
                uartcharacterplacement("\r\n");
                return;
                    }

        if (filenam[leng - 1] == 'i') {
        }
                else {
                uartcharacterplacement("\r\n");
                uartcharacterplacement("File is not a SleemInt program or doesn't exist!");
                uartcharacterplacement("\r\n");
                return; // yanderedev reference
            }
        
     if(indexofshit == -1) {
    uartcharacterplacement("\r\n");
    uartcharacterplacement("Invalid file!");
    uartcharacterplacement("\r\n");
    }           
         
if(indexofshit != -1) {
    int semishit2 = 0;
    char *hi = shit[indexofshit].doomscroll; while (*hi != '\0') {
    while(*hi == ' ') {
            hi++;
        } 
                int semishit = 0;
            while(hi[semishit] != '\0') {
            semishit++;;
        if(semishit[hi] == ';') {    
            semishit[hi] = '\0'; // what the FUCK does run normal bprog instructions afterwards mean
            semishit2 = 1;
            break;
    }


}



    if (echolaid(hi, "output(uart) ") == 1) {
    uartcharacterplacement("\r\n");
    uartcharacterplacement(hi + 13);
    uartcharacterplacement("\r\n");
    }
    else if (echolaid(hi, "output(uart, loop) ") == 1) {
        while(strcmp(maxinput, "exit") != 0) {
            uartcharacterplacement("\r\n");
            uartcharacterplacement(hi + 19);
            uartcharacterplacement("\r\n");
            typepls();
        }
    }
    else if (echolaid(hi, "execute(commands) ") == 1) {
        
        comans = (hi + 18);
        uartcharacterplacement("\r\n");
        termcommandsssss();
        uartcharacterplacement("\r\n");
        }
    else if (echolaid(hi, "sleep(seconds) ") == 1) {
        uint32_t seconddds = 0;
        for(char* timingshit = hi + 15; *timingshit >= '0' && *timingshit <= '9'; timingshit++) {
            seconddds = (seconddds * 10) + *timingshit - '0';
        }
        uint32_t tiksbutsleemint = tiks;
        while(tiks - tiksbutsleemint < seconddds * 1000) {
            __asm volatile("wfi");
         }
        }
    else if (echolaid(hi, "sleep(minutes) ") == 1) {
        uint32_t seconddds = 0;
        for(char* timingshit = hi + 15; *timingshit >= '0' && *timingshit <= '9'; timingshit++) {
            seconddds = (seconddds * 10) + *timingshit - '0';
        }
        uint32_t tiksbutsleemint = tiks;
        while(tiks - tiksbutsleemint < seconddds * 60000) {
            if(readindia == writeindia) {
            }
        else {
            break;
         }
            __asm volatile("wfi");
         }
        }
    else {
        uartcharacterplacement("Not implemented!");
    }
        if(semishit2 == 0) {
            break;
        }
        if(semishit2 == 1) {
            semishit[hi] = ';';
            hi = hi + semishit + 1;
            semishit2 = 0;
            }
                while(*hi == ' ') {
            hi++;
        } // i moved this for no fuckign reason wahatver

}
        }
    }
        

