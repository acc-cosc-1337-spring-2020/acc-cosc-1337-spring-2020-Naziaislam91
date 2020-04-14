#include "tic_tac_toe.h"
using std::string;
#include<iostream>
#include<string>
//cpp
bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;

	}
	else if (check_board_full() == true)
	{
		winner = 'C';
		return true;

	}
	return false;
}


void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Player must be X or O");
	}
	//player = first_player;
	clear_board();
}
void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9.");
	}
	if (player.empty())
	{
		throw Error("Must start game first.");

	}
	pegs[position - 1] = player;

	if (game_over() == false) // changing this statement for homework 8
	{
		set_next_player();
	}
}
void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}

}

/*void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}*/





bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")

			return false;
	}
	return true;
}

bool TicTacToe::check_column_win()
{
return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}
void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = 'X';
	}
	else
	{
		winner = 'O';
	}
}

std::istream & operator>>(std::istream & in, TicTacToe & b)
{
	try
	{
		int position{ 0 };
		std::cout << "The user " << b.get_player() << " for the position" << "\n";
		in >> position;
		b.mark_board(position);
		std::cout << "\n";
	}
	catch (Error e)
	{
		std::cout << e.get_message() << "\n";
	}
	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & b)
{
	for (int i = 0; i < 9; i += 3)
	{
		out << b.pegs[i] << "|" << b.pegs[i + 1] << "|" << b.pegs[i + 2] << "\n";
	}

	return out;
}

