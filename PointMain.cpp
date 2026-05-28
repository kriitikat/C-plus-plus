#include<iostream>
#include "Point.h"
int main() {
    Point p1;
    p1.setcoordinate(10, 5);
    Point p2;
    p2.setcoordinate(5, 10);

    Rectangle r;
    r.setPoints(p1,p2);
    double length,breadth;
    r.getDimensions(length,breadth);
    std::cout<<"Length=" << length << "Breadth=" << breadth << std::endl;
    
    double pe=r.perimeter();
    std::cout<<"Perimeter="<<p<<std::endl;
    return 0;
}
   