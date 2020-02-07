#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double results;
	if (hours <= 40)
	{
		double regular_pay = hours * hourly_rate;
		 results = regular_pay;
	}
	else if (hours > 40)
	{
		double regular_pay = hours * hourly_rate;
		double overtime_pay = 1.5 * (hours - 40) * hourly_rate;
		results = regular_pay + overtime_pay;
		
	}

	

	
	return results;
}
