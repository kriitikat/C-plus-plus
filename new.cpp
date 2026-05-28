#include<iostream>
#include<string>

class Student{
    private:
    std::string name;
    int age;
    public:
    void data(std::string n,int a){
        name = n;
        age = a;
    }
    void display(){
        std::cout << "Name:"<< name << std::endl;
        std::cout << "Age:" << age << std::endl;
    }
};
int main()
{
    Student s1;
    s1.data("Kritika",19);
    s1.display();
    Student s2;
    s2.data("hyaaaa",21);
    s2.display();
}