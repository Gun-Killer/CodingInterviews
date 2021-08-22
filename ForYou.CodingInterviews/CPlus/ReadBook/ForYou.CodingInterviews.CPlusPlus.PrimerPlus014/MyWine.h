#pragma once
#include <valarray>
#include <utility>
#include <string>
#include <iostream>

using namespace std;

typedef valarray<int> ArrayInt;
typedef pair<ArrayInt, ArrayInt> PairArray;

namespace Killer
{
    class MyWine
    {
    private:
        string wine_name;
        PairArray wine_years;
    public:
        MyWine(const char* l, int y, const int yr[], const int bot[]);
        MyWine(const char* l, int y);

        void GetBottles();

        const string& Label() const;

        int sum() const;
    };
}

