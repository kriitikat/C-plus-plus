#include <iostream>

template <class T>
class Pair
{
private:
    T first;
    T second;

public:
    Pair() {}
    Pair(T f, T s) : first(f), second(s) {}

    T max()
    {
        return (first < second ? second : first);
    }
};
int main()
{
    Pair<int> p1{5, 6};
    std::cout << p1.max() << "is larger\n";
    Pair<double> p2{1.2, 3.4};
    std::cout << p2.max() << "is larger\n";
    return 0;
}