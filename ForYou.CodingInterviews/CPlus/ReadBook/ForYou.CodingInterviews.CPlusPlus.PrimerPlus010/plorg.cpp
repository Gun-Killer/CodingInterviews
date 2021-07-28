#include "plorg.h"

plorg::plorg(int ci, string name)
    :name(name)
{
    CI = ci;
}

void plorg::show()
{
    cout << name << " ; " << CI << endl;
}

void plorg::setCI(int ci)
{
    CI = ci;
}
