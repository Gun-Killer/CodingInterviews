#include "Boos.h"
#include <iostream>
#include<string>
using namespace std;

Boos::Boos(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

void Boos::showInfo()
{
	cout << "Id: " << m_id
		<< "\tName: " << m_name
		<< "\tDepartment: " << getDepartmentName()
		<< "\tResponsitory: manage manager"
		<< endl;
}

string Boos::getDepartmentName()
{
	return string("CEO");
}
