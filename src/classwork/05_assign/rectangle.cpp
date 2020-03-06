//Write include statement
#include"rectangle.h"

using std::cout;
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
void rectangle::calculate_area()
{
	area = width * height;
}
std::ostream& operator<<(std::ostream& out, const rectangle & a)
{
	cout << "Area is: " << a.area << "\n";
	return out;
}
/*cout << "balance is" << b.balance << "\n";
	return out;*/