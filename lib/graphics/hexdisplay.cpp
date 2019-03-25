// Copyright 2019 Rie R. Black
#include "SevenSeg.h"

SevenSeg disp1;
SevenSeg disp2;

void hex_display(int x, int y) {
    disp1.set_pos(x, y);
    disp2.set_pos(x + 80, y);
    disp1.draw();
    disp2.draw();
}

void animate_hex(int digit) {
    disp2.set_hex_digit(digit & 0x0f);
    disp1.set_hex_digit(digit >> 4);
}

void hexdisplay_setoff(void) {
    disp1.set_off();
}

void hexdisplay_setdigit(int digit) {
    digit = (digit + 1) % 256;
    if (digit < 0)
        digit = 255;
    disp1.set_hex_digit(digit & 0x0f);
}
