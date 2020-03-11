//h
#include<string>
#include<vector>
#include<iostream>
/*class BankAccount
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{b} { }
	int get_balance()const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);


private: 
	int balance{0};

	const int min_balance_to_open{ 25 };
};*/
class TicTacToe
{
	
public:
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player()const { return player; }
	void display_board() const;
	

private:
	bool check_board_full();
	void clear_board();
	std::string player;
	void set_next_player();
	std::vector<std::string> pegs{ 9, " " };
	
	


};

class Error
{
public:
	Error(std::string msg) : message {msg} {}
	std::string get_message() const { return message; }

private:
	std::string message;
	//class member variable 
};