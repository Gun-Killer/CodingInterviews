#include <iostream>
using namespace std;

int main1()
{
	int* arr = new int[1000];

	arr[0] = 100;

	int* int_num_1 = new int(100);

	cout << *int_num_1 << endl;

	delete int_num_1;
	delete[] arr;


	int num2 = 10;
	int* p = &num2;
	cout << num2 << endl;

	*p = 20;
	cout << num2 << endl;

	int& num3 = num2;//给变量num2起个别名num3
	num3 = 30;
	cout << num2 << endl;

	return 0;
}