#include <iostream>
using namespace std;

// ---------- Base Class ----------
class Account {
    protected:
    string name;
    string accNumber;
    string accType;
    double balance;

    public:
    Account(string name, string accNumber, string accType)
        : name(name), accNumber(accNumber), accType(accType), balance(0) {
        cout << "Account created for " << name << endl;
    }

    virtual void deposit(double amt) {
        balance += amt;
        cout << "Deposited: " << amt << " | New Balance: " << balance << endl;
    }

    virtual void displayBalance() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNumber << endl;
        cout << "Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
        cout << "-----------------------\n" << endl;
    }

    virtual void withdraw(double amt) = 0;   // pure virtual: each type withdraws differently

    virtual ~Account() {
        cout << "Account closed for " << name << endl;
    }
};

// ---------- Saving Account ----------
class Saving_account : public Account {
    private:
    double interestRate;   // e.g. 0.05 for 5%

    public:
    Saving_account(string name, string accNumber, double rate)
        : Account(name, accNumber, "Saving"), interestRate(rate) {}

    void withdraw(double amt) override {
        if (amt > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        balance -= amt;
        cout << "Withdrawn: " << amt << " | New Balance: " << balance << endl;
    }

    void computeInterest() {
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest deposited: " << interest << " | New Balance: " << balance << endl;
    }

    ~Saving_account() {}
};

// ---------- Current Account ----------
class Current_account : public Account {
    private:
    double overdraftLimit;   // how much below 0 is allowed

    public:
    Current_account(string name, string accNumber, double overdraft = 0)
        : Account(name, accNumber, "Current"), overdraftLimit(overdraft) {}

    void withdraw(double amt) override {
        if (amt > balance + overdraftLimit) {
            cout << "Withdrawal denied! Exceeds balance + overdraft limit." << endl;
            return;
        }
        balance -= amt;
        cout << "Withdrawn: " << amt << " | New Balance: " << balance << endl;
    }

    ~Current_account() {}
};

// ---------- Main ----------
int main() {
    Saving_account s("Kritika", "SB1001", 0.05);
    s.deposit(10000);
    s.withdraw(2000);
    s.computeInterest();
    s.displayBalance();

    Current_account c("Anushka", "CA2001", 500);
    c.deposit(5000);
    c.withdraw(5300);   // uses overdraft
    c.displayBalance();

    return 0;
}