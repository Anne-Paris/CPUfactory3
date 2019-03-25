// Copyright 2019 Roie R. Black
#pragma once
#include "Graphics.h"

class SevenSeg {
 private:
    int width;
    int height;
    int bar;
    ColorName bg_color;
    ColorName led_on_color;
    ColorName led_off_color;
    int bits;
    void drawFilledSeg(int pos[6][2], int seg, ColorName color);
    void drawFilledSegA(ColorName color);
    void drawFilledSegB(ColorName color);
    void drawFilledSegC(ColorName color);
    void drawFilledSegD(ColorName color);
    void drawFilledSegE(ColorName color);
    void drawFilledSegF(ColorName color);
    void drawFilledSegG(ColorName color);
    void drawFilledSegDot(ColorName color);
    int x, y;

 public:
    SevenSeg();
    void set_bg_color(ColorName color);
    void set_led_on_color(ColorName color);
    void set_led_off_color(ColorName color);
    void set_on(int bits);
    void set_hex_digit(int n);
    void set_decimal_digit(int n);
    void set_off(void);
    void draw(void);
    void set_pos(int x, int y);
};
