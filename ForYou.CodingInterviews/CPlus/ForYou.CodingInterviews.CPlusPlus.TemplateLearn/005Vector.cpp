#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void test(int val)
{
    cout << val << endl;
}
int main()
{
    vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);


    for_each(array.begin(), array.end(), test);


    vector<int>::iterator begin = array.begin();
    vector<int>::iterator end = array.end();

    cout << "--------------------" << endl;
    while (begin != end)
    {
        cout << *begin._Ptr << endl;
        begin++;
    }

    cout << "--------------------" << endl;
    vector<int>::iterator begin1 = array.begin();

    for (; begin1 != end; begin1++)
    {
        cout << *begin1._Ptr << endl;
    }
    return 0;
}