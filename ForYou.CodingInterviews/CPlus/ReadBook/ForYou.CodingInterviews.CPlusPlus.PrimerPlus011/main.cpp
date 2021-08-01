#include <iostream>
#include "Time.h"
#include "Vector.h"
#include "ComplexNumber.h"

using namespace std;


int main()
{
    /*   Time t1(1, 2);
       Time t2(3, 4);
       auto t3 = t1 + t2;
       t3.show();

       (2.75 * t1).show();
       cout << t1;*/
    
    auto b = Killer::ComplexNumber(1, 2);
    auto a = ~b;
    a.show();
    return 0;
}