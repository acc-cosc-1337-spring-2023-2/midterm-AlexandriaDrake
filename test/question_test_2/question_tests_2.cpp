#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Celsius to Fahrenheit Conversion-- Special to deal with rounding error")// I asked after class how to fix this issue, and I couldn't find 
// anything in the homework like you suggested. I found this solution online. Can you please let me know if there is an easier way to deal with this error?
// The original test case gave me 98.6 == 98.6 as a fail, so that is why I had to do this special test case instead.
{
    double expected_fahrenheit = 98.6;
    double actual_fahrenheit = get_fahrenheit(37);
    double margin_of_error = 0.1; // set a margin of error of 0.1 degrees

    REQUIRE(actual_fahrenheit == Approx(expected_fahrenheit).margin(margin_of_error));	
}

TEST_CASE("Verify Celsius to Fahrenheit Conversion")
{
	// REQUIRE(get_fahrenheit(37) == 98.6);
	REQUIRE(get_fahrenheit(25) == 77);
	REQUIRE(get_fahrenheit(0) == 32);
}
