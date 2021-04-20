#include <iostream>

using namespace std;

int main9()
{
	int num = 20;
	int* p_num = &num;

	cout << num << endl;
	cout << p_num << endl;
	cout << (long)p_num << endl;

	cout << *p_num << endl;
	*p_num = 200;
	cout << *p_num << endl;
	cout << num << endl;
	return 0;
}