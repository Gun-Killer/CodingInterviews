#include <iostream>

using namespace std;


int main3() {

	int score;

	cout << "输入分数" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "考上985" << endl;
	}
	else
	{
		cout << "糟糕" << endl;
	}

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int max = num1;
	if (max > num2)
	{
		if (max < num3)
		{
			max = num3;
		}
	}
	else
	{
		max = num2;
		if (max < num3)
		{
			max = num3;
		}
	}

	return 0;
}