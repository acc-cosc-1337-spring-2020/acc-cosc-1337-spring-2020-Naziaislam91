#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the GC content")
{

	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);

}

TEST_CASE("Verifying the Reverse string")
{
	std::string dna = "AGCTATAG";
	std::string dna1 = "CGCTATAG";
	REQUIRE(get_reverse_string(dna) == "GATATCGA");
	REQUIRE(get_reverse_string(dna1) == "GATATCGC");
}

TEST_CASE("Verify the complement")
{
	std::string dna = "AAAACCCGGT";
	std::string dna1 = "CCCGGAAAAT";
	REQUIRE(get_dna_complement(dna) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(dna1) == "ATTTTCCGGG");

}

