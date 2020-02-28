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

TEST_CASE("Test the prime number")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);

}
TEST_CASE("Test the prime number from number")
{
	
	std::vector<int> prime_number{ 10 };
	std::vector<int> expected{ 2,3,5,7 };
	REQUIRE(vector_of_primes(10)== expected);
	std::vector<int> prime_number1{ 50 };
	std::vector<int> expected1{ 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	REQUIRE(vector_of_primes(50) == expected1);


	
	
	


}




