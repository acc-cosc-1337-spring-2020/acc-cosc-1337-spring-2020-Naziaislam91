#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
//#include<string>
using std::cout; using std::cin;
int main()
{
	
	TicTacToeManager manager;
	int position{ 0 };
	
	std::string choice;
	bool winner;
	
	do
	{
		
		TicTacToe game;
		std::string firstplayer;
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
			
			
			try
			{
				cin >> game;
				std::cout << game;
				winner = game.game_over();
			}
			catch(Error e)
			{
				cout << e.get_message() << "\n";
			}
		} while (winner == false);
		manager.save_game(game);
		cout << game;
		cout << "player " << game.get_winner() << " is the winner \n" <<"\n";
		
		cout << "Do you want to continue: " <<"\n";
		cin >> choice;

	} while (choice == "Y" || choice == "y");

	cout << manager;

	return 0;
}




