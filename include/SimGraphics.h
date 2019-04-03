// Copyright 2019 Roie R. Black
#pragma once

class SimGraphics {
 public:
    // Constructor
    SimGraphics();

    // accessors
    int get_ProgramCounter();
    
    // mutators
    void new_frame(int frame);
    void set_throttle(int c);
    void step_sim(void);

 private:
    int stage_count;
}:
