//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout; using std::cin;



/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;
	do 
	{
		int num, result;
		cout << "Enter the number: ";
		cin >> num;
		result = factorial(num);
		cout << "factorial: " << num << " is: " << result << "\n\n";

		std::cout << "Continue: ";
		std::cin >> choice;

	}while (choice == 1);

	return 0;
}