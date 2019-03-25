// Copyright 2018 Roie R. Black
#include <catch.hpp>
#include "ALU.h"
#include "alu_ops.h"

std::string NAME = "CPUtest";
ALU alu(NAME);
Pin * in1pin = alu.get_in_pin("IN1");
Pin * in2pin = alu.get_in_pin("IN2");
Pin * aop = alu.get_in_pin("AOP");
Pin * outpin = alu.get_out_pin("OUT");

TEST_CASE("test ALU constructor", "parts") {
    REQUIRE(alu.get_name() == NAME);
}

TEST_CASE( "test_ALU ADD operation", "parts" ) {
    in1pin->set_val(1);
    in2pin->set_val(2);
    aop->set_val(ADD);
    alu.tick();
    REQUIRE(outpin->get_val() == 3);
}

TEST_CASE( "test_ALU COM operation", "parts" ) {
    in1pin->set_val(0x00ff);
    aop->set_val(COM);
    alu.tick();
    REQUIRE(outpin->get_val() == 0xff00);
}

TEST_CASE( "test_ALU SUB operation", "parts" ) {
    in1pin->set_val(3);
    in2pin->set_val(1);
    aop->set_val(SUB);
    alu.tick();
    REQUIRE(outpin->get_val() == 2);
}

TEST_CASE( "test_ALU AND operation", "parts" ) {
    in1pin->set_val(0x1122);
    in2pin->set_val(0xff);
    aop->set_val(AND);
    alu.tick();
    REQUIRE(outpin->get_val() == 0x0022);
}

TEST_CASE( "test_ALU OR operation", "parts" ) {
    in1pin->set_val(0xff);
    in2pin->set_val(0xff00);
    aop->set_val(OR);
    alu.tick();
    REQUIRE(outpin->get_val() == 0xffff);
}

TEST_CASE( "test_ALU EOR operation", "parts" ) {
    in1pin->set_val(0xff);
    in2pin->set_val(0xff);
    aop->set_val(EOR);
    alu.tick();
    REQUIRE(outpin->get_val() == 0);
}
