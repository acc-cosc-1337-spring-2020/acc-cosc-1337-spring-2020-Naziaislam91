#include "dna.h"
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string &dna)
{
	double counter = 0.0;
	double content = 0.0;
	for (auto i = 0; i <= dna.length(); i++)
	{
		if (dna[i] == 'G' || dna[i] == 'C' || dna[i] == 'g' || dna[i] == 'c')

			++counter;
	}

	content = counter / dna.length();


	return content;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(std::string &dna)
{
	string dna_new;
	//string dna;
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

string get_dna_complement(std::string &dna)
{
	string replace_dna;
	replace_dna = get_reverse_string(dna);

	for (int i = 0; i < replace_dna.length(); ++i)
	{
		if (replace_dna[i] == 'A')
		{
			replace_dna[i] = 'T';
		}
		else if (replace_dna[i] == 'T')
		{
			replace_dna[i] = 'A';
		}
		else if (replace_dna[i] == 'C')
		{
			replace_dna[i] = 'G';
		}
		else if (replace_dna[i] == 'G')
		{
			replace_dna[i] = 'C';
		}

	}


	return replace_dna;
}
