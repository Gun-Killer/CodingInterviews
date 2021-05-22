#include "WorkerManager.h"
#include <iostream>

using namespace std;

WorkerManager::WorkerManager()
{

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

WorkerManager::~WorkerManager()
{

}