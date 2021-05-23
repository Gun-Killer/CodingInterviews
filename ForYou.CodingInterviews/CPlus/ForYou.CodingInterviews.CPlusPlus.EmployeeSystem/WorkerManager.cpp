#include "WorkerManager.h"
#include <iostream>

using namespace std;

WorkerManager::WorkerManager()
{
	this->m_count = 0;
	this->m_array = NULL;
}

void WorkerManager::showMenu()
{
	cout << "**********************************************************" << endl;
	cout << "******* Welcome To Use Employee Management System ********" << endl;
	cout << "******* 0.Exit   System                           ********" << endl;
	cout << "******* 1.Add    Employee                         ********" << endl;
	cout << "******* 2.Show   Employee Infomation              ********" << endl;
	cout << "******* 3.Delete Employee                         ********" << endl;
	cout << "******* 4.Modify Employee Infomation              ********" << endl;
	cout << "******* 5.Find   Employee                         ********" << endl;
	cout << "******* 6.Sort   By       Id                      ********" << endl;
	cout << "******* 7.Clear  All                              ********" << endl;
	cout << "**********************************************************" << endl;
}

void WorkerManager::exit()
{
	cout << "Welcome Next Use" << endl;
	system("pause");
	std::exit(0);
}

void WorkerManager::add()
{
	cout << "add count" << endl;
	int add_count;
	cin >> add_count;
	if (add_count < 1)
	{
		cout << "input error" << endl;
		system("pause");
		return;
	}

	int current_count = this->m_count + add_count;
	Worker** new_array = new Worker * [current_count];
	if (this->m_array != NULL)
	{
		for (int i = 0; i < this->m_count; i++)
		{
			new_array[i] = this->m_array[i];
		}
	}

	for (int i = this->m_count; i < current_count; i++)
	{
		int id;
		string name;
		int did;
		cout << "input id" << endl;
		cin >> id;
		cout << "input name" << endl;
		cin >> name;
		showDepartment();
		cout << "input depatment" << endl;
		cin >> did;

		switch (did)
		{
		case 1:
			new_array[i] = new Employee(id, name, 1);
			break;
		case 2:
			new_array[i] = new Manager(id, name, 2);
			break;
		case 3:
			new_array[i] = new Boos(id, name, 3);
			break;
		}
	}
	if (this->m_array != NULL)
	{
		delete[] this->m_array;
	}
	this->m_count = current_count;
	this->m_array = new_array;

	save();
}


WorkerManager::~WorkerManager()
{
	if (this->m_array == NULL)
	{
		return;
	}
	delete[] this->m_array;
	this->m_array = NULL;
}

void WorkerManager::showDepartment()
{
	cout << "1¡¢Employee" << endl;
	cout << "2¡¢Manager" << endl;
	cout << "3¡¢Boss" << endl;
}

void WorkerManager::save()
{
	if (this->m_count < 1)
	{
		return;
	}

	ofstream save_file;
	save_file.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_count; i++)
	{
		save_file << m_array[i]->m_id << " "
			<< m_array[i]->m_name << " "
			<< m_array[i]->m_did
			<< endl;
	}
	save_file.close();
}
