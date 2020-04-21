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
	unique_ptr<TicTacToeManager> manager;
	do
	{
		int player;
		std::string firstplayer;
		bool winner;
		int x;
		int o;
		int t;
		
		std::vector<std::reference_wrapper<TicTacToe>> games;
		cout << "Please enter 3 or 4 to play the game: ";
		cin >> player;

		if (player == 3)
		{
			TicTacToeThree Three;
			
			games.push_back(Three);

			while (!(firstplayer == "X" || firstplayer == "O"))
			{
				try
				{
					cout << "The first player as X or O: " << "\n";
					cin >> firstplayer;
					Three.start_game(firstplayer);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}



			}
			do
			{
				cin >> Three;
				cout << Three;
				winner = Three.game_over();

			} while (winner == false);
			manager->save_game; //changed this from manager.save_game(Three)
			cout << "\n";
			cout << Three;
			
			manager->get_winner_total(x, o, t);
			cout << "The Winner is: " << Three.get_winner();
			cout << "\n";
			
			


		}
		else if (player == 4)
		{
			TicTacToeFour four;
			
			games.push_back(four);

			while (!(firstplayer == "X" || firstplayer == "O"))
			{
				try
				{
					cout << "The first player as X or O: " << "\n";
					cin >> firstplayer;
					four.start_game(firstplayer);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}



			}
			do
			{
				cin >> four;
				cout << four;
				winner = four.game_over();

			} while (winner == false);
			manager->save_game(four);
			cout << "\n";
			cout << four;
			manager.get_winner_total(x, o, t);
			cout << "The Winner is: " << four.get_winner();
			cout << "\n";
			

		}
		cout << "Do you want to continue: " << "\n";
		cin >> choice;
	} while (choice == "Y" || choice == "y");
	cout << manager;
	
	return 0;
}




