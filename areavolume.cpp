#include<iostream>
float calculate(float l,float b)
{
    return l*b;
}
int calculate(float l,float b)
{
    return l*b;
}
int main()
{
   float l=2,b=5.1,h=3;
    float area=calculate(l,b);
float volume=calculate(l,b,h);
std::cout << "Area is " << area << std::endl;
std::cout << "Volume is " << volume << std::endl;
}