#include <iostream>
template <class T>
class Pair
{
public:
    T first;
    T second;
    Pair() {}
    Pair(T f, T s) : first(f), second(s) {}
};
template <class T>
T max(Pair<T> p)
{
    return (p.first < p.second ? p.second : p.first);
}
int main()
{

    Pair<int> p1{5, 6};
    std::cout << max(p1) << " is larger\n";
    Pair<double> p2{1.2, 3.4};
    std::cout << max(p2) << " is larger\n";
    return 0;
};