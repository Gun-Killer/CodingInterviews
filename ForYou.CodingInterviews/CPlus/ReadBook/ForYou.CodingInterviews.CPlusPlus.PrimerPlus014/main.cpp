#include <iostream>
using std::cout;
using std::endl;
#include "MyStudentPrivateinheritance.h"
#include "MultiInheritanceD.h"

int main()
{
    MyStudentPrivateinheritance p("123");

    cout << p.getName() << endl;


    Killer::MultiInheritanceD p2(1,2);

    p2.publicMethod();

    return 0;
}