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
int main()
{
    int n;
    std::cout << "n=?";
    std::cin >> n;
    try
    {
        int f = factorial(n);
        std::cout << n << "!=" << f << std::endl;
    }
    catch (const char *message)
    {
        std::cerr << "Error:" << message << std::endl;
    }
}