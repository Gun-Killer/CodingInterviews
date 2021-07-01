#include <iostream>

using namespace std;

int main()
{
    int* p1 = new int(10);

    cout <<"new int *p1 = " << *p1 << endl;
    delete p1;


    int* p2 = new int[10]{ 1 };

    cout << "new int[] *p2 = " << p2[0] << endl;

    delete[] p2;

    return 0;
}