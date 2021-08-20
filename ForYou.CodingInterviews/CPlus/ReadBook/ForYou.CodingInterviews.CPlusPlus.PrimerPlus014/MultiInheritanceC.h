#pragma once
#include "MultiInheritanceA.h"
namespace Killer
{
    class MultiInheritanceC :
        virtual public MultiInheritanceA
    {
    public:
        MultiInheritanceC();
        MultiInheritanceC(int num1, int num2);

        virtual void publicMethod() override;
    };
}

