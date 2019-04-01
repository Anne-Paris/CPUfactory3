// Copyright 2019 Roie R. Black
#include <stdio.h>
#include <string>
#include <cstdint>
#include "sim-graphics.h"

ArrowButton arrow_button1;
ArrowButton arrow_button2;
Button stopButton;
bool toggle = true;
int digit = 0;
int delta_count = 1;
int64_t frames = 0;
const int FRAME_RATE = 80;
const float DELAY = 1000.0 / FRAME_RATE;

void showTime(void) {
    int time = frames;
    std::string msg = "Cycles: 000000";
    std::snprintf(&msg[8], sizeof(&msg[8]), "%6d", time);
    showString(60, 200, msg);
}

void animate(int t) {   // t is unused here
    frames++;
    int stage = ((frames / (FRAME_RATE / 4)) % 4);
    animate_stages(stage);

    if ((frames % FRAME_RATE) == 0) {
        digit = (digit + delta_count) % 65536;
        if (digit < 0) digit = 65535;
    }
    if ((frames % (FRAME_RATE / 8)) == 0) {
        animate_bar();
    }
    animate_hex(frames);
    glutPostRedisplay();
    glutTimerFunc(DELAY, animate, 0);
}

void drawScene(void) {
    clearWindow();
    // ------------------------------------------------
    //
    // display stage indicator
    machineGrid(40, 300);
    showTime();

    // show sim time
    showMouse(mousex, mousey);

    // display hex matrix with animation
    LEDmatrix(250, 300);

    // hex display tracks machine cycles
    hex_display(40, 40);

    // arrow buttons to control sim speed
    arrow_button1.set_size(50);
    arrow_button1.set_pos(500,100);
    arrow_button1.set_direction("up");
    arrow_button1.draw();
    arrow_button2.set_size(50);
    arrow_button2.set_pos(500,50);
    arrow_button2.set_direction("down");
    arrow_button2.draw();

    // mouse control to stop simulation
    stopButton.set_pos(220, 180);
    stopButton.draw();

    //-----------------------------------------------------
    glEnd();
    glFlush();
    glutSwapBuffers();
}
