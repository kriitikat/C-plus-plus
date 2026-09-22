#include<iostream>
class Point{
    public:
    int x,y;
    Point(int a=0 , int b = 0){
x=a;
y=b;
    }
};
class Polygon{
    protected:
    int numofsides;
    Point centroid;
    public:
    Polygon(int sides, int x, int y){
        numofsides = sides;
        centroid = Point(x,y);
    }
    void print(){
        std::cout << "Number of sides:" << numofsides  << std::endl;
        std::cout << "Centroid: (" << centroid.x <<"," << centroid.y << ")" << std::endl;
    }
    void move(int x , int y){
        centroid.x =x;
        centroid.y = y;
    }
};

int main(){
    Polygon p(4,10,20);
    p.print();
    p.move(100,450);
    p.print();
    return 0;
}