#include"tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"//cpp

void TicTacToeData::save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& pgs)
{

	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (auto &game : pgs)
	{
		for (auto &ch : pgs)
		{
			file_out << *ch;
		}
		
		file_out << game->get_winner();
		file_out << "\n";

	}

	file_out.close();


}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{


	std::ifstream open_file("TicTacToe.dat"); //look
	//auto boards = std::unique_ptr<std::vector<TicTacToe>>();
	//auto boards = std::unique_ptr<std::vector<TicTacToe>>(new std::vector<TicTacToe>);
	//std::unique_ptr<std::vector<TicTacToe>> boards;
	//auto boards = std::unique_ptr<std::vector<std::unique_ptr <TicTacToe>>>(new std::vector<std::unique_ptr <TicTacToe>>);
	 std::vector<std::unique_ptr<TicTacToe>> boards;
	 std::vector<string> pegs;
	 std::string line;

	 while (open_file.is_open())
	 {

		 while (getline(open_file, line))
		 {

			 for (auto &ch : line)
			 {
				 string string(1, ch);
				 pegs.push_back(line);

			 }
		 }
	 }
			std::string winner;
			std::unique_ptr<TicTacToe> board;
			if (pegs.size() == 9)
			{
				std::unique_ptr <TicTacToeThree> board = std::make_unique<TicTacToeThree>(pegs, winner);
			}
			else if (pegs.size() == 16)
			{
				std::unique_ptr <TicTacToeFour> board = std::make_unique<TicTacToeFour>(pegs, winner);
			}
			boards.push_back(board);
		
		
	
	open_file.close();

	return boards;
}
