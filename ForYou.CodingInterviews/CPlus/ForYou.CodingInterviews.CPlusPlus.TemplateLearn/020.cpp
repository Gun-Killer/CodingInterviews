#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void MyOuptput(int& input)
{
    std::cout << "\t" << input;
}

int main()
{
    vector<int> p1;
    for (int i = 0; i < 10; i++)
    {
        p1.push_back(i);
    }

    vector<int> p2;
    for (int i = 5; i < 9; i++)
    {
        p2.push_back(i);
    }
    p2.push_back(110);
    p2.push_back(111);
    vector<int> p3;
    p3.resize(min(p1.size(), p2.size()));

    auto end_itr = set_intersection(p1.begin(), p1.end(), p2.begin(), p2.end(), p3.begin());
     
    for_each(p3.begin(), end_itr, MyOuptput);
     
    return 0;
}