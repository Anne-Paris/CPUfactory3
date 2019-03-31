// Copyright 2019 Roie R> Black
#pragma once
#include <string>
#include "Component.h"

class Store : public Component {
 public:
    explicit Store(std::string name);
    void tick(void);

 private:
    std::string name;
};



