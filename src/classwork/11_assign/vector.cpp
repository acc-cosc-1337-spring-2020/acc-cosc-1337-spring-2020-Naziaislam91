#include "vector.h"


//initialize nums to size dynamic array 
//initialize each array element to o
Vector::Vector(size_t sz): size {sz}, nums { new int [sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

//copy v.size to new class 
//create new dynamic memory array
//initialize array elements to the v.nums array values
Vector::Vector(const Vector & v): size (v.size), nums {new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}

}
