
#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;
int main()
{
	std::string firstplayer;
	std::string choice;
	TicTacToe game;
	bool winner;
	do
	{
		do 
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
		
			do
			{
				try
				{
					int position;
					cout << "The user for a position: " << "\n";
					cin >> position;
					game.mark_board(position);
					game.display_board();
					game.game_over();
					winner = game.game_over();
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}
			} while (winner == false); //until the winner is not found
			cout << "The winner is: " << game.get_winner() << "\n";

	} while (!(firstplayer == "X" || firstplayer == "O"));
		cout << "Do you want to continue: ";
		cin >> choice;

} while (choice == "Y" || choice == "y");

	return 0;
}



