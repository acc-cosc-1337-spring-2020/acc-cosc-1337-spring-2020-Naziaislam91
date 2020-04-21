
#ifndef TicTacToe_Manager_H 
#define TicTacToe_Manager_H 
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<memory>
using std::unique_ptr; using std::make_unique;
class TicTacToeManager : public TicTacToe
{
public:
	//void save_game( TicTacToe b);
	void save_game(unique_ptr<TicTacToe> &b);
	//friend std::ostream & operator << (std::ostream & out , const BankAccount & b );
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & manager);
	void get_winner_total(int & x, int& o, int& t);
	

private:
	std::vector<unique_ptr< TicTacToe>> games; 
	//std::vector<std::reference_wrapper<TicTacToe>> games; //reference wrapper can copy vector and delete the number so that others can hold the numbers.
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);

};
#endif

