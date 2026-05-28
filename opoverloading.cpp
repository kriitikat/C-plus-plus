#include <iostream>

#include "MyTime.h"
MyTime MyTime::operator+(const Mytime &t)
{
    t.seconds += this->seconds;
    t.minutes += t.seconds / 60;
    t.seconds %= 60;
    t.minutes += this->seconds;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
    t.hours += this->hours;
    return t;
}

void MyTime::print()
{
    std::cout << "hours=" << hours << "minutes=" << minutes << "seconds=" << seconds << std::endl;
}

int main()
{
    MyTime t1(10, 5, 40);
    MyTime t2(11, 11, 59);
    MyTime t3 = t1 + t2;
    t3.print();
}