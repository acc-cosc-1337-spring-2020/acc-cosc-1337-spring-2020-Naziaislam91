
#ifndef TicTacToe_Manager_H 
#define TicTacToe_Manager_H 
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
class TicTacToeManager : public TicTacToe
{
public:
	void save_game( TicTacToe b);
	//friend std::ostream & operator << (std::ostream & out , const BankAccount & b );
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & manager);
	void get_winner_total(int & x, int& o, int& t);
	

private:
	//vector<reference_wrapper<BankAccount>> accounts; 
	std::vector<std::reference_wrapper<TicTacToe>> games; //reference wrapper can copy vector and delete the number so that others can hold the numbers.
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);

};
#endif

