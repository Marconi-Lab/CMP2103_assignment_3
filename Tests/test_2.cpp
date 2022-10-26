#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"

float a4 = (10/50.4)*pow(2.71828,-2.11/(50.4*0.16));
float a5 = (35/50.0)*pow(2.71828,-0.11/(50.0*0.016));
TEST_CASE( "Tests_2", "Tests_2" ) {
    REQUIRE(abs(RC_current(10,50.4,0.16,2.11) - a4)<1e-6);
    REQUIRE( abs(RC_current(35,50,0.016,0.11) - a5)<1e-6);
}

