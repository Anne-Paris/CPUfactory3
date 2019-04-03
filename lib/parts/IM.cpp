// Copyright 2018 Roie R. Black
#include "IM.h"
#include <iostream>
#include <fstream>
#include <string>

// constructor
IM::IM(std::string n):Component(n) {
    this->add_in_pin("IN");
    this->add_out_pin("OUT");
    val = 0;
}

// load - load hex file
void IM::load(std::string fn) {
    std::string line;
    std::fstream fin;

    // open file and parse lines
    fin.open(fn, std::ios::in);
    if (fin.is_open()) {
        while (!fin.eof()) {
            fin >> line;
            int len = line.size();

            std::cout << line << std::endl;
            std::string bytes = line.substr(1, 2);
            std::cout << "Byte count: " << bytes << std::endl;

            std::string offset = line.substr(3, 4);
            std::cout << "Offset: " << offset << std::endl;

            std::string record = line.substr(7, 2);
            std::cout << "Record Type: " << record << std::endl;

            std::string data = line.substr(9, len - 11);
            std::cout << "Record data: " << data << std::endl;

            std::string check = line.substr(len - 2, 2);
            std::cout << "Checksum: " << check << std::endl;
        }
    }
}

// TICK: perform component processing
void IM::tick(void) {
    Pin *inpin = this->get_in_pin("IN");
    Pin *outpin = this->get_out_pin("OUT");
    uint16_t ival, oval;

    oval = val;
    if (inpin) {
        val = inpin->get_val();
    }
    if (outpin) {
        outpin->set_val(oval);
    }
}
