#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
//#include<string>
using std::cout; using std::cin;
int main()
{
	
	TicTacToeManager manager;
	std::string choice;
	
	
	do
	{
		int position{ 0 };
		std::string firstplayer;
		bool winner;
		int x;
		int o;
		int t;
		TicTacToe game;
		

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
			cin >> game;
			cout << game;
			
				winner = game.game_over();
			
		} while (winner == false);
		manager.save_game(game);
		cout << "\n";
		cout << game;
		cout << "\n";
		manager.get_winner_total(x, o, t);
		cout << "\n";
		cout << "player " << game.get_winner() << " is the winner \n" <<"\n";
		
		cout << "Do you want to continue: " <<"\n";
		cin >> choice;


	} while (choice == "Y" || choice == "y");

	return 0;
}




