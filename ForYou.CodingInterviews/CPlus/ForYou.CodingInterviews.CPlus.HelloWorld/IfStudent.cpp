#include <iostream>

using namespace std;


int main() {

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


	return 0;
}