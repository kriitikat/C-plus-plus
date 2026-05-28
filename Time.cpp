#include <iostream>

#include "Time.h"
Time Time::operator++()
{
    ++this->seconds;
    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;
    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    return *this;
}

Time Time::operator++(int)
{
    Time temp(hours, minutes, seconds);
    this->seconds++;
    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;
    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    return temp;
}

Time Time::operator+(const Time &t)
{
    Time temp;

    temp.seconds = this->seconds + t.seconds;
    temp.minutes = this->minutes + t.minutes + temp.seconds / 60;
    temp.seconds %= 60;

    temp.hours = this->hours + t.hours + temp.minutes / 60;
    temp.minutes %= 60;

    return temp;
}

void Time::print()
{
    std::cout << "hours=" << hours << "minutes=" << minutes << "seconds=" << seconds << std::endl;
}

int main()
{
    Time t1(10, 5, 40);
    Time t2(11, 11, 59);
    Time t3 = ++t1;
    t3.print();
    Time t4 = t2++;
    t4.print();
    Time t5 = t1 + t2;
    t5.print();
}