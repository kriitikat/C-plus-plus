#pragma once
#include <iostream>
class MyTime
{
private:
    short hours, minutes, seconds;

public:
    MyTime(short hours = 0, short minutes = 0, short seconds = 0) : hours(hours), minutes(minutes), seconds(seconds) {}

    MyTime operator+(const Time &t);
    void print();
};