#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string employeeName;
    int employeeID;

public:
    Employee(string name = "", int id = 0) {
        employeeName = name;
        employeeID = id;
    }

    void updateEmployee(string name, int id) {
        employeeName = name;
        employeeID = id;
    }

    void displayEmployee() {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Developer : virtual public Employee {
protected:
    int programmingHours;

public:
    Developer(int hours = 0) {
        programmingHours = hours;
    }

    void updateDeveloper(int hours) {
        programmingHours = hours;
    }

    void displayDeveloper() {
        cout << "Programming Hours: " << programmingHours << endl;
    }
};

class Manager : virtual public Employee {
protected:
    int teamSize;

public:
    Manager(int size = 0) {
        teamSize = size;
    }

    void updateManager(int size) {
        teamSize = size;
    }

    void displayManager() {
        cout << "Team Size: " << teamSize << endl;
    }
};

class ProjectLeader : public Developer, public Manager {
public:
    ProjectLeader(string name, int id, int hours, int size)
        : Employee(name, id), Developer(hours), Manager(size) {
    }

    void update(string name, int id, int hours, int size) {
        employeeName = name;
        employeeID = id;
        programmingHours = hours;
        teamSize = size;
    }

    void display() {
        displayEmployee();
        displayDeveloper();
        displayManager();
    }
};

int main() {
    ProjectLeader p("Kritika", 101, 40, 8);

    cout << "Project Leader Details:" << endl;
    p.display();

    cout << "\nAfter Update:" << endl;
    p.update("Kritika", 102, 45, 10);
    p.display();

    return 0;
}