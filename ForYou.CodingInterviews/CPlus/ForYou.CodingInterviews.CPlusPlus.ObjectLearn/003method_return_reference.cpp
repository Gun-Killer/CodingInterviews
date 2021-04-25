#include <iostream>
#include <string>

using namespace std;

//error do
//
int& method()
{
	int a = 10;
	return a;
}

int& method1()
{
	static int num1 = 10;
	return num1;
}


int main()
{

	int& num1 = method();
	cout << num1 << endl;
	cout << num1 << endl;
	cout << num1 << endl;
	method() = 30;
	cout << num1 << endl;
	cout << num1 << endl;
	cout << num1 << endl;

	int& num2 = method1();
	cout << num2 << endl;
	cout << num2 << endl;
	cout << num2 << endl;

	method1() = 200;//

	cout << num2 << endl;
	cout << num2 << endl;
	cout << num2 << endl;

	return 0;
}