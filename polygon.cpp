#include<iostream>
class Polygon{
    public:
    virtul double area(){
        return 0;
    }
};
class Triangle:public Polygon{
    protected:
    double base,height;
    public:
    Triangle (double base=0,double height=0):base(base),height(height){}
    virtual double area(){
        return height*base/2;
    }
};
int main(){
    Polygon *p;
    
}