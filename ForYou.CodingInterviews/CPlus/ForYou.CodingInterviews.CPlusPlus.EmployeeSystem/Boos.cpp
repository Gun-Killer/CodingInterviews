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
	cout << "Id: \t" << m_id
		<< "\tName: \t" << m_name
		<< "\tDepartment: \t" << getDepartmentName()
		<< "\tResponsibility: manage manager"
		<< endl;
}

string Boos::getDepartmentName()
{
	return string("CEO");
}
