#include "dna.h"
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
void get_gc_content(const std::string &str)
{


	return double;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

void get_reverse_string(std::string & str)
{
	for (int i = dna.size() - 1; i >= 0; --i) 
	{
		dna_new += dna[i];
	}
	return dna_new;

}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

void get_dna_complement(std::string & str)
{

}
