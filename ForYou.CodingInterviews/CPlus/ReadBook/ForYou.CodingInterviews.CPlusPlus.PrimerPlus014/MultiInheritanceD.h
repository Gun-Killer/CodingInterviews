#pragma once
#include "MultiInheritanceB.h"
#include "MultiInheritanceC.h"

namespace Killer
{
    class MultiInheritanceD
        : public MultiInheritanceB, public MultiInheritanceC
    {

    public:

        MultiInheritanceD();
        MultiInheritanceD(int num1, int num2);

        virtual void publicMethod() override;
    };
}
