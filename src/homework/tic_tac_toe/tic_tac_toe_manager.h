#include "tic_tac_toe.h"

class TicTacToeManager : public TicTacToe
{
public:
	void save_game(const TicTacToe b);


private:
	std::vector<int> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(std::string winner);

};