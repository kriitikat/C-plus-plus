#include<iostream>
#include<string>
using namespace std;
 class Person{
    public:
    string name;

    Person(string name) : name(name){}

    virtual void display(){
        cout << name << endl;
    }
    virtual ~Person(){}
 };

 class Student : public Person {
    public:
    int reg_no;

    Student(string name, int reg_no) : Person(name) , reg_no(reg_no) {}
        
    void display()override{
        cout<< name <<endl;
        cout<< reg_no <<endl ;
    }
 };

class GradStudent : public Student {
    public:
    string field;

    GradStudent(string name, int reg_no , string field) : Student(name, reg_no)  {
        this->field = field;
    }

    void display()override{
        cout<< name <<endl;
        cout<< reg_no <<endl ;
        cout << field << endl;
        }
 };
 int main(){
    Person *p1 , *p2;
    Student s("Kriitikkkka" , 12808);
    p1 = &s;
p1->display();
GradStudent g("Kirtika" , 11808 , "CE");
p2 = &g;
p2->display();
return 0;
 }