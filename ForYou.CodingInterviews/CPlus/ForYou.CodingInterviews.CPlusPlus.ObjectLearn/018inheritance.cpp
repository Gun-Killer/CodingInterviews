#include <iostream>
#include <string>

using namespace std;



namespace CPP
{
	class PersonObject
	{
	public:
		PersonObject();
		~PersonObject();

		string m_name;
		int m_age;
	private:

	};

	PersonObject::PersonObject()
	{
	}

	PersonObject::~PersonObject()
	{
	}

	class  ManObecjt:public PersonObject
	{
	public:
		ManObecjt();
		~ManObecjt();

	private:

	};

	ManObecjt::ManObecjt()
	{
		
	}

	ManObecjt::~ManObecjt()
	{
	}
}

int main18()
{
	CPP::ManObecjt man_obj1;
	man_obj1.m_name = "name";
	man_obj1.m_age = 20;

	cout << man_obj1.m_name << endl;
	return 0;
}