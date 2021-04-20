#include <iostream>
#include "pointer_swap.h"

using namespace std;

int main()
{
	int num1 = 20;
	int num2 = 30;

	cout << num1 << endl;
	cout << num2 << endl;

	swap(&num1, &num2);

	cout << num1 << endl;
	cout << num2 << endl;

	return 0;
}