#include <set>
#include <iostream>

#include "common.cpp"

using namespace std;


int main()
{

    set<int> p;

    p.insert(1);
    p.insert(1);
    p.insert(4);
    p.insert(5);
    p.insert(2);
    p.insert(3);

    for (set<int>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << *begin << endl;
    }


    set<int> p1(p);

    set<int> p2 = p;

    return 0;
}