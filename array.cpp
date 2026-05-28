#include<iostream>
int main()
{
int arr[10];
int *ptr=arr;
*ptr++=5;
*(ptr+3)=6;
arr[5]=9;
std::cout<<"Array elements";
for(int ele :arr){
    std::cout<<ele<<",";
    }
    std::cout << std::endl;
}