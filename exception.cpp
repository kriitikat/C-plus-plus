#include <iostream>
int main()
{
    int num, index;
    std::cout << "Enter number to search" << std::endl;
    std::cin >> num;
    int a[5] = {5, 10, 15, 20, 25};
    int check = -1;
    int i;
    try
    {
        for (i = 0; i < 5; i++)
        {
            if (a[i] == num)
            {
                check = i;
            }
        }
        if (check == -1)
        {
            throw "No such number exist";
        }
        std::cout << "Number found at array SUCCESSFULYY" << std::endl;
    }

    catch (const char *msg)
    {
        std::cerr << "ERROR:" << msg << std::endl;
    }

    std::cout << "Enter number to return its value at that index" << std::endl;
    std::cin >> index;
    try
    {
        if (index > 5 || index < 0)
        {
            throw "Array Index Out of scope";
        }
        std::cout << "Value at particular index is" << a[index] << std::endl;
    }
    catch (const char *msg)
    {
        std::cerr << "ERROR:" << msg << std::endl;
    }
}
