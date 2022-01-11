#include "../lib/SegDisplay.h"

BusOut Seg1(p5, p6, p7, p8, p9, p10, p11); //a-g (no dp)
BusOut Seg2(p13, p14, p15, p16, p17, p18, p19); //a-g (no dp)

void SegIniti(void) {
    Seg1 = SegConvert(0);
    Seg2 = SegConvert(0);
}

int SegConvert(char SegValue) {
    int SegByte;
    switch (SegValue) {
        case 0: SegByte = 0x3F; break;
        case 1: SegByte = 0x06; break;
        case 2: SegByte = 0x5B; break;
        case 3: SegByte = 0x4F; break;
        case 4: SegByte = 0x66; break;
        case 5: SegByte = 0x6D; break;
        case 6: SegByte = 0x7D; break;
        case 7: SegByte = 0x07; break;
        case 8: SegByte = 0x7F; break;
        case 9: SegByte = 0x6F; break;
        default: SegByte = 0x00; //if not 0-9, turn off
    }
    return SegByte;
}