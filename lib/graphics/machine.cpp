// Copyright 2019 Roie R. Black
#include "Graphics.h"
#include "LED.h"

LED ledF;
LED ledD;
LED ledE;
LED ledS;

void machineGrid(int x, int y) {
    setColor(GREEN);
    drawFilledBox(x, y, x + 160, y + 80);
    ledF.set_pos(x + 20, y + 40);
    ledF.set_label("F");
    ledF.draw();
    ledD.set_pos(x + 60, y + 40);
    ledD.set_label("D");
    ledD.draw();
    ledE.set_pos(x + 100, y + 40);
    ledE.set_label("E");
    ledE.draw();
    ledS.set_pos(x + 140, y + 40);
    ledS.set_label("S");
    ledS.draw();
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
