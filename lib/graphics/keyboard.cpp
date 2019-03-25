// Copyright 2019 Roie R. Black
#include "Graphics.h"
#include "hexdisplay.h"
#include "keyboard.h"

void handleKey(unsigned char key, int x, int y) {
    switch (key) {
        case 'q':
            exit(0);
            break;
        case 't':
            // led.toggle();
            toggle = !toggle;
            if (toggle)
                hexdisplay_setoff();
            break;
        case 'c':
            digit = (digit + delta_count) % 256;
            if (digit < 0) digit = 255;
            hexdisplay_setdigit(digit);
            break;
        default:
            hexdisplay_setoff();
            break;
    }
}
