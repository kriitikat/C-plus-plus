#include <iostream>
using namespace std;

// ================= FOOD CLASS =================
class Food {
protected:
    string DishName;
    int Price;

public:
    Food() {
        DishName = "";
        Price = 0;
    }

    Food(string d, int p) {
        DishName = d;
        Price = p;
    }

    int getPrice() {
        return Price;
    }
};


// ================= TABLEINFO CLASS =================
class TableInfo {
protected:
    int TableNo;
    Food Menu[3];       // assuming 3 food items per table
    int n;               // number of food items

public:
    TableInfo() {
        TableNo = 0;
        n = 0;
    }

    void setTable(int t) {
        TableNo = t;
    }

    void addFood(string name, int price) {
        if (n < 3) {
            Menu[n] = Food(name, price);
            n++;
        }
    }

    int getNetAmount() {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum = sum + Menu[i].getPrice();
        }

        return sum;
    }
    virtual void displayBill(){}
};


// ================= BILLAMOUNT CLASS =================
class BillAmount : public TableInfo {
    float NetAmt;
    float VAT;
    float ServiceCharge;
    float GrossAmt;

public:

    // Virtual function for runtime polymorphism
     void displayBill()override{

        NetAmt = getNetAmount();

        VAT = 0.13 * NetAmt;

        ServiceCharge = 0.10 * NetAmt;

        GrossAmt = NetAmt + VAT + ServiceCharge;

        cout << "\n-----------------------------" << endl;
        cout << "Table No       : " << TableNo << endl;
        cout << "Net Amount     : " << NetAmt << endl;
        cout << "VAT (13%)      : " << VAT << endl;
        cout << "Service Charge : " << ServiceCharge << endl;
        cout << "Gross Amount   : " << GrossAmt << endl;
        cout << "-----------------------------" << endl;
    }
};


// ================= MAIN =================
int main() {

    // Array to store information about 5 tables
    BillAmount table[5];

    // Table 1
    table[0].setTable(1);
    table[0].addFood("Momo", 150);
    table[0].addFood("Chowmein", 120);
    table[0].addFood("Coke", 80);

    // Table 2
    table[1].setTable(2);
    table[1].addFood("Pizza", 300);
    table[1].addFood("Burger", 200);
    table[1].addFood("Coke", 80);

    // Table 3
    table[2].setTable(3);
    table[2].addFood("Momo", 150);
    table[2].addFood("Pizza", 300);

    // Table 4
    table[3].setTable(4);
    table[3].addFood("Burger", 200);
    table[3].addFood("Chowmein", 120);
    table[3].addFood("Tea", 50);

    // Table 5
    table[4].setTable(5);
    table[4].addFood("Pizza", 300);
    table[4].addFood("Tea", 50);

    // Runtime polymorphism
    TableInfo *ptr;

    for (int i = 0; i < 5; i++) {
        ptr = &table[i];
ptr->displayBill();
   }

    return 0;
}