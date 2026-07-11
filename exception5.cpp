#include <iostream>
#include <exception>

void foo() noexcept(false)
{
    throw 100;
}
void bar() noexcept(false)
{
    try
    {
        foo();
    }
    catch (int i)
    {
        throw;
    }
}
int main()
{
    try
    {
        bar();
    }
    catch (int i)
    {
        std::cout << "Caught" << i << "\n";
    }
}
