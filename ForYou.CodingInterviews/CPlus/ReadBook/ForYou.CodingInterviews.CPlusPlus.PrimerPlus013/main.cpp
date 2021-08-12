#include <iostream>

using std::cout;
using std::endl;

#include "MyMan.h"

using namespace Killer;

int main()
{
    MyPerson p1("123", 15);
    MyPerson p2(p1);

    p1.show();
    p2.show();

    

    return 0;
}