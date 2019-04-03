// C0pyright 2019 Roie R. Black
#pragma once
#include <string>
#include "sim-graphics.h"

class TextBox {
 public:
    TextBox();
    void set_pos(int x, int y);
    void set_size(int ww, int h);
    void set_text(std::string text);
    void draw(void);
 private:
    int x, y;
    int width, height;
    ColorName bg_color;
    std::string text;
};
