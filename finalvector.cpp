#include <iostream>

class Vector
{
private:
    int x, y, z;

public:
    // Default constructor
    Vector() : x(0), y(0), z(0) {}

    // Parameterized constructor
    Vector(int x, int y, int z)
        : x(x), y(y), z(z) {}

    // Addition operator
    Vector operator+(const Vector &other) const
    {
        return Vector(
            x + other.x,
            y + other.y,
            z + other.z);
    }

    // Subtraction operator
    Vector operator-(const Vector &other) const
    {
        return Vector(
            x - other.x,
            y - other.y,
            z - other.z);
    }

    // Unary minus operator
    Vector operator-() const
    {
        return Vector(-x, -y, -z);
    }

    // Addition assignment operator
    Vector &operator+=(const Vector &other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    // Equality operator
    bool operator==(const Vector &other) const
    {
        return x == other.x &&
               y == other.y &&
               z == other.z;
    }

    // Greater-than operator
    bool operator>(const Vector &other) const
    {
        return x > other.x &&
               y > other.y &&
               z > other.z;
    }

    // Friend functions for I/O
    friend std::ostream &operator<<(std::ostream &out, const Vector &v);
    friend std::istream &operator>>(std::istream &in, Vector &v);
};

// Output operator
std::ostream &operator<<(std::ostream &out, const Vector &v)
{
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}

// Input operator
std::istream &operator>>(std::istream &in, Vector &v)
{
    in >> v.x >> v.y >> v.z;
    return in;
}

int main()
{
    Vector v1(1, 2, 3);
    Vector v2(3, 5, 8);

    // Addition
    Vector v3 = v1 + v2;
    std::cout << "Vector addition of v1 and v2: " << v3 << std::endl;

    // Subtraction
    Vector v4 = v1 - v2;
    std::cout << "Vector subtraction of v1 and v2: " << v4 << std::endl;

    // Input vector
    Vector v5;
    std::cout << "Enter vector elements (x y z): ";
    std::cin >> v5;
    std::cout << "You entered: " << v5 << std::endl;

    // += operator
    v1 += v2;
    std::cout << "After v1 += v2, v1 is: " << v1 << std::endl;

    // Equality comparison
    std::cout << "v1 == v2: " << (v1 == v2) << std::endl;

    // Greater-than comparison
    std::cout << "v1 > v2: " << (v1 > v2) << std::endl;

    // Unary minus
    Vector v6 = -v1;
    std::cout << "Negation of v1: " << v6 << std::endl;

    return 0;
}