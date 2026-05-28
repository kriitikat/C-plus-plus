#pragma once
#include <iostream>
class Time
{
private:
    short hours, minutes, seconds;

public:
    Time(short hours = 0, short minutes = 0, short seconds = 0) : hours(hours), minutes(minutes), seconds(seconds) {}

    Time operator++();
    Time operator++(int);
    void print();
    Time operator+(const Time &);
};