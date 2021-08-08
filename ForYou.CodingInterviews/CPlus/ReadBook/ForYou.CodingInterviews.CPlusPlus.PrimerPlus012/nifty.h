#pragma once
#include <iostream>
using std::ostream;

class nifty
{
private:
    char* personality;
    int talents;

public:
    nifty();
    nifty(const char* s);
    ~nifty();
    friend ostream& operator<<(ostream& os, const nifty& n);
};

