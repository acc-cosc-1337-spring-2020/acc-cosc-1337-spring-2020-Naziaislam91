#include<tic_tac_toe_data.h>//cpp

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
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe> ();

	while (open_file.is_open())
	{
		std::vector<string> pegs;
		std::string line;
		while (getline(open_file, line))
		{

		}
	}

	return std::vector<std::unique_ptr<TicTacToe>>();
}
