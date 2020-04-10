
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include <iostream>
using std::cout; using std::cin;
int main()
{
	TicTacToe game;
	TicTacToeManager b;
	std::string firstplayer;
	std::string choice;
	int player;
	bool winner;
	do
	{
		
		
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
				cout << b;
				cin >> game;
				winner = game.game_over();

			} while(game.game_over() == false);
				b.save_game(game);
			//manager;
			cout << "The winner is: " << b.get_winner() << "\n";
			cout << "Do you want to continue: ";
			cin >> choice;
			/*do
			{



				//game.display_board();
				game.game_over();
				winner = game.game_over();



				while (winner == false); //until the winner is not found
				cout << "The winner is: " << game.get_winner() << "\n";

			} while (!(firstplayer == "X" || firstplayer == "O"));
			cout << "Do you want to continue: ";
			cin >> choice;
		}*/
	}while (choice == "Y" || choice == "y");
	
	return 0;
}



