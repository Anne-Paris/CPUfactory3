// Copyright 2019 Roie R. Black
#pragma once
#include <cstdint>
#include "Button.h"
#include "ArrowButton.h"
extern int mousex, mousey;
extern Button stopButton;
extern ArrowButton arrow_button1;
extern ArrowButton arrow_button2;
extern int64_t frames;
extern bool toggle;
extern int delta_count;

void showMouse(int x, int y);
void mouse(int button, int state, int x, int y);
