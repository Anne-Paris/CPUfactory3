// Copyright 2019 Roie R. Black
#include <math.h>
#include <GL/glut.h>
#include "Graphics.h"
#include "LED.h"
#include "LEDbar.h"
extern int FRAME_RATE;

LEDbar bar1, bar2, bar3, bar4, bar5, bar6, bar7, bar8;

void LEDmatrix(int x, int y) {
    bar1.set_pos(x, y);
    bar1.draw();
    bar2.set_pos(x + 20, y);
    bar2.draw();
    bar3.set_pos(x + 40, y);
    bar3.draw();
    bar4.set_pos(x + 60, y);
    bar4.draw();
    bar5.set_pos(x + 80, y);
    bar5.draw();
    bar6.set_pos(x + 100, y);
    bar6.draw();
    bar7.set_pos(x + 120, y);
    bar7.draw();
    bar8.set_pos(x + 140, y);
    bar8.draw();
}

void animate_bar(void) {
    // play with LEDbar
    int bits = bar1.get_bits();
    bits = ((bits * 2) % 256);
    if (bits ==0) bits = 3;
    bar1.set_on(bits);
    bar2.set_on(bits);
    bar3.set_on(bits);
    bar4.set_on(bits);
    bar5.set_on(bits);
    bar6.set_on(bits);
    bar7.set_on(bits);
    bar8.set_on(bits);
}
