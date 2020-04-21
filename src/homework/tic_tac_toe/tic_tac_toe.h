//h
#ifndef TicTacToe_H
#define TicTacToe_H
//#include"string"
#include<vector>
#include<iostream>
using std::string;
class TicTacToe
{

public:
	//TicTacToe() = default;
	TicTacToe() : pegs(9, " ") {};

	TicTacToe (int size) : pegs(size*size, " ") {}
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);

	std::string get_player()const { return player; }
	std::string get_winner()const { return winner; }
	
	friend std::istream & operator>>(std::istream & in, TicTacToe & b);
	friend std::ostream & operator<<(std::ostream & out, const TicTacToe & b);



protected:
	std::vector<std::string> pegs{};
	virtual bool check_column_win() = 0; //pure virtual function needs = 0 so it became abstract class
	virtual bool check_row_win() = 0;
	virtual bool check_diagonal_win() = 0;; // virtual overriddden function can change derived function.


private:
	bool check_board_full();
	void set_winner();
	void clear_board();
	void set_next_player();

	std::string winner;
	std::string player;

	//bool check_column_win();
	//bool check_row_win();
	//bool check_diagonal_win();
	//std::vector<std::string> pegs{ 9, " " };

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