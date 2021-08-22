#include "MyWinePrivate.h"

Killer::MyWinePrivate::MyWinePrivate(const char* l, int y, const int yr[], const int bot[])
    :string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Killer::MyWinePrivate::MyWinePrivate(const char* l, int y)
    : string(l), PairArray(ArrayInt(y), ArrayInt(y))
{
}

void Killer::MyWinePrivate::GetBottles()
{
    cout << "Enter " << (const string&)*this << " data for " << ((const PairArray&)*this).first.size() << " year(s)" << endl;
}

const string& Killer::MyWinePrivate::Label() const
{
    return (const string&)*this;
}

int Killer::MyWinePrivate::sum() const
{
    return ((const PairArray&)*this).second.sum();
}

const Killer::MyWinePrivate& Killer::MyWinePrivate::operator=(const PairArray& yr_bot)
{
    PairArray::operator=(yr_bot);
    return *this;
}


