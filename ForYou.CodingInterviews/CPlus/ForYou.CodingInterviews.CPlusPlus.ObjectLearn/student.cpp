#include "student.h"


student::student()
{
	m_age = 0;
}

student::~student()
{

}

int student::getAge()
{
	return m_age;
}

void student::setAge(int age)
{
	m_age = age;
}

