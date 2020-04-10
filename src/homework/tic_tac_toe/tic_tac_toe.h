//h
#include<string>
#include<vector>
#include<iostream>

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{

public:
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player()const { return player; }
	//void display_board() const;
	std::string get_winner() { return winner; }
	friend std::istream & operator>>(std::istream & in, TicTacToe & b);
	friend std::ostream & operator>>(std::ostream & out, const TicTacToe & t);




private:
	bool check_board_full();
	bool check_column_win();
	bool check_row_win();
	void set_winner();
	bool check_diagonal_win();
	void clear_board();
	void set_next_player();


	std::vector<std::string> pegs{ 9, " " };
	std::string winner;
	std::string player;

};

#endif

#ifndef ERROR_H
#define ERROR_H
class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message() const { return message; }

private:
	std::string message; //class member variable 
};
#endif