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
	int number;
	int prime_number;
	bool complement;
	bool prime = true;
	cout << "Please enter the number 1 to execute get max from vector and 2 for get primes: " << "\n";
	cin >> number;
	if (number == 1)
	{
		std::vector<int>maximum{ 8, 4, 20, 88, 66, 99 };
		get_max_from_vector(maximum);

	}
	else if (number == 2)
	{
		cout << "Please enter the prime number: " << "\n";
		cin >> prime_number;
		is_prime(prime);
		std::cout << prime << "\n";


	}

	
	
	
	return 0;

}