// Copyright 2019 Roie R> Black
#pragma once
#include <string>
#include "Component.h"
#include "MUX2.h"
#include "PC.h"
#include "IM.h"
#include "INC.h"

class Fetch : public Component {
 public:
    explicit Fetch(std::string name);
    void build(void);

 private:
    std::string name;
};



