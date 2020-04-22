#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include <memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*TEST_CASE("Test can't call mark board before start game")
{
	std::unique_ptr<TicTacToe> game;
	REQUIRE_THROWS_AS(game->mark_board(1), Error);

}*/
/*
TEST_CASE("Test start game accepts only X or O") //confused with this statement
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("Z"), Error);
	
}
TEST_CASE("Test set first player to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}
TEST_CASE("Test set first player to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

}
TEST_CASE("Test start game with X game flow")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	


}
TEST_CASE("Test start game with O game flow")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	//game.mark_board(2);
	//REQUIRE(game.get_player() == "X");

}
TEST_CASE("test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");
	for (int i = 1; i < 6; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test Mark Position accepts values from  1 to 9 only")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(17), Error);
	//game.mark_board(5);
	

}
TEST_CASE("Test win by first column 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");

}

TEST_CASE("Test win by the second column 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by the third column 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by first row 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.game_over() == true); // ask question
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by second row 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by third row 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win diagonally from top left 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");

}
TEST_CASE("Test win diagonally from bottom left 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test for no winner 3")
{
	TicTacToeThree board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	REQUIRE(board.game_over() == true);
	//no one wins
	REQUIRE(board.game_over() == true); 
	REQUIRE(board.get_winner() == "C");
	
}
// Test Case for 4x4
TEST_CASE("Test game ends when board is full for 4x4")
{
	TicTacToeFour board;
	board.start_game("X");
	for (int i = 1; i < 16; ++i)
	{
		board.mark_board(i);
		
	}
	board.mark_board(16);
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first column 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");


}

TEST_CASE("Test win by second column 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by third column 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}


TEST_CASE("Test win by fourth column 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by first row 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by second row 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by third row 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by diagonal one 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by diagonal two 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X  win 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test for no winner in board 4")
{
	TicTacToeFour board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X  
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O
	// no one wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "C");
}
*/

