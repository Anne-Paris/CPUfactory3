// Copyright 2018 Roie R. Black
#pragma once
#include <string>
#include <cstdint>
#include "Component.h"

class IM : public Component {
 public:
    // constructors
    explicit IM(std::string n);

    // mutators
    void tick(void);
    void load(std::string fn);

 private:
    uint16_t val;
};
