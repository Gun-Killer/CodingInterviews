#include <iostream>
#include <string>

using namespace std;

typedef unsigned int u_int;

#define CHAR_POINTER char*

int main001()
{
    u_int a = 10;
    cout << a << endl;

    CHAR_POINTER k = new char('a');

    delete k;
    return 0;
}
