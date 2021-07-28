#include "Move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x is:" << x
        << "y is:" << y
        << endl;
}

Move Move::add(const Move& m) const
{
    return Move(m.x + x, m.y + y);
}

void Move::reset(double a, double b)
{
    x = a;
    y = a;
}
