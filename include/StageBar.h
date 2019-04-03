// Copyright 2019 Roie R. Black
#pragma once
#include "LED.h"

class StageBar {
 public:
     StageBar();
     void set_bg_color(ColorName color);
     void set_led_on_color(ColorName color);
     void set_led_off_color(ColorName color);
     void set_pos(int x, int y);
     void set_size(int w, int h);
     void draw(void);
     void set_stage(int stage);

 private:
     int width;
     int height;
     int x, y;
     ColorName bg_color;
     ColorName led_on_color;
     ColorName led_off_color;
     LED ledF, ledD, ledE, ledS;
     void clear_stages(void);
};
