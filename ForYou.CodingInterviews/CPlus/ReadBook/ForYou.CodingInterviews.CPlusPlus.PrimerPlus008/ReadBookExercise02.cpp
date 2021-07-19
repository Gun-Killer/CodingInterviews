#include "ReadBookExercise02.h"

void ReadBookExercise02::test01(string str, int count)
{
    if (count == 0)
    {
        return;
    }

    cout << str << endl;
    test01(str, count--);
}

void ReadBookExercise02::setCandyBar(CandyBar& cb, const char* name, float weight, int heat)
{
    cb.heat = heat;
    cb.name = name;
    cb.weight = weight;
}

void ReadBookExercise02::showCandyBar(const CandyBar& cb)
{
    cout << cb.name
        << cb.weight
        << cb.heat
        << endl;
}

void ReadBookExercise02::test03(string& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}
