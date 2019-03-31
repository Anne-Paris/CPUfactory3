// Copyright 2019 Roie R. Black
#include "Graphics.h"
#include "LED.h"

// implements a four step animation, showing the CPU stages
LED ledF;   // fetch
LED ledD;   // decode
LED ledE;   // execute
LED ledS;   // store

const int width = 160;
const int height = 40;
const int spacing = width / 8;

void machineGrid(int x, int y) {
    setColor(GREEN);
    drawFilledBox(x, y, x + width, y + height);
    ledF.set_pos(x + spacing, y + height/2);
    ledF.set_label("F");
    ledF.draw();
    ledD.set_pos(x + 3 * spacing, y + height/2);
    ledD.set_label("D");
    ledD.draw();
    ledE.set_pos(x + 5 * spacing, y + height/2);
    ledE.set_label("E");
    ledE.draw();
    ledS.set_pos(x + 7 * spacing, y + height/2);
    ledS.set_label("S");
    ledS.draw();
    setColor(BLACK);
    drawBox(x, y, x + width, y + height);
}

void clear_stages(void) {
    ledF.set_state(false);
    ledD.set_state(false);
    ledE.set_state(false);
    ledS.set_state(false);
}

void animate_stages(int stage) {
    clear_stages();
    switch (stage) {
        case 0:
            ledF.set_state(true);
            break;
        case 1:
            ledD.set_state(true);
                break;
        case 2:
            ledE.set_state(true);
            break;
        case 3:
            ledS.set_state(true);
                break;
            default:
            clear_stages();
    }
}
