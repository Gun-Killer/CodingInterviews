#include <iostream>
using namespace std;
#include "student.h"

int main()
{
	
	student s1;
	s1.setAge(10);

	cout << s1.getAge() << endl;

	return 0;
}