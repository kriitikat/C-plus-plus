

class Point{
private:
double x,y;
public:
void setcoordinate(double x,double y);
double getXDiff(const Point &anotherPoint)const;
double getYDiff(const Point &anotherPoint)const;
};
class Rectangle{
    private:
    Point p1;
    Point p2;
    public:
    void setcoordinates(const Point &, const Point &);
    void dimension(double &length, double &breadth);
}