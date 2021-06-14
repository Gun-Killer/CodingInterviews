#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class FindObject
{
public:
    bool operator()(int& input)
    {
        return input > 6;
    }
};


void print(const int& input)
{
    cout << input << endl;
}

class CountIfObject
{
public:
    bool operator()(int& num1, int& num2)
    {

    }
};
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
    cout << endl;

    cout << (find(p.begin(), p.end(), 10) == p.end()) << endl;

    auto find_res = find_if(p.begin(), p.end(), FindObject());
    cout << *find_res << endl;

    cout << count_if(p.begin(), p.end(), FindObject()) << endl;
    return 0;
}