#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test GPA to Letter Grade Conversion") 
{
	REQUIRE(gpa_to_letter_grade(3.5) == "A");
	REQUIRE(gpa_to_letter_grade(3.49) == "B");
	REQUIRE(gpa_to_letter_grade(2) == "C");
	REQUIRE(gpa_to_letter_grade(1.99) == "D");
	REQUIRE(gpa_to_letter_grade(0.99) == "F");
}