#include "ComplexNumber.h"

Killer::ComplexNumber::ComplexNumber()
{
    a = 0.0;
    b = 0.0;
}

Killer::ComplexNumber::ComplexNumber(double a, double b)
{
    this->a = a;
    this->b = b;
}

void Killer::ComplexNumber::show()
{
    std::cout << a << " + " << b << "i" << std::endl;
}

Killer::ComplexNumber Killer::ComplexNumber::operator+(const ComplexNumber& c) const
{
    return ComplexNumber(this->a + c.a, this->b + c.b);
}

Killer::ComplexNumber Killer::ComplexNumber::operator-(const ComplexNumber& c) const
{
    return ComplexNumber(a - c.a, b - c.b);
}

Killer::ComplexNumber Killer::ComplexNumber::operator*(const ComplexNumber& c) const
{
    return ComplexNumber(a * c.a - b * c.b, a * c.b + b * c.a);
}

Killer::ComplexNumber Killer::operator*(double n, const ComplexNumber& c)
{
    return ComplexNumber(n * c.a, n * c.b);
}

Killer::ComplexNumber Killer::operator~(const ComplexNumber& c)
{
    return Killer::ComplexNumber(c.a, -c.b);
}
