#include "Employee.h"

#include <string>
#include<iostream>
using namespace std;


Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	m_name = name;
	m_did = did;
}

void Employee::showInfo()
{
	cout << "Id: \t" << m_id
		<< "\tName: \t" << m_name
		<< "\tDepartment: \t" << getDepartmentName()
		<< endl;
}

string Employee::getDepartmentName()
{
	return string("Ô±¹¤");
}
