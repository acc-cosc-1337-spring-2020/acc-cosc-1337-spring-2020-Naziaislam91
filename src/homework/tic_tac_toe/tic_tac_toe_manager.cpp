#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>


//cpp

TicTacToeManager::TicTacToeManager(TicTacToeData)
{
	TicTacToeData data;
	data.get_games(); //confused
	for (auto &game : games)
	{
		update_winner_count(winner);
	}
}

TicTacToeManager::~TicTacToeManager()
{
	
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &game)
{
	
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));

}



void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}


std::ostream & operator << (std::ostream & out, const TicTacToeManager & manager)
{
	int x_win{ 0 }; int o_win{ 0 };
	int ties{ 0 };
	
	for (auto &game : manager.games)
	{
		//out << game;
		//game.get_winner();
		
		if (game->get_winner() == "X")
		{
			x_win++;
		}
		else if (game->get_winner() == "O")
		{
			o_win++;

		}
		else if (game->get_winner() == "C")
		{
			ties++;
		}
		
	
	}
	
	return out;
}
void TicTacToeManager::get_winner_total(int & x, int& o, int& t)
{
	
	std::cout << "X wins: " << x_win << "\n";
	std::cout << "O wins: " << o_win << "\n";
	std::cout << "Tie: " << ties << "\n";
}


