#include "tic_tac_toe_manager.h"
#include<iostream>
//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	//update_winner_count(b.get_winner());

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

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	
	for (auto game : manager.games)
	{
		//out << game;
		//manager.display_board();
		
	}
	out << "X wins: " << manager.x_win << " O wins: " << manager.o_win << " Tie: " << manager.ties;
	return out;
}