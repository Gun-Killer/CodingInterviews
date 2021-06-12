#include <iostream>

using namespace std;


class MethodObject
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

int main()
{
    MethodObject obj;
    cout << obj(1, 2) << endl;
    return 0;
}