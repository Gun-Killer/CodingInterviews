#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;


template<typename T>
void loopOutput(vector<T>& input)
{
    for (typename vector<T>::iterator begin = input.begin(); begin != input.end(); begin++)
    {
        cout << "\t" << *begin;
    }
    cout << endl;

    cout << "********************************" << endl;
}