#include <iostream>

#include "MyMan.h"
#include "MyOtherMan.h"
#include "MyReturnObjectTest.h"


MyReturnObjectTest test0000001();

using namespace Killer;


int main()
{
    MyPerson p1("123", 15);
    MyPerson p2(p1);

    p1.show();
    p2.show();

    MyMan man("456", 18);
    man.setAge(20);
    cout << "---------" << endl;
    p1.setAge(20);
    man.show();
    p1.show();

    cout << "-=====" << endl;
    MyOtherMan p3("789", 56);
    p3.setAge(20);
    p3.show();

    test0000001();

    return 0;
}

MyReturnObjectTest test0000001()
{
    MyReturnObjectTest p;
    return p;
}
