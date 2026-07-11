#include <iostream>

class Myexception : public std::exception
{
private:
    std::string m_error;

public:
    Myexception(std::string error) : m_error{error} {}
    const char *what() const noexcept
    {
        return m_error.c_str();
    }
};

int main()
{
    try
    {
        int i;
        std::cout << "Enter a number:";
        std::cin >> i;
        if (i < 0)
        {
            throw Myexception("Error message goes here");
        }
        else
        {
            throw std::runtime_error("Bad Things happened");
        }
    }

    catch (const Myexception &exception)
    {
        std::cerr << "MyException:" << exception.what() << std::endl;
    }

    catch (const std::exception &exception)
    {
        std::cerr << "Standard exception:" << exception.what() << std::endl;
    }
    return 0;
}
