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

void ReadBookExercise02::test04_set(stringy& beany, char* testing)
{
    auto len = strlen(testing);
    beany.str = new char[len];
    strcpy_s(beany.str, len, testing);
    beany.ct = len;
}

void ReadBookExercise02::test04_show(stringy& beany, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << beany.str << endl;
    }
}

void ReadBookExercise02::test04_show(char* testing, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << testing << endl;
    }
}
