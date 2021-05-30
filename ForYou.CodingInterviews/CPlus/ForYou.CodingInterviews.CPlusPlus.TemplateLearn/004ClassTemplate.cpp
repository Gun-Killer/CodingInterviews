#include <iostream>
#include <string>

using namespace std;

#include "TemplateClass.hpp"


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

    cout << typeid(p).name() << endl;


    TemplateClassObject<int, int> p1(1, 2);
    p1.printf();

    return 0;
}