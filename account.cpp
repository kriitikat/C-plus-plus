#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;
public:
    BankAccount(string accountHolder, int accountNumber, double balance) {
        this->accountHolder = accountHolder;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount) {
        this->balance += amount;
        cout << amount << " deposited successfully.\n";
    }

    void withdraw(double amount) {
        if (amount <= this->balance) {
            this->balance -= amount;
            cout << amount << " withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << this->accountHolder << endl;
        cout << "Account Number: " << this->accountNumber << endl;
        cout << "Balance: $" << this->balance << endl;
    }
};

int main() {
    BankAccount acc1("John Doe", 1001, 5000);
    acc1.display();
    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.withdraw(6000);

acc1.display();

    return 0;
}