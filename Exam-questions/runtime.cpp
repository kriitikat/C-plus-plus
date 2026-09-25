#include <iostream>

class Vehicle {
protected:
    std::string brand;
    float price;

public:
    Vehicle(std::string b, float p) {
        brand = b;
        price = p;
    }

    virtual void displayDetails() = 0;
};

class Car : public Vehicle {
public:
    Car(std::string b, float p) : Vehicle(b, p) {}

    void displayDetails() override {
        std::cout << "Car" << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(std::string b, float p) : Vehicle(b, p) {}

    void displayDetails() override {
        std::cout << "Bike" << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(std::string b, float p) : Vehicle(b, p) {}

    void displayDetails() override {
        std::cout << "Bus" << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main() {
    Vehicle* v1 = new Car("Toyota", 5000000);
    Vehicle* v2 = new Bike("Yamaha", 350000);
    Vehicle* v3 = new Bus("Tata", 8000000);

    v1->displayDetails();
    std::cout << std::endl;

    v2->displayDetails();
    std::cout << std::endl;

    v3->displayDetails();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}