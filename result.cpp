#include<iostream>
void add(const int &a,const int &b,int &result){
    result=a+b;
}
int main(){
    int a=5,b=6;
    int r;

    add(a,b,r);
    std::cout<<"The result is:";
    std::cout<<r<<std::endl;
}