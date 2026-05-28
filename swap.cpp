#include<iostream>
void swap(int &a,int &b);

int main()
{
    int x,y;
    std::cout<<"Enter two numbers:";
    std::cin>>x>>y;
    std::cout<<"Before swapping the value of x and y are:"<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    swap(x,y);
    std::cout<<"After swapping the value of x and y are:"<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}