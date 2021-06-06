#include <deque>
#include <iostream>

#include "common.cpp"

using namespace std;

int main009()
{
    deque<int> p;
     
    for (int i = 0; i < 10; i++)
    {
        p.push_back(i);
    }

    loopOutput<int>(p);

    cout << p.size() << endl;

    p.resize(8, 1);
    loopOutput<int>(p);
    
    cout << p.size() << endl;

    return 0;
}