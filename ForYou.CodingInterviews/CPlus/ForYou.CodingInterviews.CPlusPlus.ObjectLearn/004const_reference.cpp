#include <iostream>
#include <string>

using namespace std;

void const_reference_method(const int& input)
{
	//input = 10;//error
	cout << input << endl;
}

int main()
{
	//int& num1 = 10;// error
	const int& num2 = 20;
	int temp = 30;
	const int* const num3 = &temp;//常量引用的本质
	const_reference_method(temp);
	return 0;
}
