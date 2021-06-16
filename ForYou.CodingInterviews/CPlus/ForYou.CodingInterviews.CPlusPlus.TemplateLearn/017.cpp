#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main017()
{
    srand(time(NULL));
    vector<int> p;
    for (int i = 0; i < 10; i++)
    {
        p.push_back(rand());
    }

    sort(p.begin(), p.end());

    for (vector<int>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << "\t" << *begin;
    }
    cout << endl;

    random_shuffle(p.begin(), p.end());
    for (vector<int>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << "\t" << *begin;
    }

    return 0;
}