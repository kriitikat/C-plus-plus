#include<iostream>
class Person{
protected:
 std::string name;
 int age;
public:
 Person()
 { std::cout << "default Person\n"; }
 Person(std::string name,int age)
 :name(name),age(age)
 { std::cout << "param person\n"; }
 void print()const
 { std::cout << "Name: " << name
 << " Age:" << age << " ";
 }
};
class Employee{
protected:
 std::string employer;
 double wage;
public:
 Employee()
 { std::cout<<"default Employee\n"; }
 Employee(std::string employer,double wage)
 : employer(employer), wage(wage)
 { std::cout << "param employee\n"; }
 void print()const
 { std::cout << "Employer:" << employer
 << " Wage:" << wage << " ";
 }
};
class Teacher : public Employee, public Person {
protected:
 int teachergrade;
public:
 Teacher()
 { std::cout << "default Teacher\n"; }
 Teacher(std::string name, int age,
 std::string employer, double wage,
 int teachergrade)
 : Person(name,age), Employee(employer,wage),
 teachergrade(teachergrade)
 { std::cout<<"param teacher\n"; }
};
int main(){
 Teacher t("ram",30,"test",12324,4);

 //call employee version of print()
 t.Employee::print();
 //call Person version of print()
 t.Person::print();

 return 0;
}
