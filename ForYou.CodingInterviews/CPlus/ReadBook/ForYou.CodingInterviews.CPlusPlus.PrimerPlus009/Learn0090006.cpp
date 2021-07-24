#include "Learn0090006.h"
#include <cstring>
void setGolf(golf& g, const char* name, int hc)
{
    strcpy_s(g.fullName, name);
    g.handicap = hc;
}
