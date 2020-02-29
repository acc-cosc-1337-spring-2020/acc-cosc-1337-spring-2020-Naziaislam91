#include<iostream>
#include"vectors.h"
#include<string>
#include<vector>

using std::cout; using std::cin; using std::string; 
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.



*/
int main() 
{
	char choice = 'y';
	std::vector<int>maximum{ 8, 4, 20, 88, 66, 99 };
	do
	{
		int number;
		int prime_number =0;
		//std::vector<int>prime;
		int countmax;
		

		cout << "Please enter the number 1 to execute get max from vector and 2 for get primes: ";
		cin >> number;
		if (number == 1)
		{
			
			auto max = get_max_from_vector(maximum);
			cout << "Max is: " << max;
			

		}
		else if (number == 2)
		{
			cout << "Please enter the prime number: ";
			cin >> prime_number;
			std::vector<int>prime = vector_of_primes(prime_number);
			for (auto prm : prime)
			{
				std::cout << prm << "\n";
			}
		}


		cout << "\n" << "Do you want to continue: ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	
	
	return 0;

}