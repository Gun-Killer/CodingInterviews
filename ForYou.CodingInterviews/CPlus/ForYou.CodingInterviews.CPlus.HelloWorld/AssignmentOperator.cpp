#include <iostream>
using namespace std;

int main2() {

	int num = 0;

	//num=num + 1;
	num += 1;

	cout << num << endl;

	int compare_num = 3;

	bool compare_res = (num == compare_num);

	cout << compare_res << endl;


	bool logic = true;

	cout << !logic << endl;
	cout << !!logic << endl;

	cout << (logic && (!logic)) << endl;


	system("pause");

	return 0;
}