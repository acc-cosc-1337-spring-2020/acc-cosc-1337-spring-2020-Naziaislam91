#include "bank_account.h"

using std::cout; using std::cin;
void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw Invalid("Amount must be greater than 0.");
	}

}
void BankAccount::withdraw(int amount) 
{
	if (amount < 0 )
	{
		throw Invalid("Amount must be greater than 0.");
	}
	else if (amount > balance)
	{
		throw Invalid("Insufficient funds.");
	}
	else
	{
		balance -= amount;
	}

}
void BankAccount::open(int amount)
{
	if (amount < min_balance_to_open)
	{
		throw Invalid("Amount must be atleast 25...");
	}
	balance += amount;
}
double BankAccount::rate = init_rate();
void display_balance(const BankAccount& b)
{
	std::cout << "balance is" << b.balance;
}
std::ostream& operator <<(std::ostream& out, const BankAccount & b) // in class function we need to write this statement for cout
{
	cout << "balance is" << b.balance << "\n";
	return out;
}
std::istream& operator>>(std::istream& in, BankAccount & b)
{
	int amount;
	std::cout << "enter amount: ";
	in >> amount;
	b.deposit(amount);
	return in;
}