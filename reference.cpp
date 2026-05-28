#include<iostream>
using namespace std;
void calc(int &a,int &b,int &sum,int &product)
{
    sum=a+b;
    product=a*b;
}
int main(){
    int x,y;
    int s,p;
    cout<<"Enter two numbers:";
  cin>> x>> y;
    calc(x,y,s,p);
  cout<<"Sum is:"<< s << std::endl;
  cout<<"Product is:"<< p << std::endl;
    return 0;
}