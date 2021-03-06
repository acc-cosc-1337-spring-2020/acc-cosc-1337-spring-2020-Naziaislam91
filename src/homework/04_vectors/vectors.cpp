#include "vectors.h"
#include<vector>


using std::vector; 
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector

*/


int get_max_from_vector(const std::vector<int> &maximum)
{
	int countmax = 0;
	int max = maximum[0];
	for (int i = 0; i < maximum.size(); ++i )
	{

		if (max <= maximum[i])
		{
			max = maximum[i];
			countmax = max;

		}

	}

	return countmax;
	
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
	for (int i = 2; i < prime_number - 1 / 2; ++i)
	{
		if (prime_number % i == 0)
		{
			flag = false;
			break;
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
std::vector<int> vector_of_primes(int prime_number) 
{
	
	std::vector<int>prime = {};
	
	for (int i = 2; i <= prime_number; i++)
	{
		if (is_prime(i) == true)
		{
			prime.push_back(i);

		}
		
	}
	return prime;


	
}


