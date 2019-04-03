// Copyright 2019 Roie R. Black
#include "version.h"
#include "arg-parse.h"
#include "sim-graphics.h"
#include "AVRsim.h"

bool debug = false;
bool enablegui = false;
int simsteps = 0;

// create the master machine
AVRsim avrsim("avr-sim");

int main(int argc, char * argv[]) {
    const int FRAME_RATE = 80;
    const float DELAY = 1000.0 / FRAME_RATE;
    std::cout << "avrsim (v" << VERSION << ")" << std::endl;
    arg_parse(argc, argv);
    if (debug) {
        std::cout << "\tdebugging enabled" << std::endl;
        avrsim.set_debug();
    }
    if (simsteps > 0) {
        std::cout << "\trunning for " << simsteps << " steps" << std::endl;
        avrsim.set_steps(simsteps);
    }
    if (enablegui) {
        graphicsSetup(argc, argv);
        glutDisplayFunc(drawScene);
        glutKeyboardFunc(handleKey);    // set up the "q" key to quit
        glutMouseFunc(mouse);
        glutTimerFunc(DELAY, animate, 0);
        glutMainLoop();
    } else {
        avrsim.set_steps(simsteps);
        avrsim.run();
    }
}
