#include "Time.h"

Time::Time()
{
    hours = 0;
    minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::show()
{
    cout << "hours is: " << hours
        << "minutes is: " << minutes
        << endl;
}

Time Time::operator+(const Time& t) const
{
    return Time(t.hours + hours, t.minutes + minutes);
}

Time Time::operator*(double mult) const
{
    long temp = (hours * 60 + minutes) * mult;
    return Time(temp / 60, temp % 60);
}

Time operator*(double mult, const Time& t)
{
    return t * mult;
}

ostream& operator<<(ostream& os, const Time& t)
{
    cout << "hours is: " << t.hours
        << "minutes is: " << t.minutes
        << endl;
    return os;
}
