#include <iostream>
#include <list>
#include <deque>
#include <map>
#include "MyHashTable.h"
#include <functional>
#include <vector>
#include <algorithm>
#include "MyTestSSE.h"

using namespace Killer;
using std::bind;
using namespace std::placeholders;


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

    auto func = bind<int>(IntHashFunc(), _1);

    std::cout << func(10) << std::endl;

    std::vector<int> vs{ 1,2,3 };

    auto res = std::count_if(vs.begin(), vs.end(), bind(std::less<int>(), _1, 2));



    MyTestSSE see;

    see.testSSE();

    return 0;
}


