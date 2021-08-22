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
    class MyWinePrivate :private string, private PairArray
    {
    public:
        MyWinePrivate(const char* l, int y, const int yr[], const int bot[]);
        MyWinePrivate(const char* l, int y);

        void GetBottles();

        const string& Label() const;

        int sum() const;

        const MyWinePrivate& operator=(const PairArray& yr_bot);
    };
}
