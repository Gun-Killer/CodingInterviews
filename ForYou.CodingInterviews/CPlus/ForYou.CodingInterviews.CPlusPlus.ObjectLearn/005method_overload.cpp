#include <iostream>
#include <string>

using namespace std;

int method(int num1);

//方法参数类型不同
int method(long num1);


//方法参数个数不同
int method(int num1, int num2);

int method(int num1, long num2);

int method(long num1, int num2);

int main5()
{
	cout << method(10) << endl;
	cout << method(11L) << endl;
	cout << method(11, 12) << endl;
	cout << method(13, 14L) << endl;
	cout << method(15L, 16) << endl;

	return 0;
}

int method(int num1)
{
	return num1;
}

int method(long num1)
{
	return num1;
}

int method(int num1, int num2)
{
	return num1 + num2;
}

int method(int num1, long num2)
{
	return num1;
}

int method(long num1, int num2)
{
	return num2;
}
