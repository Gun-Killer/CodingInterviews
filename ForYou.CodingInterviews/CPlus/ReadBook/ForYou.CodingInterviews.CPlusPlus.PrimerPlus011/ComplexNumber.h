#pragma once
#include <iostream>
namespace Killer
{
    class ComplexNumber
    {
    private:
        double a;
        double b;

    public:
        ComplexNumber();
        ComplexNumber(double a, double b);

        void show();

        ComplexNumber operator+(const ComplexNumber& c) const;
        ComplexNumber operator-(const ComplexNumber& c) const;
        ComplexNumber operator*(const ComplexNumber& c) const;
        friend ComplexNumber operator*(double n, const ComplexNumber& c);
        friend Killer::ComplexNumber operator~(const ComplexNumber& c);
    };
}

