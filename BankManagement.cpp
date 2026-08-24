#include <iostream>
using namespace std;
class Account
{
protected:
    string name;
    int accNo;
    double balance;

public:
    Account()
    {
        name = "Unknown";
        accNo = 0;
        balance = 0;
    }
    Account(string n, int a)
    {
        name = n;
        accNo = a;
        balance = 0;
    }
    Account(string n, int a, double b)
    {
        name = n;
        accNo = a;
        balance = b;
    }
    virtual void display()
    {
        cout << "\nName: " << name;
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }

    friend void deposit(Account &a);
};
void deposit(Account &a)
{
    double x;

    cout << "Enter amount to deposit: ";
    cin >> x;

    if(x <= 0)
        throw x;

    a.balance = a.balance + x;
}
class Saving : public Account
{
    double interest;

public:
    Saving(string n, int a, double b, double i)
        : Account(n, a, b)
    {
        interest = i;
    }
    void display()
    {
        cout << "\n---- Saving Account ----";
        Account::display();
        cout << "Interest: " << interest << "%" << endl;
    }
};
class Current : public Account
{
    double charge;
public:
    Current(string n, int a, double b, double c) : Account(n, a, b)
    {
        charge = c;
    }
    void display()
    {
        cout << "\n---- Current Account ----";
        Account::display();
        cout << "Service Charge: " << charge << endl;
    }
};

int main()
{
    try
    {
        string name;
        int no;
        double bal;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> no;
        cout << "Enter initial balance: ";
        cin >> bal;
        if(bal < 0)
            throw bal;
        Saving s(name, no, bal, 5.5);
        Account *p;
        p = &s;
        p->display();
        deposit(s);
        cout << "\nAfter Deposit:";
        p->display();
        Current c(name, no + 1, 10000, 200);
        p = &c;
        p->display();
    }
    catch(double x)
    {
        cout << "\nInvalid amount entered!";
    }

    return 0;
}