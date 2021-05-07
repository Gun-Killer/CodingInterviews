#include <iostream>
using namespace std;
#include "initListLearn.h"

int main10()
{
	initListLearn p1;

	cout << p1.num1 << endl;
	cout << p1.num2 << endl;

	initListLearn p2{ 10,20 };
	cout << p2.num1 << endl;
	cout << p2.num2 << endl;
	return 0;
}