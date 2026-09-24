#include<iostream>
using namespace std;
class Book{
    protected:
    string name,author;
    public:
    Book(string name, string author) : name(name) , author(author){}
    
    virtual void display(){
        cout<< "Name :" << name << endl;
        cout << "Author: " << author << endl;
    }
};

class Referencebook : public Book{
    private:
    string genre;
    int lateday;
    int fine;
    public:
    Referencebook(string n, string a, string g, int l) : Book(n,a){
        genre = g;
        lateday = l;
    
        if(lateday>1){
        fine=lateday*5;
    }
    else{
        fine = 0;
    }
}
    void display()override{
        cout<< "Name :" << name << endl;
        cout << "Author: " << author << endl;
        cout<< "Genre :" << genre << endl;
        cout << "Lateday: " << lateday << endl;
        cout << "Fine:" << fine << endl;

    }
};
class Issuablebook : public Book{
    private:
    string genre;
    int lateday;
    int fine;
    public:
Issuablebook(string n, string a, string g, int l) : Book(n,a){
        genre = g;
        lateday = l;
    if(lateday>1){
        fine=lateday*1;
    }
    else{
        fine = 0;
    }
}
    void display()override{
        cout<< "Name :" << name << endl;
        cout << "Author: " << author << endl;
        cout<< "Genre :" << genre << endl;
        cout << "Lateday: " << lateday << endl;
        cout << "Fine:" << fine << endl;

    }
};
int main(){
    Book *b;
    Referencebook ref("Computer" , "Kriitka" , "Technology" , 5);
    b = &ref;
    b->display();

    Issuablebook issue("Physics" , "Aakitirk" , "Science" , 10);
    b = &issue;
    b->display();
    return 0;
}