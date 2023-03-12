#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify get_hours") 
{
    // Test Case 1
    int seconds_since_1970 = 1570846218;
    REQUIRE(get_hours(seconds_since_1970) == 2);

    // Test Case 2
    seconds_since_1970 = 1570875018;
    REQUIRE(get_hours(seconds_since_1970) == 10);
}

TEST_CASE("Verify get_minutes") 
{
    // Test Case 1
    int seconds_since_1970 = 1570846218;
    REQUIRE(get_minutes(seconds_since_1970) == 10);

    // Test Case 2
    seconds_since_1970 = 1570875018;
    REQUIRE(get_minutes(seconds_since_1970) == 10);
}

TEST_CASE("Verify get_seconds") 
{
    // Test Case 1
    int seconds_since_1970 = 1570846218;
    REQUIRE(get_seconds(seconds_since_1970) == 18);

    // Test Case 2
    seconds_since_1970 = 1570875018;
    REQUIRE(get_seconds(seconds_since_1970) == 18);
}
