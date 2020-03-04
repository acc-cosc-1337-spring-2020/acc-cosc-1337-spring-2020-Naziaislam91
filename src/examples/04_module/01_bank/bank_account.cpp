#include "bank_account.h"

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