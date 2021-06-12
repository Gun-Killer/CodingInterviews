#include <set>
#include <iostream>

#include "common.cpp"

using namespace std;


int main013()
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


    if (p.find(010) != p.end())//表示该数据存在
    {
        cout << "exist" << endl;
    }

    cout << p.count(1000) << endl;

    return 0;
}