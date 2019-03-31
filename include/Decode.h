// Copyright 2019 Roie R> Black
#pragma once
#include <string>
#include "Component.h"

class Decode : public Component {
 public:
    explicit Decode(std::string name);
    void tick(void);

 private:
    std::string name;
};



