#ifndef TicTacToe_Data_H 
#define TicTacToe_Data_H //h
#include<tic_tac_toe.h>
#include<vector>
#include<fstream>
#include<string>
#include<iostream>

class TicTacToeData : public TicTacToe
{
public:

	void save_pegs(const std::vector<string>& pgs);
	std::vector<std::unique_ptr<TicTacToe>> get_games();

private:
	const std::string file_name{ "TicTacToe.dat" };

};

#endif