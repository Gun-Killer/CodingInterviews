#include <iostream>

using namespace std;

extern int external_num;

void updateExternNum(int new_value);

void localExternNum()
{
    int external_num = 15;
    cout<<"local num is "<< external_num<<endl;

}

void updateExternNum(int new_value)
{
    external_num += new_value;
    cout << "update gloabal num" << endl;
}
