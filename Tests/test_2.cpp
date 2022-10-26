#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"

TEST_CASE( "Tests_2", "Tests_2" ) {
    REQUIRE( RC_current(10,50.4,0.16,2.11) == 0.152733 );
    REQUIRE( RC_current(35,50,0.016,0.11) == 0.00516651);
}

