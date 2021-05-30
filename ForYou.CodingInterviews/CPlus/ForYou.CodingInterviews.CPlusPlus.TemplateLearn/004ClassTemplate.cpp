#include <iostream>
#include <string>

using namespace std;


template <class T1,class T2>
class PersonObject
{
public:
    PersonObject(T1 name, T2 age)
    {
        m_name = name;
        m_age = age;
    }
    T1 m_name;
    T2 m_age;
};


int main()
{
    PersonObject<string, int> p("kk", 10);

    return 0;
}