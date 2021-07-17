#include <iostream>

using namespace std;


int sumM(int num1, int num2);




int main003()
{
    int (*pt)(int, int);
    pt = sumM;
    cout << pt(1, 2) << endl;
    return 0;
}

int sumM(int num1, int num2)
{
    return num1 + num2;
}
