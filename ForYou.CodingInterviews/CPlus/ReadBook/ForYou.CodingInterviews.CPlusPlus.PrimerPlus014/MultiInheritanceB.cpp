#include "MultiInheritanceB.h"
#include <iostream>

Killer::MultiInheritanceB::MultiInheritanceB()
    :MultiInheritanceA()
{
}

Killer::MultiInheritanceB::MultiInheritanceB(int num1, int num2)
    :MultiInheritanceA(num1, num2)
{
}

void Killer::MultiInheritanceB::publicMethod()
{
    std::cout << "MultiInheritanceB::publicMethod exe" << std::endl;
    MultiInheritanceA::publicMethod();
}
