#include <iostream>

using namespace std;


template <typename T>
void swap(T& input1, T& input2)
{
    T temp = input1;
    input1 = input2;
    input2 = temp;
}

int main001()
{
    int num1 = 24;
    int num2 = 34;

    ::swap(num1, num2);

    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}