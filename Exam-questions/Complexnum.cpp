#include<iostream>
class Complex{
    private:
    float real , img;
    public:
    Complex(){}

    Complex(float real , float img) : real(real) , img(img) {}

    Complex operator+(const Complex &c){
        Complex temp;
        temp.real =this->real + c.real;
        temp.img = this->img + c.img ;
        return temp;
    }
    void display(){
        std:: cout << real <<" " << "+" << " " << "i" << " " << img ;
    }
};
int main(){
    Complex c1(2.5 , 5.5);
    Complex c2(3.1 , 4.4);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}