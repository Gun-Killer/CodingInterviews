#include <iostream>
#include "contact.h"

using namespace std;

//չʾ����
void show_operate()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2��ɾ����ϵ��  *****" << endl;
	cout << "*****  3��������ϵ��  *****" << endl;
	cout << "*****  4����ʾ��ϵ��  *****" << endl;
	cout << "*****  5���˳�        *****" << endl;
	cout << "***************************" << endl;
}

//��ȡ�û�����
int read_input()
{
	cout << "��ѡ���������" << endl;
	int input;
	cin >> input;
	return input;
}

contactInfo add_contact()
{
	contactInfo contact;

	cout << "����������" << endl;
	cin >> contact.name;
	cout << "����������" << endl;
	cin >> contact.age;
	cout << "�������ֻ���" << endl;
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
	cout << "������ɾ��������" << endl;
	cin >> name;
	if (name == "")
	{
		cout << "����Ϊ��" << endl;
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
		cout << name << "������" << endl;
	}
}
