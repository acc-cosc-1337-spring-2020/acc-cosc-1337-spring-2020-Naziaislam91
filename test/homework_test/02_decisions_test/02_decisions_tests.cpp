#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get grade point function") {
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);

}

TEST_CASE("Test calculate GPA")
{
	REQUIRE(calculate_gpa(12, 45.0) == 3.75);
	REQUIRE(calculate_gpa(120, 390.0) == 3.25);
	REQUIRE(calculate_gpa(90, 180.0) == 2.00);
	REQUIRE(calculate_gpa(0, 90) == -1.00);
}

