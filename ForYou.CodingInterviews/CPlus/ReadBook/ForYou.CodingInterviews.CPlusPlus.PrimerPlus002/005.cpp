#include <iostream>

using namespace std;


int main005()
{
    char c = 'Q';
    cout << int(c) << endl;
    cout << (int)c << endl;
    cout << static_cast<int>(c) << endl;
    return 0;
}