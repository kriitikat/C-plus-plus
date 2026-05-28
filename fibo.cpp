#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    int i=1;
   cout <<"Enter number to find fibonacci:";
   cin >> n;
    do{
       cout<< a;
       c=a+b;
       a=b;
       b=c;
    }while (i<n);
    return 0;
}
