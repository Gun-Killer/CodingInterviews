#include <iostream>

using namespace std;

int main()
{
    int num1 = 42;
    int num2 = 0x42;
    int num3 = 042;

    cout << "ʮ����" << num1 << endl;
    cout << "ʮ������" << num2 << endl;
    cout << "8����" << num3 << endl;

    cout << "-----------------" << endl;
    cout << "ʮ����" << num1 << endl;
    cout << "ʮ������" << hex << num2 << endl;
    cout << "8����" << oct << num3 << endl;
}