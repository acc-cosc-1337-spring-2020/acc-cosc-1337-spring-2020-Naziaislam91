#include"tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"//cpp

void TicTacToeData::save_pegs(const std::vector<string>& pgs)
{

	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto pegs : pgs)
	{
		for (auto ch : pgs)
		{
			file_out << " ";
		}
		
		file_out << get_winner();
		file_out << "\n";

	}

	file_out.close();


}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{


	std::ifstream open_file("TicTacToe.dat");
	std::unique_ptr<TicTacToe> boards;

	while (open_file.is_open())
	{
		std::vector<string> pegs{};
		std::string line;
		while (getline(open_file, line))
		{

			for (auto ch=0; ch<line.size-1; ch++)
			{
				string string(1, ch);
				pegs.push_back(string);

			}
			string winner = pegs[-1];
			std::unique_ptr<TicTacToe> board;
			if (pegs.size() == 9)
			{
				board = std::make_unique<TicTacToeThree>(pegs, winner);
			}
			else if (pegs.size() == 16)
			{
				board = std::make_unique<TicTacToeFour>(pegs, winner);
			}
			//boards.push_back(board);
		}
		
	}
	open_file.close();

	//return boards;
}
