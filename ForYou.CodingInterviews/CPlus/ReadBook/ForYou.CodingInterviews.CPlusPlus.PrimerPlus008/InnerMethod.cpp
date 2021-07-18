#include "InnerMethod.h"
using namespace std;
void InnerMethod::test1()
{
    std::cout << sum(1, 2) << std::endl;
}

void InnerMethod::test2()
{
    int num1 = 20;
    int& num_r = num1;
    cout << "num1 address is " << &num1 << endl;
    cout << "num_r address is " << &num_r << endl;
}

inline int InnerMethod::sum(int num1, int num2)
{
    return num1 + num2;
}
