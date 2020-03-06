#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin; 
int main() 
{
	std::string firstplayer;
	std::string choice;
	TicTacToe game;

	//cout << "The first player" << "\n";
	//cin >> firstplayer;
	while (!(firstplayer == "X" || firstplayer == "O"))
	{
		try
		{
			cout << "The first player" << "\n";
			cin >> firstplayer;
			game.start_game(firstplayer);
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
		}
		

		
	}

	do
	{
		try
		{


			int position;
			cout << "The user for a position: " << "\n";
			cin >> position;
			game.mark_board(position);

			cout << "Do you want to continue: ";
			cin >> choice;


		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";

		}
	} while (choice == "Y" || choice == "y");
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