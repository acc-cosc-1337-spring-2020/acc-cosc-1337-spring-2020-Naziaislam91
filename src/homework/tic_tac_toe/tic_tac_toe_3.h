#include "tic_tac_toe.h"//h
#ifndef TicTacToe_Three_H 
#define TicTacToe_Three_H 
class TicTacToeThree : public TicTacToe
{
public:
	//TicTacToeThree() = default; // default constructor
	TicTacToeThree() : TicTacToe(3) {}



private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

	std::vector<std::string> pegs{ 9, " " };

};

#endif//h