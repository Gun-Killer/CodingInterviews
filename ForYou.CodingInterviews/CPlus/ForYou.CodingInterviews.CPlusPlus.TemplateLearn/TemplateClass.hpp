#pragma once

#include <iostream>

using namespace std;

template<class T1, class T2>
class TemplateClassObject
{
public:
    TemplateClassObject(T1 arg1, T2 arg2);
    T1 m_field1;
    T2 m_field2;

    void printf();
};

template<class T1, class T2>
TemplateClassObject<T1, T2>::TemplateClassObject(T1 arg1, T2 arg2)
{
    this->m_field1 = arg1;
    this->m_field2 = arg2;
}

template<class T1, class T2>
void TemplateClassObject<T1, T2>::printf()
{
    cout << m_field1 << endl;
    cout << m_field2 << endl;
}