#include "Classic.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

Killer::Classic::Classic(char* arg_name, char* s1, char* s2, int n, double x)
    :Killer::CD(s1, s2, n, x)
{
    auto len = strlen(arg_name);
    name = new char[len + 1];
    strcpy_s(name, len, s1);
    name[len] = '\0';
}

Killer::Classic::Classic(const Classic& d)
    :Killer::CD(d)
{
    auto len = strlen(d.name);
    name = new char[len + 1];
    strcpy_s(name, len, d.name);
    name[len] = '\0';
}

Killer::Classic::Classic()
    :Killer::CD()
{
    name = new char[1];
    name[0] = '\0';
}

void Killer::Classic::Report() const
{
    Killer::CD::Report();
    cout << "name list:" << name << endl;
}


Killer::Classic::~Classic()
{
    delete[] name;
}

Killer::Classic& Killer::Classic::operator=(const Classic& c)
{
    if (this == &c)
    {
        return *this;
    }

    Killer::Classic::operator=(c);

    auto len = strlen(c.name);
    name = new char[len + 1];
    strcpy_s(name, len, c.name);
    name[len] = '\0';

    return *this;
}
