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
        cin >> name;
        return name;
    }
    void setname(string n) {
        name = n;
        cout << "The name of the student is: " << name << endl;
    }
    void issuebook(long id) {
        books[counter] = id;
        counter++;
    }
    void getissuebook() {
        cout << "Borrowed Book IDs are:" << endl;
 for (int i=0; i<counter;i++) {
            cout<<books[i] << endl;
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