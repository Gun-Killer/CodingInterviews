#include "Learn00004.h"
#include <iostream>
using namespace std;

static int gloableAverage(int num1, int num2)
{
    return (num1 + num2) / 2;
}


extern int x;

namespace
{
    int y = -4;
}
void another()
{
    cout << "another(): " << x << ", " << y << endl;
}