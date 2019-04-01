// Cpyright 2019 Roie R. Black
#include <string>
#include "TextBox.h"

TextBox::TextBox() {
    x = 50;
    y = 50;
    width = 100;
    height = 20;
    test = "Hello, World!";
}

void TextBox:: draw(void) {
    showString(x, y, text);
}

void TextBox::set_pos(int lx, int ly) {
    x = lx;
    y = ly;
}

void TextBox::set_text(std::string msg) {
    test = msg;
}


