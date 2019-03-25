// Copyright 2019 Roie R. Black
#pragma once
#include "Graphics.h"
#include <string>

class LED {
 private:
    int size;
    bool state;
    ColorName led_on_color;
    ColorName led_off_color;
    std::string label;
    ColorName label_color;
    bool label_on;
    int x;
    int y;
    void drawLabel(int x, int y);

 public:
    LED();
    void set_size(int s);
    void set_pos(int x, int y);
    void toggle(void);
    void set_on_color(ColorName color);
    void set_off_color(ColorName color);
    void set_on(void);
    void set_off(void);
    void set_state(bool s);
    void set_label(std::string l);
    void set_label_color(ColorName c);
    void draw(void);
};

