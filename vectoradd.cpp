#include <iostream>
class Vector
{
private:
    int x, y, z;

public:
    Vector()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vector(int x, int y, int z) : x(x), y(y), z(z)
    {
    }

    Vector add(const Vector &other)
    {
        return Vector(
            x + other.x,
            y + other.y,
            z + other.z);
    }
    void print()
    {
        std::cout << "Elements of vector:" << std::endl;
        std::cout << "x = " << x
                  << ", y = " << y
                  << ", z = " << z << std::endl;
    }
};
int main()
{
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3 = v1.add(v2);
    v3.print();
    return 0;
}