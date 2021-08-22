#include "MyWine.h"

Killer::MyWine::MyWine(const char* l, int y, const int yr[], const int bot[])
{
    wine_name = string(l);
    wine_years = PairArray(ArrayInt(yr, y), ArrayInt(bot, y));
}

Killer::MyWine::MyWine(const char* l, int y)
{
    wine_name = string(l);
    wine_years = PairArray(ArrayInt(y), ArrayInt(y));
}

void Killer::MyWine::GetBottles()
{
    cout << "Enter " << wine_name << " data for " << wine_years.first.size() << " year(s)" << endl;
}

const string& Killer::MyWine::Label() const
{
    return wine_name;
}

int Killer::MyWine::sum() const
{
    return wine_years.second.sum();
}
