#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Transcribe DNA into RNA", "verification")
{
	string dna1 = "GATGGAACTTGACTACGTAAATT";
	REQUIRE(transcribe_dna_into_rna(dna1) == "GAUGGAACUUGACUACGUAAAUU");
}