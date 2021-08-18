#include <iostream>
using std::cout;
using std::endl;
#include "MyStudentPrivateinheritance.h"

int main()
{
    MyStudentPrivateinheritance p("123");

    cout << p.getName() << endl;

    return 0;
}