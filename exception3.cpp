#include <iostream>

int factorial(int n)
{
    if (n < 0)
    {
        throw "n must be a positive number i.e greator than 0";
    }
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int sum(int n)
{
    if (n < 1)
    {
        throw "101";
    }
    int Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        Sum += i;
    }
    return Sum;
}

int main()
{
    int n;
    std::cout << "n=?";
    std::cin >> n;
    try
    {
        int f = factorial(n);
        std::cout << n << "!=" << f << std::endl;
        int s = sum(n);
        std::cout << "Sum of natural numbers upto" << n << "=" << s << std::endl;
    }
    catch (const char *message)
    {
        std::cerr << "Error:" << message << std::endl;
    }
    catch (const int &errorcode)
    {
        std::cerr << "Error" << errorcode << "occured!" << std::endl;
    }
}
