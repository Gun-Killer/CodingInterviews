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
};

int main()
{
	person p;
	p.m_age = 10;

	cout << p.getAge() << endl;

	return 0;
}