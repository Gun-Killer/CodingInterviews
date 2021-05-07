#include "StaticMemberClasss.h"
#include<iostream>
using namespace std;
int StaticMemberClasss ::m_num1 = 10;

void StaticMemberClasss::methodStatic()
{
	cout << m_num1 << endl;
}
