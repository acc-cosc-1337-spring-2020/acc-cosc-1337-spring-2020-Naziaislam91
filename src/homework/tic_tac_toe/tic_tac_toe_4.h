#include "tic_tac_toe.h"//h
#ifndef TicTacToe_four_H 
#define TicTacToe_four_H 
class TicTacToeFour : public TicTacToe
{
public:
	//TicTacToeFour() = default;
	//std::vector<std::string> pegs{ 16, " " };
	TicTacToeFour() : TicTacToe(4) {}
	TicTacToeFour(std::vector<string> p, string winner) :TicTacToe(p, winner) {}



private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

	

};

#endif