#include <iostream>
using namespace std;


class DigitalWallet {
    protected:
    double balance;
    double rewardPoints;

    public:
    DigitalWallet() : balance(0), rewardPoints(0) {}

    virtual void loadBalance(double amt) = 0;
    virtual void makePayment(double amt) = 0;
    virtual void paymentHistory() = 0;
    virtual void display(int id) = 0;   

    virtual ~DigitalWallet() {}
};


class Transaction : public DigitalWallet {
    private:
    double history[5];    
    int transactionCount; 
    public:
    Transaction() : transactionCount(0) {
        for (int i = 0; i < 5; i++) history[i] = 0;
    }

    void loadBalance(double amt) override {
        balance += amt;
        cout << "Balance after loading: " << balance << endl;
        recordTransaction();
    }

    void makePayment(double amt) override {
        if (amt > balance) {
            cout << "Insufficient balance!" << endl;
            return;   
        }
        balance -= amt;
        cout << "Balance after payment: " << balance << endl;

        if (amt > 2000) {
            rewardPoints += 50;
            cout << "50 reward points earned!" << endl;
        }
        if (rewardPoints >= 1000) {
            balance += 10;
            rewardPoints = (int)rewardPoints % 1000;
            cout << "Bonus! 1000 reward points converted, balance +10" << endl;
        }

        recordTransaction();
    }

    void paymentHistory() override {
        cout << "\n--- Last " << transactionCount << " Transaction(s) ---" << endl;
        for (int i = 0; i < transactionCount; i++) {
            cout << "Transaction ID " << (i + 1) << " -> Balance: " << history[i] << endl;
        }
        cout << "----------------------------------\n";
    }

    void display(int id) override {
        if (id < 1 || id > transactionCount) {
            cout << "Invalid transaction ID!" << endl;
            return;
        }
        cout << "Transaction ID " << id << " -> Balance was: " << history[id - 1] << endl;
    }

    private:
    void recordTransaction() {
        if (transactionCount < 5) {
            history[transactionCount] = balance;
            transactionCount++;
        } else {
            for (int i = 0; i < 4; i++) history[i] = history[i + 1];
            history[4] = balance;
        }
    }
};

int main() {
    DigitalWallet* w;   // base class pointer -> runtime polymorphism
    Transaction t;
    w = &t;

    w->loadBalance(5000);
    w->makePayment(2500);
    w->loadBalance(1000);
    w->makePayment(500);
    w->makePayment(3000);

    w->paymentHistory();
    w->display(2);
    w->display(5);

    return 0;
}