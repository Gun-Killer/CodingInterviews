#include <iostream>
using namespace std;

int main()
{
    int num1[3];
    for (int i = 0; i < 3; i++)
    {
        num1[0] = i;
    }

    int num2[3] = { 1,2,3 };

    for (int i = 0; i < 3; i++)
    {
        cout << num2[i] << "       ";
    }

    int num3[3] = { 0 }; // all item 0;

    int num4[] = { 6,5 };// array len is 2

    int num5[3] = { 1 }; // first is 1, other is 0;
    return 0;
}