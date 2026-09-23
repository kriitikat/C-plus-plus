#include <iostream>
class Polygon {
public:
 virtual double area() { 
    return 0;
 }
};

class Triangle : public Polygon {
protected:
 double base, height;
public:
 Triangle(double base = 0, double height = 0)
 : base(base), height(height) {}
 virtual double area() {
    return height * base / 2;
 }
};
int main()
{
 Polygon *p;
 Triangle t(20, 11.5);
 std::cout << t.area() << "\n"; 
 p = &t;
 std::cout << p->area() <<"\n";
 return 0;
}
