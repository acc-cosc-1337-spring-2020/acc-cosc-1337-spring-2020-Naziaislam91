#include "vectors.h"
#include<vector>
#include<iostream>


using std::vector; using std::cout; using std::cin;
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector

*/


int get_max_from_vector(const std::vector<int> &maximum)
{
	int c = 0;
	int max = maximum[0];
	for (int i = 0; i < maximum.size(); ++i )
	{
		std::cout << maximum[i] << "\n";
		if (max <= maximum[i])
		{
			max = maximum[i];
			c = max;

		}

	}
	std::cout << "Maximum number is: " << c;
	return c;
	
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int prime_number) 
{
	//int prime = 0;
	bool flag = true; 
	
	
	for (int i = 2; i <= prime_number / 2; i++)
	{
		if (prime_number % i == 0)
		{
			
			cout << "false";
			flag = false;
			//return flag;
			break;
		}
	   if(flag)
		{
			cout << "true";
			break;
			//return flag;
		}
	   else
	   {
		   cout << "false";
		   break;
		  // return flag;
	   }
	}
	return flag;
	
	
	
}

/*Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/


