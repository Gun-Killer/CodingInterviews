#include <iostream>
#include <vector>
#include <string>
using namespace std;

class VertorItemObject
{
public:
    VertorItemObject(int num1, int num2)
        :m_num1(num1), m_num2(num2)
    {

    }
    int m_num1;
    int m_num2;

    string toString()
    {
        return to_string(m_num1) + to_string(m_num2);
    }
};

int main()

{
    vector<VertorItemObject> p;
    p.push_back(VertorItemObject(1, 2));
    p.push_back(VertorItemObject(3, 4));
    p.push_back(VertorItemObject(5, 6));

    for (vector<VertorItemObject>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << begin->toString() << endl;
    }

    return 0;
}