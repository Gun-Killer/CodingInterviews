#include "Person.h"

Person::Person()
{
    lname = "";
    fname[0] = '\0';
}

Person::Person(const string& ln, const char* fn)
{
    lname = ln;
    strcpy_s(fname, LIMIT, fn);
}

void Person::Show()
{
    cout << fname << ", " << lname << endl;
}

void Person::FormalShow() const
{
    cout << fname << ", " << lname << endl;
}
