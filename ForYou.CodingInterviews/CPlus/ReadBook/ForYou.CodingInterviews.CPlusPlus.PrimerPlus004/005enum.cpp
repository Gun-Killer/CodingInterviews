#include <iostream>

using namespace std;

enum ColorEnum
{
    red = 1,
    blue = 2,
    green = 3,
    orange = 4
};

int main()
{
    ColorEnum p;

    p = blue;
    cout << p << endl;

    p = ColorEnum::orange;
    cout << p << endl;

    p = ColorEnum(1);
    cout << p << endl;

    cout << 10 + green << endl;
    return 0;
}