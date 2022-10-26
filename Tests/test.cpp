#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <cmath>
#include "../main.cpp"
//std::fixed;
//std::setprecision(int 2);
float a1 = (6.0/100.0)*pow(2.71828,-1.4/(100.0*0.026));
float a2 = (35.0/50.0)*pow(2.71828,-0.11/(50.0*0.016));
float a3 = (15.0/20.0)*pow(2.71828,-0.066/(20.0*0.055));
TEST_CASE( "Tests_2", "Tests" ) {
    REQUIRE( RC_current(6,100,0.026,1.4) == a1 );
    REQUIRE( RC_current(35,50,0.016,0.11) == a2);
}
TEST_CASE( "Tests_1", "Tests" ) {
    REQUIRE( RC_current(15,20,0.055,0.066) == a3);
}
