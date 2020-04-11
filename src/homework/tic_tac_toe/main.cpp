#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include<string>
using std::cout; using std::cin;
int main()
{
	TicTacToe game;
	TicTacToeManager manager;
	std::string firstplayer;
	std::string choice;
	int player;
	bool winner = true;
	bool error = true;
	char board = ' ';
	
	while (winner)
	{

		while (error)
		{
			cout << "Please enter X or O to start the game: ";
			cin >> firstplayer;
			try
			{
				game.start_game(firstplayer);
				error = false;
				cout << "\n";
			}
			catch (Error err_msg)
			{
				cout << err_msg.get_message();
			}
		}

		try
		{
			
			cin >> game;
			//cout << game;
		}

		catch (Error e)
		{
			cout << e.get_message();
		}

		if (game.game_over() == false)
		{
			cout << "\nDo you want to continue: ";
			cin >> board;
			std::cout << "\n";


			if (board == 'n')
			{
				winner = false;
			}
			else winner = true;
		}
		else
		{
			manager.save_game(game);

			cout << "\nPlayer " << game.get_winner() << "has won the game!";

			cout << "\n\n" << manager;
			std::cout << "\n Do you want to continue: ";
			cin >> board;
			std::cout << "\n";

			error = true;
			if (board == 'n')
			{
				winner = false;
			}
			else winner = true;
		}
	}


	return 0;
}




