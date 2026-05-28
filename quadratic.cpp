#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter coefficients a,b and c"<<endl;
    cin>>a>>b>>c;
    float dis=b*b-4*a*c;
    if(dis>=0)
    cout<<"Real roots";
    else
    cout<<"Imaginary roots";
       return 0;
}