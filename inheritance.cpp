#include <iostream>
class Base
{
protected:
    int m_id;

public:
    Base(int id) : m_id(id)
    {
        std::cout << "Parametrized base\n";
    }
    Base() : m_id(0)
    {
        std::cout << "Default Base\n";
    }
    int getId() const
    {
        return m_id;
    }
};
class Derived : public Base
{
protected:
    double m_cost;

public:
    Derived() : m_cost(0)
    {
        std::cout << "default Derived\n";
    }
    Derived(double cost) : m_cost(cost)
    {
        std::cout << "Parametrized Derived\n";
    }
    Derived(int id, double cost) : Base(id), m_cost(cost)
    {
        std::cout << "2 Parameterized Derived\n";
    }
    double getCost() const
    {
        return m_cost;
    }
};
class SecondDerived : public Derived
{
protected:
    int m_distance;

public:
    SecondDerived()
    {
        std::cout << "Second Derived\n";
    }
};
int main()
{
    std::cout << "Constructing Base\n";
    Base cBase;
    std::cout << "Constructing Derived\n";
    Derived cDerived;
    std::cout << "Constructing Derived(2)\n";
    Derived cDerived2(2);
    std::cout << "Constructing Derived(10,2)\n";
    Derived cDerived3(10, 2);
    std::cout << "Constructing SecondDerived\n";
    SecondDerived sd;
    std::cout << sd.getId() << std::endl;
    return 0;
}