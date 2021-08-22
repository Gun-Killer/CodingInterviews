#include <iostream>
using std::cout;
using std::endl;
#include "MyStudentPrivateinheritance.h"
#include "MultiInheritanceD.h"
#include "MyWinePrivate.h"

int main()
{
   /* MyStudentPrivateinheritance p("123");

    cout << p.getName() << endl;


    Killer::MultiInheritanceD p2(1,2);

    p2.publicMethod();*/

    Killer::MyWinePrivate p1("123", 10);
    cout << p1.Label() << endl;
    cout << p1.sum() << endl;
    p1.GetBottles();

    return 0;
}