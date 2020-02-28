#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("testing the area")
{
	rectangle area{ 4,5 };
	rectangle area1{ 10,10 };
	rectangle area2{ 100,10 };

	REQUIRE(area.get_area() == 20);
	REQUIRE(area1.get_area() == 100);
	REQUIRE(area2.get_area() == 1000);
}

