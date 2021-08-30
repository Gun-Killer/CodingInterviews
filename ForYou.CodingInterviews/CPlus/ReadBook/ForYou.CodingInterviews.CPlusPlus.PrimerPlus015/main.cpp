#include <iostream>
#include "MyMan15.h"
#include "MyPerson15.h"

using namespace Killer;

int main()
{
    MyPerson15 p1 = MyMan15(12);
    p1.show();

    MyMan15 m1 = MyMan15(13);
    MyPerson15* p2 = &m1;
    p2->show();
    return 0;
}