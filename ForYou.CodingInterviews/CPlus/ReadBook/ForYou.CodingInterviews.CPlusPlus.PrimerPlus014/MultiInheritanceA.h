#pragma once
namespace Killer
{
    class MultiInheritanceA
    {
    private:
        int private_field;
    protected:
        int protect_field;

    public:

        MultiInheritanceA();

        MultiInheritanceA(int num1, int num2);

        virtual void publicMethod();
    };
}

