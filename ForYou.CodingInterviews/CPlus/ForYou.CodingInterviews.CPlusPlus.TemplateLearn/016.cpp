#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> p;

    for (int i = 0; i < 10; i++)
    {
        p.push_back(i);
    }

    sort(p.begin(), p.end(), greater<int>());

    for (int i = 0; i < p.size(); i++)
    {
        cout << "\t" << p[i];
    }

    return 0;
}