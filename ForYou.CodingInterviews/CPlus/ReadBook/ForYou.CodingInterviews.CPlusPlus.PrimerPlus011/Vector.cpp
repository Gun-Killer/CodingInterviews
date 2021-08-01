#include "Vector.h"
#include <math.h>

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void VECTOR::Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
        {
            ang = 0.0;
        }
        else
        {
            ang = atan2(y, x);
        }
    }

    void VECTOR::Vector::set_x()
    {
        x = mag * cos(ang);
    }

    void VECTOR::Vector::set_y()
    {
        y = mag * sin(ang);
    }

    VECTOR::Vector::Vector()
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    VECTOR::Vector::Vector(double n1, double n2, Mode mode)
    {

        this->mode = mode;
        if (mode == RECT)
        {
            this->x = n1;
            this->y = n2;
            set_ang();
            set_mag();
        }
        else
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
    }

    VECTOR::Vector::~Vector()
    {
    }

    Vector VECTOR::Vector::operator+(const Vector& v) const
    {
        return Vector(this->x + v.x, this->y + v.y, RECT);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(this->x * n, this->y * n, RECT);
    }
    Vector::operator double()
    {
        return mag;
    }
    Vector operator*(double n, const Vector& v)
    {
        return v * 3;
    }
}
