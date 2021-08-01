#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Time
{
    friend Time operator*(double mult, const Time& t);
    friend ostream& operator<<(ostream& os, const Time& t);
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m);

    void show();
    Time operator+(const Time& t) const;
    Time operator*(double mult) const;


};

