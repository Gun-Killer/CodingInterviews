#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap_pointer(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap_reference(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main2()
{
	int num1 = 10;
	int num2 = 20;

	swap(num1, num2);
	cout << "num1:\t" << num1 << endl;
	cout << "num2:\t" << num2 << endl;
	num1 = 10;
	num2 = 20;

	swap_pointer(&num1, &num2);
	cout << "num1:\t" << num1 << endl;
	cout << "num2:\t" << num2 << endl;
	num1 = 10;
	num2 = 20;

	swap_reference(num1, num2);
	cout << "num1:\t" << num1 << endl;
	cout << "num2:\t" << num2 << endl;
	num1 = 10;
	num2 = 20;

	return 0;
}