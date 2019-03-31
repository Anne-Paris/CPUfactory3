// Copyright 2019 Roie R. Black
#include <iostream>
#include "Component.h"
#include "Fetch.h"
#include "MUX2.h"
#include "Wire.h"
#include "PC.h"
#include "IM.h"

Fetch::Fetch(std::string n):Component(n) {
    name = n;

    // create the needed connections
    this->add_in_pin("PCin");
    this->add_out_pin("PCout");

    // assemble this component
    build();
}

void Fetch::build(void) {
    std::cout << "assembling fetch unit" << std::endl;
}

void Fetch::tick(void) {
    Pin *inpin = this->get_in_pin("PCin");
    Pin *outpin = this->get_out_pin("PCout");
    uint16_t ival, oval;

    if (inpin) {
        ival = inpin->get_val();
        oval = ival;
        std::cout << "Fetch:" << oval << std::endl;
    }
    if (outpin) {
        outpin->set_val(oval);
    }
}

