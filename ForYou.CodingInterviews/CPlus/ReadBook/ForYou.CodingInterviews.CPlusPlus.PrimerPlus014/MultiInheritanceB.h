#pragma once
#include "MultiInheritanceA.h"

namespace Killer
{
    class MultiInheritanceB :
       virtual public MultiInheritanceA
    {
    public:
        MultiInheritanceB();

        MultiInheritanceB(int num1, int num2);

        virtual void publicMethod() override;
    };
}

