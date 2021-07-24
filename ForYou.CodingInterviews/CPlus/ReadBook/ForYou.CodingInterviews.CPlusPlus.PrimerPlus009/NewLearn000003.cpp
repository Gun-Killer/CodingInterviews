#include <iostream>
#include <new> 

class NewLearn0003
{
    char buffer2[200];

public:
    void test01()
    {
        int* p = new(buffer2) int[20];
    }
};