// Copyright 2018 Roie R. Black
#include <catch.hpp>
#include "IM.h"

TEST_CASE("test IM constructor", "parts") {
    std::string NAME = "CPUtest";
    IM im(NAME);
    REQUIRE(im.get_name() == NAME);
}

TEST_CASE( "test_IM operation", "parts" ) {
    std::string name = "IM";
    IM im(name);
    Pin * inpin = im.get_in_pin("IN");
    Pin * outpin = im.get_out_pin("OUT");
    inpin->set_val(1);
    im.tick();
    REQUIRE( outpin->get_val() == 0 );
    im.tick();
    REQUIRE( outpin->get_val() == 1 );
}
