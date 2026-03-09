// Bank Account Manager (Function Overloading & Default Arguments)
// Create a series of overloaded functions:
// •	void deposit(double &balance, double amount)
// •	void withdraw(double &balance, double amount)
// •	bool withdraw(double &balance, double amount, double minBalance) - with minimum balance check
// •	void displayBalance(double balance, string accountName = "User")
#include <iostream>
#include <string>
using namespace std;
void deposit(double &balance, double amount) ;
void withdraw(double &balance, double amount) ;
bool withdraw(double &balance, double amount, double minBalance) ;
void displayBalance(double balance, string accountName = "User") ;

int main() 
{
    double myBalance = 1000.0;

    deposit(myBalance, 500);
    displayBalance(myBalance);

    withdraw(myBalance, 200);
    displayBalance(myBalance, "Saeed");

    bool success = withdraw(myBalance, 1500, 500);
    if (!success) 
    {
        cout << "Withdrawal failed due to minimum balance restriction.\n";
    }

    withdraw(myBalance, 700, 500);
    displayBalance(myBalance, "Saeed");

    return 0;
}

// Deposit function: adds amount to balance
void deposit(double &balance, double amount) 
{
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

// Withdraw function: subtracts amount from balance
void withdraw(double &balance, double amount) 
{
    if (amount <= balance) 
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    } 
    else 
    {
        cout << "Insufficient balance to withdraw " << amount << endl;
    }
}

// Withdraw function with minimum balance check
bool withdraw(double &balance, double amount, double minBalance) 
{
    if (balance - amount >= minBalance) 
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << " (Min balance requirement met)" << endl;
        return true;
    } 
    else 
    {
        cout << "Cannot withdraw " << amount << ". Minimum balance of " << minBalance << " must be maintained." << endl;
        return false;
    }
}

// Display balance with optional account name
void displayBalance(double balance, string accountName) 
{
    cout << accountName << "'s Balance: " << balance << endl;
}


