#include <list>
#include <iostream>
#include "common.cpp"

using namespace std;

int main011()
{

    list<int> p;
    for (int i = 0; i < 20; i++)
    {
        p.push_back(i);
    }

    loopOutput(p);

    list<int> p1(p);
    loopOutput(p1);

    list<int> p2(p.begin(), p.end());
    loopOutput(p2);

    list<int> p4(5, 11);
    loopOutput(p4);

    list<int> p5 = p4;
    loopOutput(p5);

    list<int> p6;
    p6.assign(p4.begin(), p4.end());
    loopOutput(p6);

    list<int> p7;
    p7.assign(5, 12);
    loopOutput(p7);

    p.swap(p7);

    loopOutput(p);
    loopOutput(p7);

    return 0;
}