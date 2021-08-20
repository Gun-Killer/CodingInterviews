#include "MultiInheritanceD.h"
#include <iostream>

Killer::MultiInheritanceD::MultiInheritanceD()
    :MultiInheritanceA(), MultiInheritanceB(), MultiInheritanceC()
{
}

// 此处不主动调用MultiInheritanceA 构造函数将默认调用不带参数的构造函数
// 此处的B，C将不会再调用A的构造函数 公用一个A基础类
Killer::MultiInheritanceD::MultiInheritanceD(int num1, int num2)
    :  MultiInheritanceA(num1, num2), MultiInheritanceB(num1, num2), MultiInheritanceC(num1, num2)
{
}

void Killer::MultiInheritanceD::publicMethod()
{
    std::cout << "MultiInheritanceD::publicMethod exe" << std::endl;
    MultiInheritanceA::publicMethod();
    MultiInheritanceB::publicMethod();
    MultiInheritanceC::publicMethod();
}
