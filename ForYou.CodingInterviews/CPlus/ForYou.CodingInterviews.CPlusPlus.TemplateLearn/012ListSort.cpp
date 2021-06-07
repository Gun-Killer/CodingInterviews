#include <iostream>
#include <list>

using namespace std;

struct ListItemObject
{
    ListItemObject(int num1, int num2)
        :m_num1(num1), m_num2(num2)
    {

    }
    int m_num1;
    int m_num2;
};

bool listItemObjectSort(ListItemObject & p1, ListItemObject&p2)
{
    if (p1.m_num1 == p2.m_num1) 
    {
        return p1.m_num2 < p2.m_num2;
    }

    return p1.m_num1 < p2.m_num1;
}

int main()
{
    list< ListItemObject> p;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        p.push_back(ListItemObject(rand(), rand()));
    }

    for (list< ListItemObject>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << "\t" << begin->m_num1 << "\t" << begin->m_num2 << endl;
    }
    cout << "*******************************" << endl;
    p.sort(listItemObjectSort);
    for (list< ListItemObject>::iterator begin = p.begin(); begin != p.end(); begin++)
    {
        cout << "\t" << begin->m_num1 << "\t" << begin->m_num2 << endl;
    }
    return 0;
}