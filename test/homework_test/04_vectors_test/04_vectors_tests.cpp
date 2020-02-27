#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test for the maximum number")
{
	std::vector<int> maximum{ 8, 4, 20, 88, 66, 99 };
	std::vector<int> maximum1{ 3, 8,1,99,1000 };
	std::vector<int> maximum2{ 15,12,11,99,88};
	std::vector<int> maximum3{ 150, 120, 11, 990, 88888 };
	
	get_max_from_vector(maximum);
	get_max_from_vector(maximum1);
	get_max_from_vector(maximum2);
	get_max_from_vector(maximum3);

	REQUIRE(get_max_from_vector(maximum) == 99);
	REQUIRE(get_max_from_vector(maximum1) == 1000);
	REQUIRE(get_max_from_vector(maximum2) == 99);
	REQUIRE(get_max_from_vector(maximum3) == 88888);
	
}

TEST_CASE("Test the prime numbers")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);

}






