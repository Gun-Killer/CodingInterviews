#include <iostream>
using namespace std;

//�궨��
#define DEFINE_NUM 101

//����ע��
/*����ע��*/
int main1() {

	//�������
	int num = 10;

	const int num1 = 30;



	cout << "Hello World" << num << endl;

	cout << DEFINE_NUM << endl;


	short shory_type_p = 1;
	int int_type_p = 1;

	// windows ��4byte Linux 64bit 8byte 32bit 4byte
	long long_type_p = 1;
	long long long_long_type_p = 1;

	cout << sizeof(long) << endl;

	//Ĭ�������С��ֻ�����5λ
	float float_type_p = 1.0000111f;
	double double_type_p = 1.00011111;
	cout << float_type_p << endl;
	cout << double_type_p << endl;


	char char_type_p = 'a';
	cout << char_type_p << endl;
	cout << (int)char_type_p << endl;
	cout << "char byte " << sizeof(char) << endl;


	cout << "aaaaddd\t123" << endl;


	//�ַ������巽ʽ
	char str[] = "Hello World";
	string str1 = "Hello World";
	cout << str << endl;
	cout << str1 << endl;

	cout << sizeof(bool) << endl;


	float input_p = 1.0;
	cout << "����" << endl;
	cin >> input_p;

	cout << input_p << endl;


	int a = 10;
	cout << a++ << endl;
	cout << ++a << endl;

	return 0;
}