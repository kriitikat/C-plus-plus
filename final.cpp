#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        if (r <= 0)
            throw "Roll Number must be positive non zero integer";
        roll = r;
        name = n;
    }
    int compare(Student s)
    {
        if (roll < s.roll)
            return -1;
        else
            return 1;
    }
    void display()
    {
        cout << "Roll Number : " << roll << endl;
        cout << "Name : " << name << endl;
        cout << endl;
    }
};
int main()
{
    int r1, r2, r3;
    string n1, n2, n3;
    try
    {
        cout << "Enter Roll Number and Name of Student 1: ";
        cin >> r1 >> n1;
        cout << "Enter Roll Number and Name of Student 2: ";
        cin >> r2 >> n2;
        cout << "Enter Roll Number and Name of Student 3: ";
        cin >> r3 >> n3;
        Student s1(r1, n1);
        Student s2(r2, n2);
        Student s3(r3, n3);
        if (s1.compare(s2) == 1)
        {
            Student temp = s1;
            s1 = s2;
            s2 = temp;
        }
        if (s2.compare(s3) == 1)
        {
            Student temp = s2;
            s2 = s3;
            s3 = temp;
        }
        if (s1.compare(s2) == 1)
        {
            Student temp = s1;
            s1 = s2;
            s2 = temp;
        }
        cout << "Students Sorted by Roll Number";
        s1.display();
        s2.display();
        s3.display();
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}