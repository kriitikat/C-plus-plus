#include<iostream>
int main()
{
    int i;
    int n;
    int fact=1;
    std::cout <<"Enter number to find factorial:";
    std::cin >> n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    std::cout << "The factorial is\t"<< fact;

    return 0;
}
