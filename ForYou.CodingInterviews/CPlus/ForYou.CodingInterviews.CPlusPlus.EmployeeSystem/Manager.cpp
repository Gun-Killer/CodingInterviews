#include "Manager.h"
#include <string>
#include <iostream>

using namespace std;

Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

void Manager::showInfo()
{
	cout << "Id: " << m_id
		<< "\tName: " << m_name
		<< "\tDepartment: " << getDepartmentName()
		<< "\tResponsibility: manage employee"
		<< endl;
}

string Manager::getDepartmentName()
{
	return string("№ЬАн");
}
