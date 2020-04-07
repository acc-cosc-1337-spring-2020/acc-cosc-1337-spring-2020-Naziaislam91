#include "tic_tac_toe_manager.h"
//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{

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
