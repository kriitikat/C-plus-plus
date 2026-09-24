#include <iostream>
using namespace std;

class Height {
    int meter;
    int centimeter;

public:
    // Parameterized constructor
    Height(int m, int cm) {
        meter = m;
        centimeter = cm;
    }

    // Friend function for operator -
    friend Height operator-(Height h1, Height h2);

    void display() {
        cout << meter << " meters " << centimeter << " centimeters" << endl;
    }
};

// Operator overloading using friend function
Height operator-(Height h1, Height h2) {

    int m = h1.meter - h2.meter;
    int cm = h1.centimeter - h2.centimeter;

    // Borrow 1 meter if centimeter becomes negative
    if (cm < 0) {
        m--;
        cm = cm + 100;
    }

    return Height(m, cm);
}

int main() {

    // Height of Mt. Everest
    Height MtEverest(8848, 86);

    // Height of Base Camp
    Height BaseCamp(5364, 0);

    // Height from Base Camp to Mt. Everest
    Height HeightfromBaseCamp = MtEverest - BaseCamp;

    cout << "Height of Mt. Everest: ";
    MtEverest.display();

    cout << "Height of Base Camp: ";
    BaseCamp.display();

    cout << "Height from Base Camp: ";
    HeightfromBaseCamp.display();

    return 0;
}