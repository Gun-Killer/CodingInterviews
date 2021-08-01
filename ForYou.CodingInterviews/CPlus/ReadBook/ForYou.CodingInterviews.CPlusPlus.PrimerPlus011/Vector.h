#pragma once

namespace VECTOR
{
    class Vector
    {
    public:
        enum  Mode
        {
            RECT,
            POL
        };
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode mode = RECT);
        ~Vector();

        Vector operator+(const Vector& v) const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector& v);
        operator double();
    };
}

