// Copyright 2019 Rie R. Black
#include "SevenSeg.h"

SevenSeg disp1, disp2, disp3, disp4;

void hex_display(int x, int y) {
    disp4.set_pos(x, y);
    disp3.set_pos(x + 80, y);
    disp2.set_pos(x + 160, y);
    disp1.set_pos(x + 240, y);

    disp1.draw();
    disp2.draw();
    disp3.draw();
    disp4.draw();
}

void animate_hex(uint16_t val) {
    // display val in hex
    int d1 = val & 0x000f;
    int d2 = (val >> 4) & 0x000f;
    int d3 = (val >> 8) & 0x000f;
    int d4 = (val >> 12);
    disp4.set_hex_digit(d4);
    disp3.set_hex_digit(d3);
    disp2.set_hex_digit(d2);
    disp1.set_hex_digit(d1);
}

void hexdisplay_setoff(void) {
    disp1.set_off();
}
