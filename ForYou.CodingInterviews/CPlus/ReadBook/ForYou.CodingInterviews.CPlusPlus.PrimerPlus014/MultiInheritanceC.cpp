#include "MultiInheritanceC.h"
#include <iostream>
Killer::MultiInheritanceC::MultiInheritanceC()
    :MultiInheritanceA()
{
}

Killer::MultiInheritanceC::MultiInheritanceC(int num1, int num2)
    : MultiInheritanceA(num1, num2)
{
}

void Killer::MultiInheritanceC::publicMethod()
{
    std::cout << "MultiInheritanceC::publicMethod exe" << std::endl;
    MultiInheritanceA::publicMethod();
}
