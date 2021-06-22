#include <iostream>

using namespace std;

int main004()
{
    float num1 = 10.6e20f;

    cout << num1 << endl;

    cout << 8.0f << endl;
    cout << 8.0e+5 << endl;
    cout << 8.0e+5 << endl;


    cout << "-------------------" << endl;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    cout << "-------------------" << endl;

    float num2 = 10.0f / 3.0f;
    double num3 = 10.0 / 3.0;

    const float million = 1.0e6f;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << num2 * million << endl;
    cout << num3 * million << endl;

    cout << num2 * million * 10.0f << endl;
    cout << num3 * million *10.0f << endl;

    return 0;
}