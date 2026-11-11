// Bad Apple designed for SleemOS STM
// credits: v3x (credits for software used outside this file in other files)

#include "../include/badapple_frames.h"
#include "../include/kernel.h"


void badappl() {
    int penis5milion = 0;
for (int frejm = 0; frejm < 120; frejm++) {
    uint32_t penis3 = tiks;
    for (penis5milion = 0; penis5milion < 64; penis5milion++) {
    for (int dih = 0; dih < 8; dih++) {
    if ((badapple_bin[(frejm * 64) + penis5milion] & (0x80 >> dih)) != 0)
        uartcharacterplacement("##");
    if ((badapple_bin[(frejm * 64) + penis5milion] & (0x80 >> dih)) == 0) {
        uartcharacterplacement("  ");
    }
}
if ((penis5milion + 1) % 4 == 0) {
uartcharacterplacement("\r\n");

}
}

while ((tiks - penis3) < 125) {
}
if(frejm < 119) {
uartcharacterplacement("\x1b[16A");
}


    }
    readindia = writeindia;

}
