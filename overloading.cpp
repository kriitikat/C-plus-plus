#include<iostream>
int add(int a,int b) { 
    return a+b;
}
int add(int a,int b,int c) { 
    return a+b+c;
}
float add(int a,int b) { 
    return a+b;
}
int main()
{
    int x,y,z;
    float a,b;
    int sum;
    sum=(x=4,y=3,add(x,y));
    std::cout << sum << std::endl;
    sum=(x=4,y=3,z=9,add(x,y,z));
    std::cout << sum << std::endl;
    sum=(a=10.1,b=12.0,add(a,b));
     std::cout << sum << std::endl;

}