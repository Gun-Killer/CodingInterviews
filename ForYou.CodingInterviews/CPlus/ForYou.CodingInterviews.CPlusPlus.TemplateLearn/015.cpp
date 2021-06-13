#include <iostream>

using namespace std;


class MethodObject
{
private:
    int m_count = 0;
public:
    int operator()(int num1, int num2)
    {
        m_count++;
        return num1 + num2;
    }

    int executeNum()
    {
        return m_count;
    }
};

int main()
{
    MethodObject obj;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        cout << obj(rand(), rand()) << endl;
    }

    cout << "************" << endl;

    cout << obj.executeNum() << endl;
    return 0;
}