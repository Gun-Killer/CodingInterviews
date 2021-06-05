#pragma once
#include <iostream>
#include <vector>

#include "common.cpp"

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    loopOutput<int>(v);

    vector<int> v2(v.begin(), v.end());
    loopOutput<int>(v2);

    vector<int> v3(10, 11);
    loopOutput<int>(v3);

    vector<int> v4(v);
    loopOutput<int>(v4);

    return 0;
}
