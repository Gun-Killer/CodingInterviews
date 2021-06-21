#include <iostream>

using std::cout;

int main002()
{
    int num1 = 0;

    int num2;
    num2 = 1;

    int num3(3);

    int num4{ 4 };

    int num5{ };//default value 0

     
    cout << num1 << std::endl;
    cout << num2 << std::endl;
    cout << num3 << std::endl;
    cout << num4 << std::endl;

    cout << num5 << std::endl;
    return 0;
}