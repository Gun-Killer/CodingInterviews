#include <iostream>
using namespace std;

//宏定义
#define DEFINE_NUM 101

//单行注释
/*多行注释*/
int main1() {

	//定义变量
	int num = 10;

	const int num1 = 30;



	cout << "Hello World" << num << endl;

	cout << DEFINE_NUM << endl;


	short shory_type_p = 1;
	int int_type_p = 1;

	// windows 下4byte Linux 64bit 8byte 32bit 4byte
	long long_type_p = 1;
	long long long_long_type_p = 1;

	cout << sizeof(long) << endl;

	//默认情况下小数只会输出5位
	float float_type_p = 1.0000111f;
	double double_type_p = 1.00011111;
	cout << float_type_p << endl;
	cout << double_type_p << endl;


	char char_type_p = 'a';
	cout << char_type_p << endl;
	cout << (int)char_type_p << endl;
	cout << "char byte " << sizeof(char) << endl;


	cout << "aaaaddd\t123" << endl;


	//字符串定义方式
	char str[] = "Hello World";
	string str1 = "Hello World";
	cout << str << endl;
	cout << str1 << endl;

	cout << sizeof(bool) << endl;


	float input_p = 1.0;
	cout << "输入" << endl;
	cin >> input_p;

	cout << input_p << endl;


	int a = 10;
	cout << a++ << endl;
	cout << ++a << endl;

	return 0;
}