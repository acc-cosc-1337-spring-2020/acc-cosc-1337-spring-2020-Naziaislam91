#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include <iostream>
#include <vector>
#include<string>
#include <memory>
using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;
int main()
{
	std::string choice;
	
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	
	do
	{
		
		int player;
		std::string firstplayer;
		bool winner;
		int x;
		int o;
		int t;
		//TicTacToe* game = new TicTacToeThree();
		//TicTacToe* game = new TicTacToeFour();
		cout << "Please enter 3 or 4 to play the game: ";
		cin >> player;
		unique_ptr<TicTacToe> game;
		if (player == 3)
		{
			
			game = std::make_unique<TicTacToeThree>();
			
		}
		else if (player == 4)
		{
			
			game = std::make_unique<TicTacToeFour>();
			
		}
		while (!(firstplayer == "X" || firstplayer == "O"))
		{

			try
			{
				cout << "The first player as X or O: " << "\n";
				cin >> firstplayer;
				game->start_game(firstplayer);
			}

			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}
		
		while (game->game_over() == false)
		{
			cin >> *game;
			cout << *game;
		}
		manager->save_game(game);
		cout << "Game over" << "\n";
		manager->get_winner_total(x, o, t);

		
		cout << "Do you want to continue: " << "\n";
		cin >> choice;
	} while (choice == "Y" || choice == "y");
	cout << *manager;
	
	return 0;
}




