#include "CD.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;


Killer::CD::CD(char* s1, char* s2, int n, double x)
{
    strcpy_s(preformers, 49, s1);
    preformers[49] = '\0';

    strcpy_s(label, 19, s2);
    label[19] = '\0';

    selections = n;

    playtime = x;
}

Killer::CD::CD(const CD& d)
{
    strcpy_s(preformers, 50, d.preformers);
    preformers[49] = '\0';

    strcpy_s(label, 20, d.label);
    label[19] = '\0';

    selections = d.selections;

    playtime = d.playtime;
}

Killer::CD::CD()
{
    preformers[0] = '\0';
    label[0] = '\0';

    selections = 0;
    playtime = 0.0;
}

Killer::CD::~CD()
{
}

void Killer::CD::Report() const
{
    cout << "preformers: " << preformers
        << "\tlabel:" << label
        << "\tselections:" << selections
        << "\tplaytime:" << playtime;
}

Killer::CD& Killer::CD::operator = (const Killer::CD& d)
{
    if (this == &d)
    {
        return *this;
    }

    strcpy_s(preformers, 50, d.preformers);
    preformers[49] = '\0';

    strcpy_s(label, 20, d.label);
    label[19] = '\0';

    selections = d.selections;

    playtime = d.playtime;

    return *this;
}
