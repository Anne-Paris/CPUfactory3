// Copyright 2019 Roie R. Black
#pragma once
#include "Graphics.h"

class LEDbar {
 private:
    int width;
    int height;
    int x, y;
    ColorName bg_color;
    ColorName led_on_color;
    ColorName led_off_color;
    int bits;
    void drawFilledBar(int pos[2], ColorName color);
    void drawFilledLED(int offset, ColorName color);

 public:
    LEDbar();
    void set_bg_color(ColorName color);
    void set_led_on_color(ColorName color);
    void set_led_off_color(ColorName color);
    void set_on(int bits);
    int get_bits(void);
    void set_off(void);
    void draw(void);
    void set_pos(int x, int y);
};

