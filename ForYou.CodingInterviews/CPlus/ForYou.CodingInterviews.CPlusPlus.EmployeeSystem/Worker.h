#pragma once

#include <string>
using namespace std;

class Worker
{
public:
	virtual void showInfo() = 0;

	virtual string getDepartmentName() = 0;

	int m_id;

	string m_name;

	//����id
	int m_did;
};