#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;
int main() 
{
	//std::string first_player;
	char choice = 'y';

	

	do 
	{
		try
		{
			int position;
			cout << "The user for a position: " << "\n";
			cin >> position;
			
			cout << "Do you want to continue: ";
			cin >> choice;
			

		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
			
		}
	} while (choice == 'Y' || choice == 'y');

	return 0;
}

/*try
	{
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance();
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}*/