#include<iostream>
class Employee{
    public:
    virtual void salary(){
        std::cout << "Employee Salary:" << std:: endl;
    }
};
 class Manager : public Employee{
    public:
    void salary() override{
        std::cout << "Salary of Manager is 50K" << std:: endl;
    }
 };
 class Developer : public Employee{
    public:
    void salary() override{
        std::cout << "Salary of Developer is 100K" << std:: endl;
    }
 };
 int main(){
    Employee *e;
    Manager m;
    e = &m;
    e->salary();
    Developer d;
    e = &d;
    e->salary();
    return 0;
 }
 