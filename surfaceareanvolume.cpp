#include<iostream>
#define PI 3.145;
namespace n1{
float calculate(float a)
{
    return 6*a*a;
}
float calculate(float r,float h)
{
    return (2*PI*r*h)+(2*3.145*r*r) ;
}

namespace n2{
float calculate(float a)
{
    return a*a*a;
}
float calculate(float r,float h)
{
    return (PI*r*r*h) ;
}

}
}

int main()
{
   float a=2;
   float r=2,h=5;
    float area=n1::calculate(a);
     area=n1::calculate(r,h);
    
float volume=n1::n2::calculate(a);
 volume=n1::n2::calculate(r,h);
std::cout <<"area =" << n1::calculate(a) << std::endl;
std::cout <<"area =" << n1::calculate(r,h) << std::endl;
std::cout << "Volume is= " << n1::n2::calculate(a)<< std::endl;
std::cout << "Volume is= " << n1::n2::calculate(r,h)<< std::endl;
}