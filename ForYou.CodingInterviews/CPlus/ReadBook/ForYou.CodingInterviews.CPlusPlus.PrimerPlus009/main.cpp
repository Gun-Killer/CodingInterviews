#include <iostream>

#include "Learn000001.h"
using namespace std;

int external_num = 10;

void updateExternNum(int new_value);

void localExternNum();

int main()
{
    //cout << global << endl;

    //Learn000001().test001();
    updateExternNum(11);

    localExternNum();

    return 0;
}