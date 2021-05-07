#include <iostream>
#include <string>
#include "StaticMemberClasss.h"
using namespace std;


int main()
{
	cout << StaticMemberClasss::m_num1 << endl;
	StaticMemberClasss::methodStatic();
	return 0;
}