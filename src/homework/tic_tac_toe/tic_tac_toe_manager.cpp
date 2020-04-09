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

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	manager.display_board();
	
	out << "X wins: " << manager.x_win  << " O wins: " << manager.o_win << " Tie: " << manager.ties;
	//out << "Balance is: " << b.balance << "\n";
	// TODO: insert return statement here
	return out;
}
