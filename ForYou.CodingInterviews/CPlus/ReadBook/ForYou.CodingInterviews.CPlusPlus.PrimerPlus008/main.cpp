#include <iostream>

#include "InnerMethod.h"
#include "ReferenceMethodParameter.h"
#include "ReadBookExercise01.h"
using namespace std;

int main()
{

    //InnerMethod p;
    //p.test1();

    //p.test2();


    /*ReferenceMethodParameter  p1;
    int a = 10;
    int b = 20;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    p1.test1(a, b);
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;


    p1.test2(&a, &b);
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;*/
    /* ReferenceMethodParameter  p2;
     auto res = p2.test3();

     cout << res << endl;
     res = 30;*/

    ReadBookExercise01 p2;
    cout << p2.average<double>(1.0, 2.0) << endl;


    float m = 10.0f;

    decltype ((m)) h = m;
    return 0;
}