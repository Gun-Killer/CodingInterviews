#include <iostream>

using namespace std;

int main003()
{
    int num1 = 42;
    int num2 = 0x42;
    int num3 = 042;

    cout << "十进制" << num1 << endl;
    cout << "十六进制" << num2 << endl;
    cout << "8进制" << num3 << endl;

    cout << "-----------------" << endl;
    cout << "十进制" << num1 << endl;
    cout << "十六进制" << hex << num2 << endl;
    cout << "8进制" << oct << num3 << endl;
    return 0;
}