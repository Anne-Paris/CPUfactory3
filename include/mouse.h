// Copyright 2019 Roie R. Black
#pragma once
#include <cstdint>
#include "Button.h"
extern int mousex, mousey;
extern Button stopButton;
extern int64_t frames;
extern bool toggle;
extern int delta_count;

void showMouse(int x, int y);
void mouse(int button, int state, int x, int y);
