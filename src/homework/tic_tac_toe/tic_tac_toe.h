//h
#include<string>
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
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player()const { return player; }
	

private:
	std::string player;
	void set_next_player();
	
	


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