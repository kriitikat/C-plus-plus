#include <iostream>
class Vector
{
private:
    int x, y, z;

public:
    Vector()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    Vector(int x, int y, int z) : x(x), y(y), z(z)
    {
    }
    ~Vector() {}

    Vector operator*(const Vector &other)
    {
        return Vector(
            this->x * other.x,
            this->y * other.y,
            this->z * other.z);
    }
    Vector operator-()
    {
        return Vector(-this->x, -this->y, -this->z);
    }
    void print()
    {
        std::cout << " Element of v3 =" << std ::endl;
        std::cout << "x =" << x << ", y =" << y << ", z=" << z << std::endl;
    }
};
int main()
{
    Vector v1(1, 2, 3);
    Vector v2(3, 5, 8);
    Vector v3 = v1 * v2;
    v3.print();
    Vector v4 = -v1;
    v4.print();
    return 0;
}