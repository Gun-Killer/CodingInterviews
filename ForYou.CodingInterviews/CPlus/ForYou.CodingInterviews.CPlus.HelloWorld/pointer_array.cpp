#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 10,1,2,5,41 };
	int* p_arr = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << *p_arr << endl;
		p_arr++;
	}
	return 0;
}