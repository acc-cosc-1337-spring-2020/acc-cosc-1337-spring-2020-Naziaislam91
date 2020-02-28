/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
#include<string>
class rectangle 
{
public:
	rectangle(int w, int h) : width{ w }, height{ h } {calculate_area();}
	int get_area()const { return area; }

	

	//int get_balance()const { return balance; }



private:
	int area;
	int width;
	int height;
	void calculate_area();
};
/*public:
	BankAccount(int b) : balance{b} { }
	int get_balance()const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);


private: 
	int balance{0};
*/