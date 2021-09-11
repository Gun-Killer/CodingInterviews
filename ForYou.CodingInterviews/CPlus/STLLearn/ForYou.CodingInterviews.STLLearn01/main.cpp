#include <iostream>
#include <list>
#include <deque>
#include <map>
#include "MyHashTable.h"

using namespace Killer;

class KeyEqual
{
public:
    bool operator()(int num1, int num2)
    {
        return num1 == num2;
    }
};

class IntHashFunc
{
public:
    int operator()(int num1)
    {
        return num1;
    }
};

int main()
{
    std::list<int> list_test;



    std::deque<int> q;

    std::map<int, int> m;

    /*q.size();*/

    MyHashTable<int, int, IntHashFunc, KeyEqual> table;
    table.Add(1, 1);
    return 0;
}


