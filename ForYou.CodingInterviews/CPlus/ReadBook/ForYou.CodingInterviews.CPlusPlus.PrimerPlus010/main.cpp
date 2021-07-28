#include <iostream>
#include "Person.h"
using namespace std;

void test02()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();


    two.Show();
    two.FormalShow();

    three.Show();
    three.FormalShow();
}

int main()
{
    //test02();

    return 0;
}