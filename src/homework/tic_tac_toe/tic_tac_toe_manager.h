#include "tic_tac_toe.h"

class TicTacToeManager : public TicTacToe
{
public:
	void save_game(const TicTacToe b);
	//friend std::ostream & operator << (std::ostream & out , const BankAccount & b );
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & manager);


private:
	std::vector<int> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(std::string winner);

};