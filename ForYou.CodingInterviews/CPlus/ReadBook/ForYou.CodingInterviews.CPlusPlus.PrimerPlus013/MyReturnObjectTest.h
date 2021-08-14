#pragma once
#include <iostream>
using namespace std;

class MyReturnObjectTest
{
public:
    MyReturnObjectTest()
    {

    }

    MyReturnObjectTest(const MyReturnObjectTest& source)
    {
        cout << "copy constructor exe" << endl;
    }

    ~MyReturnObjectTest()
    {

    }

private:

};