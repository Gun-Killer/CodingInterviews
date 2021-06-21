#include <iostream>

using namespace std;


int main()
{
    cout << "Windows x64" << endl;//
    cout << "\tchar:\t" << sizeof(char) << endl;//1
    cout << "\tshort:\t" << sizeof(short) << endl;//2
    cout << "\tint:\t" << sizeof(int) << endl;//4
    cout << "\tlong:\t" << sizeof(long) << endl;//4
    cout << "\tlong long:\t" << sizeof(long long) << endl;//8
    return 0;
}