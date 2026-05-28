#include<iostream>
int main()
{
    int n1;
    int n2;
    int sum,product;
    std::cout <<"Enter two numbers:\n";
    std::cin >> n1>> n2;
    sum=n1+n2;
    product=n1*n2;
    std::cout<< "The sum is\t" << sum << std::endl;

    std::cout<< "The product is\t" <<product << std::endl;
    
   
    return 0;
}