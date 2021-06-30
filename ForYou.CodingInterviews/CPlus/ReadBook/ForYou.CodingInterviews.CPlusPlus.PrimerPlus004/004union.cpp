#include <iostream>
#include <string>
using namespace std;

union IdUnion
{
    long m_long;
    double m_double;
    int m_int;
};

int main004()
{
    IdUnion p;
    p.m_long = 1000000;
    
    cout << p.m_long << endl;
    cout << p.m_double << endl;
    cout << p.m_int << endl;


    cout << "*************" << endl;

    p.m_double = 1000000;
    cout << p.m_long << endl;
    cout << p.m_double << endl;
    cout << p.m_int << endl;


    cout << "*************" << endl;

    p.m_int = 1000000;
    cout << p.m_long << endl;
    cout << p.m_double << endl;
    cout << p.m_int << endl;
 
    return 0;
}