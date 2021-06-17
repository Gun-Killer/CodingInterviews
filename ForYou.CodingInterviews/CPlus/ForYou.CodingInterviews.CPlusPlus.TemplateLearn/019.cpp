#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
    vector<int> v;
    for (int i = 0; i < 101; i++)
    {
        v.push_back(i);
    }

    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}