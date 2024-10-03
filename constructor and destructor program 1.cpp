#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holderName, double initialBalance) : accountHolder(holderName), balance(initialBalance) {
        cout << "Account for " << accountHolder << " created with initial balance $" << balance << endl;
    }

    ~BankAccount() {
        cout << "Account for " << accountHolder << " destroyed." << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " made. New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " made. New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    void displayBalance() const {
        cout << "Current balance for " << accountHolder << ": $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("John Doe", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    return 0;
}

