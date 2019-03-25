// Copyright 2018 Roie R. Black
#include <catch.hpp>
#include "Fetch.h"
#include "Pin.h"

const std::string fname = "fetch";
TEST_CASE("test Fetch constructor", "[machine]"){
    Fetch fetch(fname);
    REQUIRE(fetch.get_name() == fname);
}

TEST_CASE("test fetch pin attachment", "machine") {
    const std::string pcnext = "PCnext";
    const std::string reset = "reset";
    const std::string ins1 = "ins1";
    const std::string ins2 = "ins2";
    Fetch fetch(fname);
    fetch.add_in_pin(pcnext);
    fetch.add_in_pin(reset);
    fetch.get_in_pin(pcnext)->set_val(2);
    fetch.get_in_pin(reset)->set_val(3);
    REQUIRE(fetch.get_in_pin(pcnext)->get_val() == 2);
    REQUIRE(fetch.get_in_pin(reset)->get_val() == 3);
    fetch.add_out_pin(ins1);
    fetch.add_out_pin(ins2);
    fetch.get_out_pin(ins1)->set_val(5);
    fetch.get_out_pin(ins2)->set_val(6);
    REQUIRE(fetch.get_out_pin(ins1)->get_val() == 5);
    REQUIRE(fetch.get_out_pin(ins2)->get_val() == 6);
}
