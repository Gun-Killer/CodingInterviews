#include <iostream>
#include <string>

using namespace std;

class person
{
public:

	int m_age;

	int getAge()
	{
		return m_age;
	}

protected :
	string name;
public:

	void show()
	{
		name;
	}

	void setName(string name)
	{
		cout << name << endl;
	}
};

int main()
{
	person p;
	p.m_age = 10;

	cout << p.getAge() << endl;

	p.setName("hhh");
	p.show();

	return 0;
}