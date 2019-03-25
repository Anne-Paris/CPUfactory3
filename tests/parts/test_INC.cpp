// Copyright 2019 Roie R. Black
#include <catch.hpp>
#include "INC.h"

TEST_CASE("test INC constructor", "parts") {
    std::string NAME = "CPUtest";
    INC inc(NAME);
    REQUIRE(inc.get_name() == NAME);
}

TEST_CASE( "test_INC operation", "parts" ) {
    std::string name = "INC";
    INC inc(name);
    Pin * inpin = inc.get_in_pin("IN");
    Pin * outpin = inc.get_out_pin("OUT");
    inpin->set_val(1);
    inc.tick();
    REQUIRE( outpin->get_val() == 2 );
    inpin->set_val(0xffff);
    inc.tick();
    REQUIRE( outpin->get_val() == 0 );
}
