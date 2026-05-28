#include<iostream>
#include<string>

class Student {
private:
    std::string name;
    int age;

public:
    void setData(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
    }
};

int main() {
    Student s1;

    s1.setData("Kritika", 19);
    s1.display();

    return 0;
}