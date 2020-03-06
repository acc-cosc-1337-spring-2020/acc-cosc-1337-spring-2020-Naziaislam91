/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
#include<string>
#include<iostream>
class rectangle 
{
public:
	rectangle(int w, int h) : width{ w }, height{ h } {calculate_area();}
	int get_area()const { return area; }

	/*friend void display_balance(const BankAccount& b); // friend is not a class function, it is a free function
	friend std::ostream& operator <<(std::ostream& out, const BankAccount & b);
	friend std::istream& operator>>(std::istream& in, BankAccount & b);*/

	friend std::ostream& operator<<(std::ostream& out, const rectangle & area);



private:
	int area;
	int width;
	int height;
	void calculate_area();
};
