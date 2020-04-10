#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(get_winner());
	
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

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & b)
{
	for (auto  games : b.games)
	{
		
		//manager.display_board();
		out << "X wins: " << b.x_win << " O wins: " << b.o_win << " Tie: " << b.ties;
	}// TODO: insert return statement here
	return out;
}
