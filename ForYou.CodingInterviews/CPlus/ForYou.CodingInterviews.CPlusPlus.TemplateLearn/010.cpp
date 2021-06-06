#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> p;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        p.push_back(rand() % 41 + 60);
    }
    sort(p.begin(), p.end());

    for (deque<int>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << " " << *begin;
    }
    cout << endl;

    
    p.pop_front();
    p.pop_back();

    for (deque<int>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << " " << *begin;
    }
    return 0;
}