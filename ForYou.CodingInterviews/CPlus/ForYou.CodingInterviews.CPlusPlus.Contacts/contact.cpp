#include <iostream>
#include "contact.h"

using namespace std;

//展示操作
void show_operate()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、删除联系人  *****" << endl;
	cout << "*****  3、更新联系人  *****" << endl;
	cout << "*****  4、显示联系人  *****" << endl;
	cout << "*****  5、退出        *****" << endl;
	cout << "***************************" << endl;
}

//获取用户操作
int read_input()
{
	cout << "请选择操作内容" << endl;
	int input;
	cin >> input;
	return input;
}

contactInfo add_contact()
{
	contactInfo contact;

	cout << "请输入姓名" << endl;
	cin >> contact.name;
	cout << "请输入年龄" << endl;
	cin >> contact.age;
	cout << "请输入手机号" << endl;
	cin >> contact.phone;

	return contact;
}

void save_contact(contactInfo contacts[], int len, contactInfo contact)
{
	for (int i = 0; i < len; i++)
	{
		if (contacts[i].name == "")
		{
			contacts[i] = contact;
			return;
		}
	}

}

void delete_contanct(contactInfo contancts[], int len)
{
	string name;
	cout << "请输入删除人姓名" << endl;
	cin >> name;
	if (name == "")
	{
		cout << "输入为空" << endl;
		return;
	}
	bool mark = false;
	for (int i = 0; i < len; i++)
	{
		if (contancts[i].name == name)
		{
			contancts[i] = { "",0,"" };
			mark = true;
		}
	}
	if (mark == false)
	{
		cout << name << "不存在" << endl;
	}
}
