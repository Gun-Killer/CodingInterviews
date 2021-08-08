#include "nifty.h"
#include <cstring>
ostream& operator<<(ostream& os, const nifty& n)
{
    return  os << n.personality;
}

nifty::nifty()
{
    personality = new char[1];
    personality[0] = '\0';
    talents = 0;
}

nifty::nifty(const char* s)
{
    auto len = strlen(s);
    personality = new char[len + 1];
    strcpy_s(personality, len, s);
    personality[len] = '\0';
    talents = len;
}

nifty::~nifty()
{
    delete[] personality;
    personality = nullptr;
}
