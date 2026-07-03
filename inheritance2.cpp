#include <iostream>
class Point
{
protected:
    double x, y;

public:
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    void print()
    {
        std::cout << "{" << x << "," << y << ")";
    }
};
class Point3D : public Point
{
protected:
    double z;

public:
    Point3D(double x = 0, double y = 0, double z = 0) : Point(x, y), z(z) {}
    void print()
    {
        std::cout << "(" << x << "," << y << "," << z = ")";
    }
};
int main()
{
    Point p2_1(10, 20);
    p2_1.print();
    Point 3D p3_1(10, 20, 30);
    p3_1.print();
    return 0;
}