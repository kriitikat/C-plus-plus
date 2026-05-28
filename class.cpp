#include<iostream>
#include<cmath>
class Point{
private:
double x,y;
public:
void setcoordinate(double x,double y);
double distanceFrom(const Point &anotherPoint)const;
};

void Point::setcoordinate(double x,double y){
    this->x=x;
    this->y=y;
}
 double Point::distanceFrom(const Point &anotherPoint)const{
    double sq_xdiff=pow(anotherPoint.x- this->x,2);
     double sq_ydiff=pow(anotherPoint.y- this->y,2);
 return sqrt(sq_xdiff + sq_ydiff);
 }

int main() {
    Point p1;
    p1.setcoordinate(10, 5);
    Point p2;
    p2.setcoordinate(5, 10);

    std::cout << "Distance: " << p1.distanceFrom(p2) << std::endl;

    return 0;
}
    
 

.