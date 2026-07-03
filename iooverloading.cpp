#include <iostream>
class Time
{
private:
    short hours, minutes, seconds;

public:
    Time(short hours = 0, short minutes = 0, short seconds = 0)
        : hours(hours), minutes(minutes), seconds(seconds) {}

    friend Time operator+(const Time &, const Time &);
    friend std::ostream &operator<<(std::ostream &, const Time &);
    friend std::istream &operator>>(std::istream &, Time &);
};
Time operator+(const Time &d1, const Time &d2)
{
    short seconds = d1.seconds + d2.seconds;
    short minutes = seconds / 60;
    seconds %= 60;
    minutes += d1.minutes + d2.minutes;
    short hours = minutes / 60;
    minutes %= 60;

    hours += d1.hours + d2.hours;

    return Time(hours, minutes, seconds);
}

std::ostream &operator<<(std::ostream &outputStream, const Time &t)
{
    return outputStream << t.hours << "::"
                        << t.minutes << "::"
                        << t.seconds;
}

std::istream &operator>>(std::istream &inputStream, Time &t)
{
    return inputStream >> t.hours >> t.minutes >> t.seconds;
}

int main()
{
    Time t1(10, 5, 7);
    Time t2(5, 21, 59);
    Time t = t1 + t2;
    std::cout << "Time: " << t << std::endl;
    Time t3;
    std::cout << "Enter time (hh::mm::ss): ";
    std::cin >> t3;
    std::cout << "You entered: " << t3 << std::endl;
    return 0;
}