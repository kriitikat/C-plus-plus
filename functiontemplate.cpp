#include <iostream>
#include <string>

template <typename T>
bool greater(T a, T b)
{
    return a > b;
}

int main()
{
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    if (greater(a, b))
        std::cout << a << " is greater than " << b << ".\n";
    else
        std::cout << a << " is not greater than " << b << ".\n";

    if (greater<int>(a, b))
        std::cout << a << " is greater than " << b << ".\n";
    else
        std::cout << a << " is not greater than " << b << ".\n";

    if (greater<std::string>("a", "b"))
        std::cout << "\"a\" is greater than \"b\".\n";
    else
        std::cout << "\"a\" is not greater than \"b\".\n";

    return 0;
}