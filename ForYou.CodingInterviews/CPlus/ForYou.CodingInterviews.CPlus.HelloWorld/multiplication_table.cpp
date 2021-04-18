#include <iostream>
using namespace std;


int main4()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << i * j << "\t";
		}
		cout << endl;
	}

	return 0;
}