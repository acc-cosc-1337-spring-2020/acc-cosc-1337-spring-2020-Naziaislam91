//write include statements
#include<iostream>
#include "dna.h"
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
	char choice = 'y';
	do
	{
		double gc;
		string complement;
		//prompt the user to enter number:
		int number;
		cout << "Please Enter 1 or 2 for Get GC Content: ";
		cin >> number;

		//promt the user to enter dna string:
		string dna;
		cout << "Please enter the DNA string: ";
		cin >> dna;


		// checking the condition if enters 1 go to gc content or if prompt 2 go to dna complement function:
		if (number == 1)
		{
			gc = get_gc_content(dna);
			cout << gc << "\n";

		}
		else if (number == 2)
		{
			complement = get_dna_complement(dna);
			cout << complement << "\n";
		}
		
		
			cout << "Do you want to continue: " << "\n";
			cin >> choice;
		

		
	} while (choice == 'Y' || choice == 'y'); // do the loop until user press Y or y.
	system("pause");
	

	return 0;
}