#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Calculating Kinetic Energy", "[kinetic_energy]") 
{
    double mass1 = 5.0;     
    double velocity1 = 10.0;  
    double result1 = get_kinetic_energy(mass1, velocity1);
    REQUIRE(result1 == 0.5 * mass1 * velocity1 * velocity1);
}