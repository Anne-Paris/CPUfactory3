// Copyright 2019 Roie R. Black
#include <string>
#include "Graphics.h"
#include "Button.h"
#include "mouse.h"

int mousex, mousey;

void showMouse(int x, int y) {
    int time = frames;
    std::string msg = "Mouse: 0000 0000";
        snprintf(&msg[8], sizeof(&msg[8]), "%4d %4d", x, y);
        showString(60, 350, msg);
}

void mouse(int button, int state, int x, int y) {
    y = WINDOW_HEIGHT - y;
    mousex = x;
    mousey = y;

    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_UP) {
            stopButton.toggle(x, y);
            delta_count = -delta_count;
        }
    }
}
