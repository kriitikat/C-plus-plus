#include "Point.h"
#include<cmath>

void Point::setcoordinate(double x,double y){
    this->x=x;
    this->y=y;
}

    double Point::getXDiff(const Point &anotherPoint)const{
        return abs(anotherPoint.x-this->x)

    }
      double Point::getYDiff(const Point &anotherPoint)const{
        return abs(anotherPoint.y-this->x)
 }
 int length;
 int breadth;
 if (getXDiff>getYDiff)
 {
    length=getXDiff;
    breadth=getYDiff;
 }else{
length=getYDiff;
    breadth=getXDiff;
 }
 