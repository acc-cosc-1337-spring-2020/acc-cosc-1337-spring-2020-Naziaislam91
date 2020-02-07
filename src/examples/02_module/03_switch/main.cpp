#include<iostream>
#include "switch.h"

using std::cin;
using std::cout;

int main() 
{
	int Option;
	cout << "Enter a number: ";
	cin >> Option;

	string result = menu(Option);
	cout << result;

	return 0;
}