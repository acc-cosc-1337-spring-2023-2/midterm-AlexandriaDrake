#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Celsius to Fahrenheit Conversion")
{
	REQUIRE(get_fahrenheit(37) == 98.6);
	REQUIRE(get_fahrenheit(25) == 77);
	REQUIRE(get_fahrenheit(0) == 32);
}
