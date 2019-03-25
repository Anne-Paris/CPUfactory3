// Copyright 2019 Roie R. Black
#include <stdio.h>
#include <string>
#include <cstdint>
#include "Graphics.h"
#include "hexdisplay.h"
#include "mouse.h"
#include "machine.h"
#include "LEDmatrix.h"
#include "Button.h"
#include "gui.h"

Button stopButton;
bool toggle = true;
int digit = 0;
int delta_count = 1;
int64_t frames = 0;
const int FRAME_RATE = 80;
const float DELAY = 1000.0 / FRAME_RATE;
bool debug = false;
bool enablegui = false;
int simsteps = 0;

void showTime(void) {
    int time = frames;
    std::string msg = "Cycles: 000000";
    std::snprintf(&msg[8], sizeof(&msg[8]), "%6d", time);
    showString(60, 200, msg);
}

void animate(int t) {
    frames++;
    int stage = ((frames / (FRAME_RATE / 4)) % 4);
    animate_stages(stage);

    if ((frames % FRAME_RATE) == 0) {
        digit = (digit + delta_count) % 256;
        if (digit < 0) digit = 255;
    }
    if ((frames % (FRAME_RATE / 8)) == 0) {
        animate_bar();
    }
    animate_hex(digit);
    glutPostRedisplay();
    glutTimerFunc(DELAY, animate, 0);
}

void drawScene(void) {
    clearWindow();
    machineGrid(40, 0);
    showTime();
    showMouse(mousex, mousey);
    LEDmatrix(200, 0);
    hex_display(40, 80);
    stopButton.set_pos(220, 180);
    stopButton.draw();
    glEnd();
    glFlush();
    glutSwapBuffers();
}
