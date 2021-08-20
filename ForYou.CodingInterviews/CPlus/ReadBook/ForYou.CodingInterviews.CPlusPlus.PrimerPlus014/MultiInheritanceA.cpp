#include "MultiInheritanceA.h"
#include <iostream>
Killer::MultiInheritanceA::MultiInheritanceA()
    :private_field(0), protect_field(0)
{
}
Killer::MultiInheritanceA::MultiInheritanceA(int num1, int num2)
    : private_field(num1), protect_field(num2)
{
}
void Killer::MultiInheritanceA::publicMethod()
{
    std::cout << "MultiInheritanceA::publicMethod exe" << std::endl;
}
