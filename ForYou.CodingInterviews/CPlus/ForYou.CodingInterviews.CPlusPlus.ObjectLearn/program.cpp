#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[1000];

	arr[0] = 100;

	int* int_num_1 = new int(100);

	cout << *int_num_1 << endl;

	delete int_num_1;
	delete[] arr;
	return 0;
}