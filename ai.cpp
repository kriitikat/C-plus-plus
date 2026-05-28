#include <iostream>
using namespace std;

class Student {
private:
    string name;
    long books[100];   
    int counter=0;
public:
    string getname() {
        cout << "Enter name of student: ";
        cin >> this->name;
        return this->name;
    }
    void setname(string n) {
        this->name = n;
        cout << "The name of the student is: " << this->name << endl;
    }
    void issuebook(long id) {
        this->books[this->counter] = id;
        this->counter++;
    }
    void getissuebook() {
        cout << "Borrowed Book IDs are:" << endl;
 for (int i=0; i<this->counter;i++) {
            cout<<this->books[i] << endl;
        }
    }
};

int main() {
    Student s;
    string name;
    int n;
    name = s.getname();
    s.setname(name);
    cout << "Enter no. of books borrowed: ";
    cin >> n;
    cout << "Enter IDs of books:\n";
    for (int i = 0; i < n; i++) {
        long id;
        cin >> id;
        s.issuebook(id);
    }
    s.getissuebook();
    return 0;
}