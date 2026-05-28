#include<iostream>
int main()
{
    std::string str;
    std::cout<< "Enter a sentence: ";
    getline(std::cin,str);
    std::cout<< "The entered sentence is: "<< str << std::endl;
    return 0;
}