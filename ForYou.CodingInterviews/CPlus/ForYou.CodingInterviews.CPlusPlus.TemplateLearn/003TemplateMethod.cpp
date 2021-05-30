#include <iostream>

using namespace std;

template <class T>
bool objEqueals(T& input1, T& input2)
{
    return input1 == input2;
}


class StudentObject
{
public :
    StudentObject(int age)
    {
        m_age = age;
    }
    int m_age;

    bool operator==(StudentObject& a)
    {
        return this->m_age == a.m_age;
    }
};

template<> bool objEqueals(StudentObject& input1, StudentObject& input2)
{
    cout << "---" << endl;
    return input1.m_age == input2.m_age;
}

int main003()
{
    StudentObject a(1);
    StudentObject b(2);
    cout << objEqueals(a, b) << endl;
    return 0;
}