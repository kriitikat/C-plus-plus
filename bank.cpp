#include <iostream>
class Bank
{
private:
    std::string accountnumber;
    double balance;

public:
    Bank(std::string accountnumber, double balance)
    {
        this->accountnumber = accountnumber;
        if (balance <= 0)
        {
            this->balance = 0;
        }
        else
        {
            this->balance = balance;
        }
    }
    void add(double amount)
    {
        this->balance += aamount;
    }
    void withdraw(double amount)
    {
        if (amount >= balance)
        {
            std::cout << "Error" << std::endl;
        }
        else
        {
            this->balance -= amount;
        }
    }
    void current()
    {
    }
};
int main()
{
    Bank acc1(10001, 5000);
    acc1.add(1000);
    acc1.withdraw(500);
    std::cout << "Current balance:" << acc1.current() << std::endl;
}