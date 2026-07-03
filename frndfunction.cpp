#include <iostream>
using namespace std;
class Mytime
{
private:
    short hours, minutes, seconds;

public:
    Mytime(short hours = 0, short minutes = 0, short seconds = 0) : hours(hours), minutes(minutes), seconds(seconds) {}

    // default constructor
    Mytime operator++();
    Mytime operator++(int);
    // Mytime operator+(Mytime t2);
    friend Mytime operator+(const Mytime &, const Mytime &);

    void print();
};

Mytime Mytime::operator++()
{
    ++this->seconds;

    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;

    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    return *this;
}
Mytime Mytime ::operator++(int)
{
    Mytime temp(hours, minutes, seconds);
    this->seconds++;
    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;

    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    return temp;
}
/*Mytime Mytime::operator+(Mytime t2)
{
    t2.seconds += this->seconds;
    t2.minutes += t2.seconds / 60;
    t2.seconds %= 60;
    t2.minutes += this->minutes;
    t2.hours += t2.minutes / 60;
    t2.minutes %= 60;
    t2.hours += this->hours;
    return t2;
}*/
/*Mytime operator+(const Mytime &d1, const Mytime &d2)
{
    Mytime d = d1;
    d.seconds += d2.seconds;
    d.minutes += d.seconds / 60;
    d.seconds %= 60;
    d.minutes += d2.minutes;
    d.hours += d.minutes / 60;
    d.minutes %= 60;
    d.hours += d2.hours;
    return d;
}*/
Mytime operator+(const Mytime &d1, const Mytime &d2)
{
    short seconds = d1.seconds + d2.seconds;
    short minutes = seconds / 60;
    seconds = seconds % 60;

    minutes += d1.minutes + d2.minutes;
    short hours = minutes / 60;
    minutes %= 60;

    hours += d1.hours + d2.hours;
    return Mytime(hours, minutes, seconds);
}
void Mytime::print()
{
    // cout << "Time:-" << hours << ":" << minutes << ":" << seconds << endl;
    cout << "added time" << hours << ":" << minutes << ":" << seconds << endl;
}
int main()
{
    Mytime t1(10, 5, 2);
    Mytime t2(11, 18, 5);
    Mytime t3 = ++t1;
    // t3.print();
    Mytime t4 = t2++;
    // t4.print();
    Mytime t5 = t1 + t2; // includes the changes of post and pre increment
    t5.print();
}