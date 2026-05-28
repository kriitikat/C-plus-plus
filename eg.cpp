#include<iostream>
int main()
{
    int a=7;
    int *ptr=&a;
    std::cout<<ptr<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<&a<<std::endl;
    std::cout<<&ptr<<std::endl;

}