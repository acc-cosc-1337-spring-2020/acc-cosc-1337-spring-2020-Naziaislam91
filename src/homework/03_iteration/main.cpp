//write include statements
#include<iostream>
#include dna.h
#include<string>


//write using statements
using std::cout; using std::cin; using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice;
	do
	{

		//prompt the user to enter number:
		int number;
		cout << "Please Enter 1 for Get GC Content";
		cin >> number;

		//promt the user to enter dna string:
		string dna;
		cout << "Please enter the DNA string";
		cin >> dna;
		cout << dna_new; // confused statement will be here or other place

		// checking the condition if enters 1 go to gc content or if prompt 2 go to dna complement function:
		if (number == 1)
		{
			get_gc_content(str);
		}
		else if (number == 2)
		{
			get_dna_complement(str);
		}
	}while (choice == "Y" || "y"); // do the loop until user press Y or y.

	return 0;
}