#pragma once
#include <iostream>
#include <vector>
#include <deque>
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


template<typename T>
void loopOutput(const deque<T>& input)
{
    for (typename deque<T>::const_iterator begin = input.begin(); begin != input.end(); begin++)
    {
        cout << "\t" << *begin;
    }
    cout << endl;

    cout << "********************************" << endl;
}