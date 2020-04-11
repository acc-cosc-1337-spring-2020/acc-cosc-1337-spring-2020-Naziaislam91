#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
//#include<string>
using std::cout; using std::cin;
int main()
{
	TicTacToe game;
	TicTacToeManager manager;
	int position{ 0 };
	std::string firstplayer;
	std::string choice;
	bool winner;
	
	do
	{
		while (!(firstplayer == "X" || firstplayer == "O"))
		{
			try
			
			{ 
				cout << "The first player as X or O: " << "\n";
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

			std::cout << "The user " << game.get_player() << " for the position" << "\n";
			cin >> position;
			try
			{
				game.mark_board(position);
				std::cout << game;
				game.game_over();
				winner = game.game_over();
			}
			catch(Error e)
			{
				cout << e.get_message() << "\n";
			}
		} while (winner == false);
		
		cout << "player " << game.get_winner() << " is the winner";
		
		cout << manager;
		manager.save_game(game);
		cout << "\nDo you want to continue: ";
		cin >> choice;

	} while (choice == "Y ");

	return 0;
}




