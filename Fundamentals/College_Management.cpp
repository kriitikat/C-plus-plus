#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person()
    {
        name = "Unknown";
        age = 0;
    }
    Person(string n)
    {
        name = n;
        age = 0;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
    int marks;

public:
    Student(string n, int a, int m) : Person(n, a)
    {
        if(m < 0 || m > 100)
            throw m;

        marks = m;
    }
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person
{
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a)
    {
        subject = s;
    }
    void display()
    {
        cout << "\nTeacher Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Staff : public Person
{
    int salary;
public:
    Staff(string n, int a, int sal) : Person(n, a)
    {
        if(sal < 0)
            throw sal;
        salary = sal;
    }
    void display()
    {
        cout << "\nStaff Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    try
    {
        Student s("Kritika", 19, 90);
        Teacher t("Ritika", 35, "C++");
        Staff st("Saanvi", 40, 30000);
        Person *p;
        p = &s;
        p->display();
        p = &t;
        p->display();
        p = &st;
        p->display();
    }
    catch(int x)
    {
        cout << "\nInvalid value entered!" << endl;
    }
    return 0;
}